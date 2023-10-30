// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: building.proto

#include "building.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_street_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Street_street_2eproto;
namespace building {
class BuildingDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Building> _instance;
} _Building_default_instance_;
}  // namespace building
static void InitDefaultsscc_info_Building_building_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::building::_Building_default_instance_;
    new (ptr) ::building::Building();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::building::Building::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Building_building_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Building_building_2eproto}, {
      &scc_info_Street_street_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_building_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_building_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_building_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_building_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::building::Building, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::building::Building, name_),
  PROTOBUF_FIELD_OFFSET(::building::Building, number_),
  PROTOBUF_FIELD_OFFSET(::building::Building, street_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::building::Building)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::building::_Building_default_instance_),
};

const char descriptor_table_protodef_building_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016building.proto\022\010building\032\014street.proto"
  "\"H\n\010Building\022\014\n\004name\030\001 \001(\t\022\016\n\006number\030\002 \001"
  "(\r\022\036\n\006street\030\003 \001(\0132\016.street.Streetb\006prot"
  "o3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_building_2eproto_deps[1] = {
  &::descriptor_table_street_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_building_2eproto_sccs[1] = {
  &scc_info_Building_building_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_building_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_building_2eproto = {
  false, false, descriptor_table_protodef_building_2eproto, "building.proto", 122,
  &descriptor_table_building_2eproto_once, descriptor_table_building_2eproto_sccs, descriptor_table_building_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_building_2eproto::offsets,
  file_level_metadata_building_2eproto, 1, file_level_enum_descriptors_building_2eproto, file_level_service_descriptors_building_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_building_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_building_2eproto)), true);
namespace building {

// ===================================================================

void Building::InitAsDefaultInstance() {
  ::building::_Building_default_instance_._instance.get_mutable()->street_ = const_cast< ::street::Street*>(
      ::street::Street::internal_default_instance());
}
class Building::_Internal {
 public:
  static const ::street::Street& street(const Building* msg);
};

const ::street::Street&
Building::_Internal::street(const Building* msg) {
  return *msg->street_;
}
void Building::clear_street() {
  if (GetArena() == nullptr && street_ != nullptr) {
    delete street_;
  }
  street_ = nullptr;
}
Building::Building(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:building.Building)
}
Building::Building(const Building& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_name().empty()) {
    name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_name(),
      GetArena());
  }
  if (from._internal_has_street()) {
    street_ = new ::street::Street(*from.street_);
  } else {
    street_ = nullptr;
  }
  number_ = from.number_;
  // @@protoc_insertion_point(copy_constructor:building.Building)
}

void Building::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Building_building_2eproto.base);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&street_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&number_) -
      reinterpret_cast<char*>(&street_)) + sizeof(number_));
}

Building::~Building() {
  // @@protoc_insertion_point(destructor:building.Building)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Building::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete street_;
}

void Building::ArenaDtor(void* object) {
  Building* _this = reinterpret_cast< Building* >(object);
  (void)_this;
}
void Building::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Building::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Building& Building::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Building_building_2eproto.base);
  return *internal_default_instance();
}


void Building::Clear() {
// @@protoc_insertion_point(message_clear_start:building.Building)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  if (GetArena() == nullptr && street_ != nullptr) {
    delete street_;
  }
  street_ = nullptr;
  number_ = 0u;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Building::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "building.Building.name"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 number = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          number_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .street.Street street = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_street(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Building::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:building.Building)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "building.Building.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // uint32 number = 2;
  if (this->number() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->_internal_number(), target);
  }

  // .street.Street street = 3;
  if (this->has_street()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::street(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:building.Building)
  return target;
}

size_t Building::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:building.Building)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // .street.Street street = 3;
  if (this->has_street()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *street_);
  }

  // uint32 number = 2;
  if (this->number() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_number());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Building::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:building.Building)
  GOOGLE_DCHECK_NE(&from, this);
  const Building* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Building>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:building.Building)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:building.Building)
    MergeFrom(*source);
  }
}

void Building::MergeFrom(const Building& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:building.Building)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {
    _internal_set_name(from._internal_name());
  }
  if (from.has_street()) {
    _internal_mutable_street()->::street::Street::MergeFrom(from._internal_street());
  }
  if (from.number() != 0) {
    _internal_set_number(from._internal_number());
  }
}

void Building::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:building.Building)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Building::CopyFrom(const Building& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:building.Building)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Building::IsInitialized() const {
  return true;
}

void Building::InternalSwap(Building* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Building, number_)
      + sizeof(Building::number_)
      - PROTOBUF_FIELD_OFFSET(Building, street_)>(
          reinterpret_cast<char*>(&street_),
          reinterpret_cast<char*>(&other->street_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Building::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace building
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::building::Building* Arena::CreateMaybeMessage< ::building::Building >(Arena* arena) {
  return Arena::CreateMessageInternal< ::building::Building >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
