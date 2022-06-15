// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: foxglove/GeoJSON.proto

#include "foxglove/GeoJSON.pb.h"

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

namespace foxglove {
class GeoJSONDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<GeoJSON>
      _instance;
} _GeoJSON_default_instance_;
}  // namespace foxglove
namespace protobuf_foxglove_2fGeoJSON_2eproto {
static void InitDefaultsGeoJSON() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::foxglove::_GeoJSON_default_instance_;
    new (ptr) ::foxglove::GeoJSON();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::foxglove::GeoJSON::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_GeoJSON =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsGeoJSON}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_GeoJSON.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::foxglove::GeoJSON, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::foxglove::GeoJSON, geojson_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::foxglove::GeoJSON)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::foxglove::_GeoJSON_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "foxglove/GeoJSON.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\026foxglove/GeoJSON.proto\022\010foxglove\"\032\n\007Ge"
      "oJSON\022\017\n\007geojson\030\001 \001(\tb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 70);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "foxglove/GeoJSON.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_foxglove_2fGeoJSON_2eproto
namespace foxglove {

// ===================================================================

void GeoJSON::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GeoJSON::kGeojsonFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GeoJSON::GeoJSON()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_foxglove_2fGeoJSON_2eproto::scc_info_GeoJSON.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:foxglove.GeoJSON)
}
GeoJSON::GeoJSON(const GeoJSON& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  geojson_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.geojson().size() > 0) {
    geojson_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.geojson_);
  }
  // @@protoc_insertion_point(copy_constructor:foxglove.GeoJSON)
}

void GeoJSON::SharedCtor() {
  geojson_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

GeoJSON::~GeoJSON() {
  // @@protoc_insertion_point(destructor:foxglove.GeoJSON)
  SharedDtor();
}

void GeoJSON::SharedDtor() {
  geojson_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void GeoJSON::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* GeoJSON::descriptor() {
  ::protobuf_foxglove_2fGeoJSON_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_foxglove_2fGeoJSON_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const GeoJSON& GeoJSON::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_foxglove_2fGeoJSON_2eproto::scc_info_GeoJSON.base);
  return *internal_default_instance();
}


void GeoJSON::Clear() {
// @@protoc_insertion_point(message_clear_start:foxglove.GeoJSON)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  geojson_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool GeoJSON::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:foxglove.GeoJSON)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string geojson = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_geojson()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->geojson().data(), static_cast<int>(this->geojson().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "foxglove.GeoJSON.geojson"));
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
  // @@protoc_insertion_point(parse_success:foxglove.GeoJSON)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:foxglove.GeoJSON)
  return false;
#undef DO_
}

void GeoJSON::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:foxglove.GeoJSON)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string geojson = 1;
  if (this->geojson().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->geojson().data(), static_cast<int>(this->geojson().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "foxglove.GeoJSON.geojson");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->geojson(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:foxglove.GeoJSON)
}

::google::protobuf::uint8* GeoJSON::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:foxglove.GeoJSON)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string geojson = 1;
  if (this->geojson().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->geojson().data(), static_cast<int>(this->geojson().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "foxglove.GeoJSON.geojson");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->geojson(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:foxglove.GeoJSON)
  return target;
}

size_t GeoJSON::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:foxglove.GeoJSON)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string geojson = 1;
  if (this->geojson().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->geojson());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GeoJSON::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:foxglove.GeoJSON)
  GOOGLE_DCHECK_NE(&from, this);
  const GeoJSON* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const GeoJSON>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:foxglove.GeoJSON)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:foxglove.GeoJSON)
    MergeFrom(*source);
  }
}

void GeoJSON::MergeFrom(const GeoJSON& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:foxglove.GeoJSON)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.geojson().size() > 0) {

    geojson_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.geojson_);
  }
}

void GeoJSON::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:foxglove.GeoJSON)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GeoJSON::CopyFrom(const GeoJSON& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:foxglove.GeoJSON)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GeoJSON::IsInitialized() const {
  return true;
}

void GeoJSON::Swap(GeoJSON* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GeoJSON::InternalSwap(GeoJSON* other) {
  using std::swap;
  geojson_.Swap(&other->geojson_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata GeoJSON::GetMetadata() const {
  protobuf_foxglove_2fGeoJSON_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_foxglove_2fGeoJSON_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace foxglove
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::foxglove::GeoJSON* Arena::CreateMaybeMessage< ::foxglove::GeoJSON >(Arena* arena) {
  return Arena::CreateInternal< ::foxglove::GeoJSON >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)