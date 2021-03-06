# -*- coding: utf-8 -*-

import os
from shutil import copyfile, rmtree, move
from base64 import standard_b64encode

prj_path = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
proto_path = f'{prj_path}/schemas/proto'


# ------------------------------ compile the proto
# generate cpp_out folder
cpp_out_path = f'{proto_path}/foxglove_pb'
if not os.path.exists(cpp_out_path):
    os.makedirs(cpp_out_path)
else:
    rmtree(cpp_out_path)
    os.makedirs(cpp_out_path)

# compile file
cmd = f'protoc --proto_path={proto_path} --cpp_out={cpp_out_path} {proto_path}/foxglove/*.proto'
os.system(cmd)

# move headers and src to folder
pb_file_path = f'{cpp_out_path}/foxglove'
for pb_file_name in os.listdir(pb_file_path):
    if pb_file_name.endswith(".h"):
        try:
            move(f'{pb_file_path}/{pb_file_name}', f'{prj_path}/include/foxglove/{pb_file_name}')
        except IOError as e:
            print("Unable to copy file: %s" %e)
            exit(1)
    elif pb_file_name.endswith(".cc"):
        try:
            move(f'{pb_file_path}/{pb_file_name}', f'{prj_path}/src/foxglove_pb/{pb_file_name}')
        except IOError as e:
            print("Unable to copy file: %s" %e)
            exit(1)

rmtree(pb_file_path)
os.rmdir(cpp_out_path)

# ------------------------------ get schema
# generate desc folder
desc_path = f'{proto_path}/desc'
if not os.path.exists(desc_path):
    os.makedirs(desc_path)

# generate desc
pb_path = f'{proto_path}/foxglove'
pb_name_list = os.listdir(pb_path)

for pb_name in pb_name_list:   
    pb_no_suffix = pb_name.split('.')[0]
    
    desc_name = f'{pb_no_suffix}.desc'
    
    cmd = f'protoc --proto_path={proto_path} --include_imports --descriptor_set_out={desc_path}/{desc_name} {proto_path}/foxglove/{pb_name}'

    os.system(cmd)


# generate scheam
f_name_list = os.listdir(desc_path)
f_path_list = []
for f_name in f_name_list:
    f_path = rf"{desc_path}/{f_name}"
    f_path_list.append(f_path)

schema_pb_name = 'schema_pb.hpp'
schema_pb_path = f'{proto_path}/{schema_pb_name}'
with open(schema_pb_path, 'w') as f_write:
    f_write.write('// schema_pb.hpp is automatically generated by compile_proto.py. please do not change here')
    f_write.write('\n\n')
    f_write.write('#ifndef STUDIO_SERVER__SCHEMA_HPP_ \n')
    f_write.write('#define STUDIO_SERVER__SCHEMA_HPP_ \n')
    f_write.write('\n\n')
    f_write.write('namespace studio_server::schema{ \n')

    for f_id, f_path in enumerate(f_path_list):
        f_name = f_name_list[f_id].replace('.', '_')
        f_write.write('\tconst std::string ')
        f_write.write(f_name)
        f_write.write('{"')

        with open(f_path, 'rb') as schema_bin:
            schema_base64 = standard_b64encode(schema_bin.read()).decode("ascii")

        f_write.write(schema_base64)
        f_write.write('"};\n')

    f_write.write('} \n')
    f_write.write('\n')
    f_write.write('#endif //STUDIO_SERVER__SCHEMA_HPP_ \n')

# rm desc
rmtree(desc_path)    

# copy the output file to include
try:
    move(f'{schema_pb_path}', f'{prj_path}/include/studio_server/{schema_pb_name}')
except IOError as e:
    print("Unable to copy file: %s" %e)
    exit(1)
