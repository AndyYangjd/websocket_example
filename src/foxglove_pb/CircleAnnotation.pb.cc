// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: foxglove/CircleAnnotation.proto

#include "foxglove/CircleAnnotation.pb.h"

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

namespace protobuf_foxglove_2fColor_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_foxglove_2fColor_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Color;
}  // namespace protobuf_foxglove_2fColor_2eproto
namespace protobuf_foxglove_2fPoint2_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_foxglove_2fPoint2_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Point2;
}  // namespace protobuf_foxglove_2fPoint2_2eproto
namespace protobuf_google_2fprotobuf_2ftimestamp_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fprotobuf_2ftimestamp_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Timestamp;
}  // namespace protobuf_google_2fprotobuf_2ftimestamp_2eproto
namespace foxglove {
class CircleAnnotationDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<CircleAnnotation>
      _instance;
} _CircleAnnotation_default_instance_;
}  // namespace foxglove
namespace protobuf_foxglove_2fCircleAnnotation_2eproto {
static void InitDefaultsCircleAnnotation() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::foxglove::_CircleAnnotation_default_instance_;
    new (ptr) ::foxglove::CircleAnnotation();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::foxglove::CircleAnnotation::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<3> scc_info_CircleAnnotation =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 3, InitDefaultsCircleAnnotation}, {
      &protobuf_google_2fprotobuf_2ftimestamp_2eproto::scc_info_Timestamp.base,
      &protobuf_foxglove_2fPoint2_2eproto::scc_info_Point2.base,
      &protobuf_foxglove_2fColor_2eproto::scc_info_Color.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_CircleAnnotation.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::foxglove::CircleAnnotation, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::foxglove::CircleAnnotation, timestamp_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::foxglove::CircleAnnotation, position_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::foxglove::CircleAnnotation, diameter_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::foxglove::CircleAnnotation, thickness_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::foxglove::CircleAnnotation, fill_color_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::foxglove::CircleAnnotation, outline_color_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::foxglove::CircleAnnotation)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::foxglove::_CircleAnnotation_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "foxglove/CircleAnnotation.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\037foxglove/CircleAnnotation.proto\022\010foxgl"
      "ove\032\024foxglove/Color.proto\032\025foxglove/Poin"
      "t2.proto\032\037google/protobuf/timestamp.prot"
      "o\"\327\001\n\020CircleAnnotation\022-\n\ttimestamp\030\001 \001("
      "\0132\032.google.protobuf.Timestamp\022\"\n\010positio"
      "n\030\002 \001(\0132\020.foxglove.Point2\022\020\n\010diameter\030\003 "
      "\001(\001\022\021\n\tthickness\030\004 \001(\001\022#\n\nfill_color\030\005 \001"
      "(\0132\017.foxglove.Color\022&\n\routline_color\030\006 \001"
      "(\0132\017.foxglove.Colorb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 347);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "foxglove/CircleAnnotation.proto", &protobuf_RegisterTypes);
  ::protobuf_foxglove_2fColor_2eproto::AddDescriptors();
  ::protobuf_foxglove_2fPoint2_2eproto::AddDescriptors();
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
}  // namespace protobuf_foxglove_2fCircleAnnotation_2eproto
namespace foxglove {

// ===================================================================

void CircleAnnotation::InitAsDefaultInstance() {
  ::foxglove::_CircleAnnotation_default_instance_._instance.get_mutable()->timestamp_ = const_cast< ::google::protobuf::Timestamp*>(
      ::google::protobuf::Timestamp::internal_default_instance());
  ::foxglove::_CircleAnnotation_default_instance_._instance.get_mutable()->position_ = const_cast< ::foxglove::Point2*>(
      ::foxglove::Point2::internal_default_instance());
  ::foxglove::_CircleAnnotation_default_instance_._instance.get_mutable()->fill_color_ = const_cast< ::foxglove::Color*>(
      ::foxglove::Color::internal_default_instance());
  ::foxglove::_CircleAnnotation_default_instance_._instance.get_mutable()->outline_color_ = const_cast< ::foxglove::Color*>(
      ::foxglove::Color::internal_default_instance());
}
void CircleAnnotation::clear_timestamp() {
  if (GetArenaNoVirtual() == NULL && timestamp_ != NULL) {
    delete timestamp_;
  }
  timestamp_ = NULL;
}
void CircleAnnotation::clear_position() {
  if (GetArenaNoVirtual() == NULL && position_ != NULL) {
    delete position_;
  }
  position_ = NULL;
}
void CircleAnnotation::clear_fill_color() {
  if (GetArenaNoVirtual() == NULL && fill_color_ != NULL) {
    delete fill_color_;
  }
  fill_color_ = NULL;
}
void CircleAnnotation::clear_outline_color() {
  if (GetArenaNoVirtual() == NULL && outline_color_ != NULL) {
    delete outline_color_;
  }
  outline_color_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CircleAnnotation::kTimestampFieldNumber;
const int CircleAnnotation::kPositionFieldNumber;
const int CircleAnnotation::kDiameterFieldNumber;
const int CircleAnnotation::kThicknessFieldNumber;
const int CircleAnnotation::kFillColorFieldNumber;
const int CircleAnnotation::kOutlineColorFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CircleAnnotation::CircleAnnotation()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_foxglove_2fCircleAnnotation_2eproto::scc_info_CircleAnnotation.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:foxglove.CircleAnnotation)
}
CircleAnnotation::CircleAnnotation(const CircleAnnotation& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_timestamp()) {
    timestamp_ = new ::google::protobuf::Timestamp(*from.timestamp_);
  } else {
    timestamp_ = NULL;
  }
  if (from.has_position()) {
    position_ = new ::foxglove::Point2(*from.position_);
  } else {
    position_ = NULL;
  }
  if (from.has_fill_color()) {
    fill_color_ = new ::foxglove::Color(*from.fill_color_);
  } else {
    fill_color_ = NULL;
  }
  if (from.has_outline_color()) {
    outline_color_ = new ::foxglove::Color(*from.outline_color_);
  } else {
    outline_color_ = NULL;
  }
  ::memcpy(&diameter_, &from.diameter_,
    static_cast<size_t>(reinterpret_cast<char*>(&thickness_) -
    reinterpret_cast<char*>(&diameter_)) + sizeof(thickness_));
  // @@protoc_insertion_point(copy_constructor:foxglove.CircleAnnotation)
}

void CircleAnnotation::SharedCtor() {
  ::memset(&timestamp_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&thickness_) -
      reinterpret_cast<char*>(&timestamp_)) + sizeof(thickness_));
}

CircleAnnotation::~CircleAnnotation() {
  // @@protoc_insertion_point(destructor:foxglove.CircleAnnotation)
  SharedDtor();
}

void CircleAnnotation::SharedDtor() {
  if (this != internal_default_instance()) delete timestamp_;
  if (this != internal_default_instance()) delete position_;
  if (this != internal_default_instance()) delete fill_color_;
  if (this != internal_default_instance()) delete outline_color_;
}

void CircleAnnotation::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* CircleAnnotation::descriptor() {
  ::protobuf_foxglove_2fCircleAnnotation_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_foxglove_2fCircleAnnotation_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const CircleAnnotation& CircleAnnotation::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_foxglove_2fCircleAnnotation_2eproto::scc_info_CircleAnnotation.base);
  return *internal_default_instance();
}


void CircleAnnotation::Clear() {
// @@protoc_insertion_point(message_clear_start:foxglove.CircleAnnotation)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && timestamp_ != NULL) {
    delete timestamp_;
  }
  timestamp_ = NULL;
  if (GetArenaNoVirtual() == NULL && position_ != NULL) {
    delete position_;
  }
  position_ = NULL;
  if (GetArenaNoVirtual() == NULL && fill_color_ != NULL) {
    delete fill_color_;
  }
  fill_color_ = NULL;
  if (GetArenaNoVirtual() == NULL && outline_color_ != NULL) {
    delete outline_color_;
  }
  outline_color_ = NULL;
  ::memset(&diameter_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&thickness_) -
      reinterpret_cast<char*>(&diameter_)) + sizeof(thickness_));
  _internal_metadata_.Clear();
}

bool CircleAnnotation::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:foxglove.CircleAnnotation)
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

      // .foxglove.Point2 position = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_position()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double diameter = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u /* 25 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &diameter_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double thickness = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(33u /* 33 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &thickness_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .foxglove.Color fill_color = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_fill_color()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .foxglove.Color outline_color = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_outline_color()));
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
  // @@protoc_insertion_point(parse_success:foxglove.CircleAnnotation)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:foxglove.CircleAnnotation)
  return false;
#undef DO_
}

void CircleAnnotation::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:foxglove.CircleAnnotation)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.protobuf.Timestamp timestamp = 1;
  if (this->has_timestamp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_timestamp(), output);
  }

  // .foxglove.Point2 position = 2;
  if (this->has_position()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_position(), output);
  }

  // double diameter = 3;
  if (this->diameter() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->diameter(), output);
  }

  // double thickness = 4;
  if (this->thickness() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->thickness(), output);
  }

  // .foxglove.Color fill_color = 5;
  if (this->has_fill_color()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->_internal_fill_color(), output);
  }

  // .foxglove.Color outline_color = 6;
  if (this->has_outline_color()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->_internal_outline_color(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:foxglove.CircleAnnotation)
}

::google::protobuf::uint8* CircleAnnotation::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:foxglove.CircleAnnotation)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.protobuf.Timestamp timestamp = 1;
  if (this->has_timestamp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_timestamp(), deterministic, target);
  }

  // .foxglove.Point2 position = 2;
  if (this->has_position()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_position(), deterministic, target);
  }

  // double diameter = 3;
  if (this->diameter() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->diameter(), target);
  }

  // double thickness = 4;
  if (this->thickness() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->thickness(), target);
  }

  // .foxglove.Color fill_color = 5;
  if (this->has_fill_color()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        5, this->_internal_fill_color(), deterministic, target);
  }

  // .foxglove.Color outline_color = 6;
  if (this->has_outline_color()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        6, this->_internal_outline_color(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:foxglove.CircleAnnotation)
  return target;
}

size_t CircleAnnotation::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:foxglove.CircleAnnotation)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .google.protobuf.Timestamp timestamp = 1;
  if (this->has_timestamp()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *timestamp_);
  }

  // .foxglove.Point2 position = 2;
  if (this->has_position()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *position_);
  }

  // .foxglove.Color fill_color = 5;
  if (this->has_fill_color()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *fill_color_);
  }

  // .foxglove.Color outline_color = 6;
  if (this->has_outline_color()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *outline_color_);
  }

  // double diameter = 3;
  if (this->diameter() != 0) {
    total_size += 1 + 8;
  }

  // double thickness = 4;
  if (this->thickness() != 0) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CircleAnnotation::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:foxglove.CircleAnnotation)
  GOOGLE_DCHECK_NE(&from, this);
  const CircleAnnotation* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const CircleAnnotation>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:foxglove.CircleAnnotation)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:foxglove.CircleAnnotation)
    MergeFrom(*source);
  }
}

void CircleAnnotation::MergeFrom(const CircleAnnotation& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:foxglove.CircleAnnotation)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_timestamp()) {
    mutable_timestamp()->::google::protobuf::Timestamp::MergeFrom(from.timestamp());
  }
  if (from.has_position()) {
    mutable_position()->::foxglove::Point2::MergeFrom(from.position());
  }
  if (from.has_fill_color()) {
    mutable_fill_color()->::foxglove::Color::MergeFrom(from.fill_color());
  }
  if (from.has_outline_color()) {
    mutable_outline_color()->::foxglove::Color::MergeFrom(from.outline_color());
  }
  if (from.diameter() != 0) {
    set_diameter(from.diameter());
  }
  if (from.thickness() != 0) {
    set_thickness(from.thickness());
  }
}

void CircleAnnotation::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:foxglove.CircleAnnotation)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CircleAnnotation::CopyFrom(const CircleAnnotation& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:foxglove.CircleAnnotation)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CircleAnnotation::IsInitialized() const {
  return true;
}

void CircleAnnotation::Swap(CircleAnnotation* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CircleAnnotation::InternalSwap(CircleAnnotation* other) {
  using std::swap;
  swap(timestamp_, other->timestamp_);
  swap(position_, other->position_);
  swap(fill_color_, other->fill_color_);
  swap(outline_color_, other->outline_color_);
  swap(diameter_, other->diameter_);
  swap(thickness_, other->thickness_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata CircleAnnotation::GetMetadata() const {
  protobuf_foxglove_2fCircleAnnotation_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_foxglove_2fCircleAnnotation_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace foxglove
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::foxglove::CircleAnnotation* Arena::CreateMaybeMessage< ::foxglove::CircleAnnotation >(Arena* arena) {
  return Arena::CreateInternal< ::foxglove::CircleAnnotation >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
