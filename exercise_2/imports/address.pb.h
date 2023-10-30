// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: address.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_address_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_address_2eproto

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
#include "building.pb.h"
#include "city.pb.h"
#include "street.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_address_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_address_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_address_2eproto;
class Address;
class AddressDefaultTypeInternal;
extern AddressDefaultTypeInternal _Address_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Address* Arena::CreateMaybeMessage<::Address>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Address PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Address) */ {
 public:
  inline Address() : Address(nullptr) {};
  virtual ~Address();

  Address(const Address& from);
  Address(Address&& from) noexcept
    : Address() {
    *this = ::std::move(from);
  }

  inline Address& operator=(const Address& from) {
    CopyFrom(from);
    return *this;
  }
  inline Address& operator=(Address&& from) noexcept {
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
  static const Address& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Address* internal_default_instance() {
    return reinterpret_cast<const Address*>(
               &_Address_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Address& a, Address& b) {
    a.Swap(&b);
  }
  inline void Swap(Address* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Address* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Address* New() const final {
    return CreateMaybeMessage<Address>(nullptr);
  }

  Address* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Address>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Address& from);
  void MergeFrom(const Address& from);
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
  void InternalSwap(Address* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Address";
  }
  protected:
  explicit Address(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_address_2eproto);
    return ::descriptor_table_address_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCityFieldNumber = 1,
    kStreetFieldNumber = 2,
    kBuildingFieldNumber = 3,
  };
  // .City city = 1;
  bool has_city() const;
  private:
  bool _internal_has_city() const;
  public:
  void clear_city();
  const ::City& city() const;
  ::City* release_city();
  ::City* mutable_city();
  void set_allocated_city(::City* city);
  private:
  const ::City& _internal_city() const;
  ::City* _internal_mutable_city();
  public:
  void unsafe_arena_set_allocated_city(
      ::City* city);
  ::City* unsafe_arena_release_city();

  // .Street street = 2;
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

  // .Building building = 3;
  bool has_building() const;
  private:
  bool _internal_has_building() const;
  public:
  void clear_building();
  const ::Building& building() const;
  ::Building* release_building();
  ::Building* mutable_building();
  void set_allocated_building(::Building* building);
  private:
  const ::Building& _internal_building() const;
  ::Building* _internal_mutable_building();
  public:
  void unsafe_arena_set_allocated_building(
      ::Building* building);
  ::Building* unsafe_arena_release_building();

  // @@protoc_insertion_point(class_scope:Address)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::City* city_;
  ::Street* street_;
  ::Building* building_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_address_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Address

// .City city = 1;
inline bool Address::_internal_has_city() const {
  return this != internal_default_instance() && city_ != nullptr;
}
inline bool Address::has_city() const {
  return _internal_has_city();
}
inline const ::City& Address::_internal_city() const {
  const ::City* p = city_;
  return p != nullptr ? *p : *reinterpret_cast<const ::City*>(
      &::_City_default_instance_);
}
inline const ::City& Address::city() const {
  // @@protoc_insertion_point(field_get:Address.city)
  return _internal_city();
}
inline void Address::unsafe_arena_set_allocated_city(
    ::City* city) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(city_);
  }
  city_ = city;
  if (city) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Address.city)
}
inline ::City* Address::release_city() {
  auto temp = unsafe_arena_release_city();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::City* Address::unsafe_arena_release_city() {
  // @@protoc_insertion_point(field_release:Address.city)
  
  ::City* temp = city_;
  city_ = nullptr;
  return temp;
}
inline ::City* Address::_internal_mutable_city() {
  
  if (city_ == nullptr) {
    auto* p = CreateMaybeMessage<::City>(GetArena());
    city_ = p;
  }
  return city_;
}
inline ::City* Address::mutable_city() {
  // @@protoc_insertion_point(field_mutable:Address.city)
  return _internal_mutable_city();
}
inline void Address::set_allocated_city(::City* city) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(city_);
  }
  if (city) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(city)->GetArena();
    if (message_arena != submessage_arena) {
      city = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, city, submessage_arena);
    }
    
  } else {
    
  }
  city_ = city;
  // @@protoc_insertion_point(field_set_allocated:Address.city)
}

// .Street street = 2;
inline bool Address::_internal_has_street() const {
  return this != internal_default_instance() && street_ != nullptr;
}
inline bool Address::has_street() const {
  return _internal_has_street();
}
inline const ::Street& Address::_internal_street() const {
  const ::Street* p = street_;
  return p != nullptr ? *p : *reinterpret_cast<const ::Street*>(
      &::_Street_default_instance_);
}
inline const ::Street& Address::street() const {
  // @@protoc_insertion_point(field_get:Address.street)
  return _internal_street();
}
inline void Address::unsafe_arena_set_allocated_street(
    ::Street* street) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(street_);
  }
  street_ = street;
  if (street) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Address.street)
}
inline ::Street* Address::release_street() {
  auto temp = unsafe_arena_release_street();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::Street* Address::unsafe_arena_release_street() {
  // @@protoc_insertion_point(field_release:Address.street)
  
  ::Street* temp = street_;
  street_ = nullptr;
  return temp;
}
inline ::Street* Address::_internal_mutable_street() {
  
  if (street_ == nullptr) {
    auto* p = CreateMaybeMessage<::Street>(GetArena());
    street_ = p;
  }
  return street_;
}
inline ::Street* Address::mutable_street() {
  // @@protoc_insertion_point(field_mutable:Address.street)
  return _internal_mutable_street();
}
inline void Address::set_allocated_street(::Street* street) {
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
  // @@protoc_insertion_point(field_set_allocated:Address.street)
}

// .Building building = 3;
inline bool Address::_internal_has_building() const {
  return this != internal_default_instance() && building_ != nullptr;
}
inline bool Address::has_building() const {
  return _internal_has_building();
}
inline const ::Building& Address::_internal_building() const {
  const ::Building* p = building_;
  return p != nullptr ? *p : *reinterpret_cast<const ::Building*>(
      &::_Building_default_instance_);
}
inline const ::Building& Address::building() const {
  // @@protoc_insertion_point(field_get:Address.building)
  return _internal_building();
}
inline void Address::unsafe_arena_set_allocated_building(
    ::Building* building) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(building_);
  }
  building_ = building;
  if (building) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Address.building)
}
inline ::Building* Address::release_building() {
  auto temp = unsafe_arena_release_building();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::Building* Address::unsafe_arena_release_building() {
  // @@protoc_insertion_point(field_release:Address.building)
  
  ::Building* temp = building_;
  building_ = nullptr;
  return temp;
}
inline ::Building* Address::_internal_mutable_building() {
  
  if (building_ == nullptr) {
    auto* p = CreateMaybeMessage<::Building>(GetArena());
    building_ = p;
  }
  return building_;
}
inline ::Building* Address::mutable_building() {
  // @@protoc_insertion_point(field_mutable:Address.building)
  return _internal_mutable_building();
}
inline void Address::set_allocated_building(::Building* building) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(building_);
  }
  if (building) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(building)->GetArena();
    if (message_arena != submessage_arena) {
      building = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, building, submessage_arena);
    }
    
  } else {
    
  }
  building_ = building;
  // @@protoc_insertion_point(field_set_allocated:Address.building)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_address_2eproto
