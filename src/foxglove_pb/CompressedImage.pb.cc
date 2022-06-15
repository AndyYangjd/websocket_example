// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: foxglove/CompressedImage.proto

#include "foxglove/CompressedImage.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_google_2fprotobuf_2ftimestamp_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fprotobuf_2ftimestamp_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Timestamp;
}  // namespace protobuf_google_2fprotobuf_2ftimestamp_2eproto
namespace foxglove {
class CompressedImageDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<CompressedImage>
      _instance;
} _CompressedImage_default_instance_;
}  // namespace foxglove
namespace protobuf_foxglove_2fCompressedImage_2eproto {
static void InitDefaultsCompressedImage() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::foxglove::_CompressedImage_default_instance_;
    new (ptr) ::foxglove::CompressedImage();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::foxglove::CompressedImage::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_CompressedImage =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsCompressedImage}, {
      &protobuf_google_2fprotobuf_2ftimestamp_2eproto::scc_info_Timestamp.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_CompressedImage.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::foxglove::CompressedImage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::foxglove::CompressedImage, timestamp_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::foxglove::CompressedImage, data_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::foxglove::CompressedImage, format_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::foxglove::CompressedImage)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::foxglove::_CompressedImage_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "foxglove/CompressedImage.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\036foxglove/CompressedImage.proto\022\010foxglo"
      "ve\032\037google/protobuf/timestamp.proto\"^\n\017C"
      "ompressedImage\022-\n\ttimestamp\030\001 \001(\0132\032.goog"
      "le.protobuf.Timestamp\022\014\n\004data\030\002 \001(\014\022\016\n\006f"
      "ormat\030\003 \001(\tb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 179);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "foxglove/CompressedImage.proto", &protobuf_RegisterTypes);
  ::protobuf_google_2fprotobuf_2ftimestamp_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_foxglove_2fCompressedImage_2eproto
namespace foxglove {

// ===================================================================

void CompressedImage::InitAsDefaultInstance() {
  ::foxglove::_CompressedImage_default_instance_._instance.get_mutable()->timestamp_ = const_cast< ::google::protobuf::Timestamp*>(
      ::google::protobuf::Timestamp::internal_default_instance());
}
void CompressedImage::clear_timestamp() {
  if (GetArenaNoVirtual() == NULL && timestamp_ != NULL) {
    delete timestamp_;
  }
  timestamp_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CompressedImage::kTimestampFieldNumber;
const int CompressedImage::kDataFieldNumber;
const int CompressedImage::kFormatFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CompressedImage::CompressedImage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_foxglove_2fCompressedImage_2eproto::scc_info_CompressedImage.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:foxglove.CompressedImage)
}
CompressedImage::CompressedImage(const CompressedImage& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.data().size() > 0) {
    data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.data_);
  }
  format_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.format().size() > 0) {
    format_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.format_);
  }
  if (from.has_timestamp()) {
    timestamp_ = new ::google::protobuf::Timestamp(*from.timestamp_);
  } else {
    timestamp_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:foxglove.CompressedImage)
}

void CompressedImage::SharedCtor() {
  data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  format_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  timestamp_ = NULL;
}

CompressedImage::~CompressedImage() {
  // @@protoc_insertion_point(destructor:foxglove.CompressedImage)
  SharedDtor();
}

void CompressedImage::SharedDtor() {
  data_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  format_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete timestamp_;
}

void CompressedImage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* CompressedImage::descriptor() {
  ::protobuf_foxglove_2fCompressedImage_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_foxglove_2fCompressedImage_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const CompressedImage& CompressedImage::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_foxglove_2fCompressedImage_2eproto::scc_info_CompressedImage.base);
  return *internal_default_instance();
}


void CompressedImage::Clear() {
// @@protoc_insertion_point(message_clear_start:foxglove.CompressedImage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  format_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && timestamp_ != NULL) {
    delete timestamp_;
  }
  timestamp_ = NULL;
  _internal_metadata_.Clear();
}

bool CompressedImage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:foxglove.CompressedImage)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .google.protobuf.Timestamp timestamp = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_timestamp()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes data = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_data()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string format = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_format()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->format().data(), static_cast<int>(this->format().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "foxglove.CompressedImage.format"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:foxglove.CompressedImage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:foxglove.CompressedImage)
  return false;
#undef DO_
}

void CompressedImage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:foxglove.CompressedImage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.protobuf.Timestamp timestamp = 1;
  if (this->has_timestamp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_timestamp(), output);
  }

  // bytes data = 2;
  if (this->data().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->data(), output);
  }

  // string format = 3;
  if (this->format().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->format().data(), static_cast<int>(this->format().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "foxglove.CompressedImage.format");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->format(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:foxglove.CompressedImage)
}

::google::protobuf::uint8* CompressedImage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:foxglove.CompressedImage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.protobuf.Timestamp timestamp = 1;
  if (this->has_timestamp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_timestamp(), deterministic, target);
  }

  // bytes data = 2;
  if (this->data().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->data(), target);
  }

  // string format = 3;
  if (this->format().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->format().data(), static_cast<int>(this->format().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "foxglove.CompressedImage.format");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->format(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:foxglove.CompressedImage)
  return target;
}

size_t CompressedImage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:foxglove.CompressedImage)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bytes data = 2;
  if (this->data().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->data());
  }

  // string format = 3;
  if (this->format().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->format());
  }

  // .google.protobuf.Timestamp timestamp = 1;
  if (this->has_timestamp()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *timestamp_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CompressedImage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:foxglove.CompressedImage)
  GOOGLE_DCHECK_NE(&from, this);
  const CompressedImage* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const CompressedImage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:foxglove.CompressedImage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:foxglove.CompressedImage)
    MergeFrom(*source);
  }
}

void CompressedImage::MergeFrom(const CompressedImage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:foxglove.CompressedImage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.data().size() > 0) {

    data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.data_);
  }
  if (from.format().size() > 0) {

    format_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.format_);
  }
  if (from.has_timestamp()) {
    mutable_timestamp()->::google::protobuf::Timestamp::MergeFrom(from.timestamp());
  }
}

void CompressedImage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:foxglove.CompressedImage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CompressedImage::CopyFrom(const CompressedImage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:foxglove.CompressedImage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CompressedImage::IsInitialized() const {
  return true;
}

void CompressedImage::Swap(CompressedImage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CompressedImage::InternalSwap(CompressedImage* other) {
  using std::swap;
  data_.Swap(&other->data_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  format_.Swap(&other->format_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(timestamp_, other->timestamp_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata CompressedImage::GetMetadata() const {
  protobuf_foxglove_2fCompressedImage_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_foxglove_2fCompressedImage_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace foxglove
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::foxglove::CompressedImage* Arena::CreateMaybeMessage< ::foxglove::CompressedImage >(Arena* arena) {
  return Arena::CreateInternal< ::foxglove::CompressedImage >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
