// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: building.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_building_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_building_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "street.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_building_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_building_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_building_2eproto;
class Building;
class BuildingDefaultTypeInternal;
extern BuildingDefaultTypeInternal _Building_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Building* Arena::CreateMaybeMessage<::Building>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Building PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Building) */ {
 public:
  inline Building() : Building(nullptr) {};
  virtual ~Building();

  Building(const Building& from);
  Building(Building&& from) noexcept
    : Building() {
    *this = ::std::move(from);
  }

  inline Building& operator=(const Building& from) {
    CopyFrom(from);
    return *this;
  }
  inline Building& operator=(Building&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Building& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Building* internal_default_instance() {
    return reinterpret_cast<const Building*>(
               &_Building_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Building& a, Building& b) {
    a.Swap(&b);
  }
  inline void Swap(Building* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Building* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Building* New() const final {
    return CreateMaybeMessage<Building>(nullptr);
  }

  Building* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Building>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Building& from);
  void MergeFrom(const Building& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Building* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Building";
  }
  protected:
  explicit Building(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_building_2eproto);
    return ::descriptor_table_building_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kStreetFieldNumber = 3,
    kNumberFieldNumber = 2,
  };
  // string name = 1;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_name();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_name(
      std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // .Street street = 3;
  bool has_street() const;
  private:
  bool _internal_has_street() const;
  public:
  void clear_street();
  const ::Street& street() const;
  ::Street* release_street();
  ::Street* mutable_street();
  void set_allocated_street(::Street* street);
  private:
  const ::Street& _internal_street() const;
  ::Street* _internal_mutable_street();
  public:
  void unsafe_arena_set_allocated_street(
      ::Street* street);
  ::Street* unsafe_arena_release_street();

  // uint32 number = 2;
  void clear_number();
  ::PROTOBUF_NAMESPACE_ID::uint32 number() const;
  void set_number(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_number() const;
  void _internal_set_number(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:Building)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::Street* street_;
  ::PROTOBUF_NAMESPACE_ID::uint32 number_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_building_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Building

// string name = 1;
inline void Building::clear_name() {
  name_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& Building::name() const {
  // @@protoc_insertion_point(field_get:Building.name)
  return _internal_name();
}
inline void Building::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:Building.name)
}
inline std::string* Building::mutable_name() {
  // @@protoc_insertion_point(field_mutable:Building.name)
  return _internal_mutable_name();
}
inline const std::string& Building::_internal_name() const {
  return name_.Get();
}
inline void Building::_internal_set_name(const std::string& value) {
  
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Building::set_name(std::string&& value) {
  
  name_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:Building.name)
}
inline void Building::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:Building.name)
}
inline void Building::set_name(const char* value,
    size_t size) {
  
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:Building.name)
}
inline std::string* Building::_internal_mutable_name() {
  
  return name_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Building::release_name() {
  // @@protoc_insertion_point(field_release:Building.name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Building::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:Building.name)
}
inline std::string* Building::unsafe_arena_release_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:Building.name)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return name_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void Building::unsafe_arena_set_allocated_name(
    std::string* name) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (name != nullptr) {
    
  } else {
    
  }
  name_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      name, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Building.name)
}

// uint32 number = 2;
inline void Building::clear_number() {
  number_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Building::_internal_number() const {
  return number_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Building::number() const {
  // @@protoc_insertion_point(field_get:Building.number)
  return _internal_number();
}
inline void Building::_internal_set_number(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  number_ = value;
}
inline void Building::set_number(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_number(value);
  // @@protoc_insertion_point(field_set:Building.number)
}

// .Street street = 3;
inline bool Building::_internal_has_street() const {
  return this != internal_default_instance() && street_ != nullptr;
}
inline bool Building::has_street() const {
  return _internal_has_street();
}
inline const ::Street& Building::_internal_street() const {
  const ::Street* p = street_;
  return p != nullptr ? *p : *reinterpret_cast<const ::Street*>(
      &::_Street_default_instance_);
}
inline const ::Street& Building::street() const {
  // @@protoc_insertion_point(field_get:Building.street)
  return _internal_street();
}
inline void Building::unsafe_arena_set_allocated_street(
    ::Street* street) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(street_);
  }
  street_ = street;
  if (street) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Building.street)
}
inline ::Street* Building::release_street() {
  auto temp = unsafe_arena_release_street();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::Street* Building::unsafe_arena_release_street() {
  // @@protoc_insertion_point(field_release:Building.street)
  
  ::Street* temp = street_;
  street_ = nullptr;
  return temp;
}
inline ::Street* Building::_internal_mutable_street() {
  
  if (street_ == nullptr) {
    auto* p = CreateMaybeMessage<::Street>(GetArena());
    street_ = p;
  }
  return street_;
}
inline ::Street* Building::mutable_street() {
  // @@protoc_insertion_point(field_mutable:Building.street)
  return _internal_mutable_street();
}
inline void Building::set_allocated_street(::Street* street) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(street_);
  }
  if (street) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(street)->GetArena();
    if (message_arena != submessage_arena) {
      street = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, street, submessage_arena);
    }
    
  } else {
    
  }
  street_ = street;
  // @@protoc_insertion_point(field_set_allocated:Building.street)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_building_2eproto
