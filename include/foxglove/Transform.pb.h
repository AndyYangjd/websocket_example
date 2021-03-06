// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: foxglove/Transform.proto

#ifndef PROTOBUF_INCLUDED_foxglove_2fTransform_2eproto
#define PROTOBUF_INCLUDED_foxglove_2fTransform_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "foxglove/Quaternion.pb.h"
#include "foxglove/Vector3.pb.h"
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_foxglove_2fTransform_2eproto 

namespace protobuf_foxglove_2fTransform_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_foxglove_2fTransform_2eproto
namespace foxglove {
class Transform;
class TransformDefaultTypeInternal;
extern TransformDefaultTypeInternal _Transform_default_instance_;
}  // namespace foxglove
namespace google {
namespace protobuf {
template<> ::foxglove::Transform* Arena::CreateMaybeMessage<::foxglove::Transform>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace foxglove {

// ===================================================================

class Transform : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:foxglove.Transform) */ {
 public:
  Transform();
  virtual ~Transform();

  Transform(const Transform& from);

  inline Transform& operator=(const Transform& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Transform(Transform&& from) noexcept
    : Transform() {
    *this = ::std::move(from);
  }

  inline Transform& operator=(Transform&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Transform& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Transform* internal_default_instance() {
    return reinterpret_cast<const Transform*>(
               &_Transform_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Transform* other);
  friend void swap(Transform& a, Transform& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Transform* New() const final {
    return CreateMaybeMessage<Transform>(NULL);
  }

  Transform* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Transform>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Transform& from);
  void MergeFrom(const Transform& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Transform* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .google.protobuf.Timestamp timestamp = 1;
  bool has_timestamp() const;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 1;
  private:
  const ::google::protobuf::Timestamp& _internal_timestamp() const;
  public:
  const ::google::protobuf::Timestamp& timestamp() const;
  ::google::protobuf::Timestamp* release_timestamp();
  ::google::protobuf::Timestamp* mutable_timestamp();
  void set_allocated_timestamp(::google::protobuf::Timestamp* timestamp);

  // .foxglove.Vector3 translation = 2;
  bool has_translation() const;
  void clear_translation();
  static const int kTranslationFieldNumber = 2;
  private:
  const ::foxglove::Vector3& _internal_translation() const;
  public:
  const ::foxglove::Vector3& translation() const;
  ::foxglove::Vector3* release_translation();
  ::foxglove::Vector3* mutable_translation();
  void set_allocated_translation(::foxglove::Vector3* translation);

  // .foxglove.Quaternion rotation = 3;
  bool has_rotation() const;
  void clear_rotation();
  static const int kRotationFieldNumber = 3;
  private:
  const ::foxglove::Quaternion& _internal_rotation() const;
  public:
  const ::foxglove::Quaternion& rotation() const;
  ::foxglove::Quaternion* release_rotation();
  ::foxglove::Quaternion* mutable_rotation();
  void set_allocated_rotation(::foxglove::Quaternion* rotation);

  // @@protoc_insertion_point(class_scope:foxglove.Transform)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::Timestamp* timestamp_;
  ::foxglove::Vector3* translation_;
  ::foxglove::Quaternion* rotation_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_foxglove_2fTransform_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Transform

// .google.protobuf.Timestamp timestamp = 1;
inline bool Transform::has_timestamp() const {
  return this != internal_default_instance() && timestamp_ != NULL;
}
inline const ::google::protobuf::Timestamp& Transform::_internal_timestamp() const {
  return *timestamp_;
}
inline const ::google::protobuf::Timestamp& Transform::timestamp() const {
  const ::google::protobuf::Timestamp* p = timestamp_;
  // @@protoc_insertion_point(field_get:foxglove.Transform.timestamp)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::Timestamp*>(
      &::google::protobuf::_Timestamp_default_instance_);
}
inline ::google::protobuf::Timestamp* Transform::release_timestamp() {
  // @@protoc_insertion_point(field_release:foxglove.Transform.timestamp)
  
  ::google::protobuf::Timestamp* temp = timestamp_;
  timestamp_ = NULL;
  return temp;
}
inline ::google::protobuf::Timestamp* Transform::mutable_timestamp() {
  
  if (timestamp_ == NULL) {
    auto* p = CreateMaybeMessage<::google::protobuf::Timestamp>(GetArenaNoVirtual());
    timestamp_ = p;
  }
  // @@protoc_insertion_point(field_mutable:foxglove.Transform.timestamp)
  return timestamp_;
}
inline void Transform::set_allocated_timestamp(::google::protobuf::Timestamp* timestamp) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(timestamp_);
  }
  if (timestamp) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(timestamp)->GetArena();
    if (message_arena != submessage_arena) {
      timestamp = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, timestamp, submessage_arena);
    }
    
  } else {
    
  }
  timestamp_ = timestamp;
  // @@protoc_insertion_point(field_set_allocated:foxglove.Transform.timestamp)
}

// .foxglove.Vector3 translation = 2;
inline bool Transform::has_translation() const {
  return this != internal_default_instance() && translation_ != NULL;
}
inline const ::foxglove::Vector3& Transform::_internal_translation() const {
  return *translation_;
}
inline const ::foxglove::Vector3& Transform::translation() const {
  const ::foxglove::Vector3* p = translation_;
  // @@protoc_insertion_point(field_get:foxglove.Transform.translation)
  return p != NULL ? *p : *reinterpret_cast<const ::foxglove::Vector3*>(
      &::foxglove::_Vector3_default_instance_);
}
inline ::foxglove::Vector3* Transform::release_translation() {
  // @@protoc_insertion_point(field_release:foxglove.Transform.translation)
  
  ::foxglove::Vector3* temp = translation_;
  translation_ = NULL;
  return temp;
}
inline ::foxglove::Vector3* Transform::mutable_translation() {
  
  if (translation_ == NULL) {
    auto* p = CreateMaybeMessage<::foxglove::Vector3>(GetArenaNoVirtual());
    translation_ = p;
  }
  // @@protoc_insertion_point(field_mutable:foxglove.Transform.translation)
  return translation_;
}
inline void Transform::set_allocated_translation(::foxglove::Vector3* translation) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(translation_);
  }
  if (translation) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      translation = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, translation, submessage_arena);
    }
    
  } else {
    
  }
  translation_ = translation;
  // @@protoc_insertion_point(field_set_allocated:foxglove.Transform.translation)
}

// .foxglove.Quaternion rotation = 3;
inline bool Transform::has_rotation() const {
  return this != internal_default_instance() && rotation_ != NULL;
}
inline const ::foxglove::Quaternion& Transform::_internal_rotation() const {
  return *rotation_;
}
inline const ::foxglove::Quaternion& Transform::rotation() const {
  const ::foxglove::Quaternion* p = rotation_;
  // @@protoc_insertion_point(field_get:foxglove.Transform.rotation)
  return p != NULL ? *p : *reinterpret_cast<const ::foxglove::Quaternion*>(
      &::foxglove::_Quaternion_default_instance_);
}
inline ::foxglove::Quaternion* Transform::release_rotation() {
  // @@protoc_insertion_point(field_release:foxglove.Transform.rotation)
  
  ::foxglove::Quaternion* temp = rotation_;
  rotation_ = NULL;
  return temp;
}
inline ::foxglove::Quaternion* Transform::mutable_rotation() {
  
  if (rotation_ == NULL) {
    auto* p = CreateMaybeMessage<::foxglove::Quaternion>(GetArenaNoVirtual());
    rotation_ = p;
  }
  // @@protoc_insertion_point(field_mutable:foxglove.Transform.rotation)
  return rotation_;
}
inline void Transform::set_allocated_rotation(::foxglove::Quaternion* rotation) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(rotation_);
  }
  if (rotation) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      rotation = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, rotation, submessage_arena);
    }
    
  } else {
    
  }
  rotation_ = rotation;
  // @@protoc_insertion_point(field_set_allocated:foxglove.Transform.rotation)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace foxglove

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_foxglove_2fTransform_2eproto
