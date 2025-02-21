// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: account/v1alpha1/account.proto
// Protobuf C++ Version: 5.29.3

#ifndef account_2fv1alpha1_2faccount_2eproto_2epb_2eh
#define account_2fv1alpha1_2faccount_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5029003
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/message_lite.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_account_2fv1alpha1_2faccount_2eproto

namespace google {
namespace protobuf {
namespace internal {
template <typename T>
::absl::string_view GetAnyMessageName();
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_account_2fv1alpha1_2faccount_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_account_2fv1alpha1_2faccount_2eproto;
namespace account {
namespace v1alpha1 {
class CreateRequest;
struct CreateRequestDefaultTypeInternal;
extern CreateRequestDefaultTypeInternal _CreateRequest_default_instance_;
class CreateResponse;
struct CreateResponseDefaultTypeInternal;
extern CreateResponseDefaultTypeInternal _CreateResponse_default_instance_;
}  // namespace v1alpha1
}  // namespace account
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace account {
namespace v1alpha1 {

// ===================================================================


// -------------------------------------------------------------------

class CreateResponse final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:account.v1alpha1.CreateResponse) */ {
 public:
  inline CreateResponse() : CreateResponse(nullptr) {}
  ~CreateResponse() PROTOBUF_FINAL;

#if defined(PROTOBUF_CUSTOM_VTABLE)
  void operator delete(CreateResponse* msg, std::destroying_delete_t) {
    SharedDtor(*msg);
    ::google::protobuf::internal::SizedDelete(msg, sizeof(CreateResponse));
  }
#endif

  template <typename = void>
  explicit PROTOBUF_CONSTEXPR CreateResponse(
      ::google::protobuf::internal::ConstantInitialized);

  inline CreateResponse(const CreateResponse& from) : CreateResponse(nullptr, from) {}
  inline CreateResponse(CreateResponse&& from) noexcept
      : CreateResponse(nullptr, std::move(from)) {}
  inline CreateResponse& operator=(const CreateResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline CreateResponse& operator=(CreateResponse&& from) noexcept {
    if (this == &from) return *this;
    if (::google::protobuf::internal::CanMoveWithInternalSwap(GetArena(), from.GetArena())) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const CreateResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const CreateResponse* internal_default_instance() {
    return reinterpret_cast<const CreateResponse*>(
        &_CreateResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 1;
  friend void swap(CreateResponse& a, CreateResponse& b) { a.Swap(&b); }
  inline void Swap(CreateResponse* other) {
    if (other == this) return;
    if (::google::protobuf::internal::CanUseInternalSwap(GetArena(), other->GetArena())) {
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CreateResponse* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CreateResponse* New(::google::protobuf::Arena* arena = nullptr) const {
    return ::google::protobuf::Message::DefaultConstruct<CreateResponse>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const CreateResponse& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const CreateResponse& from) { CreateResponse::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() PROTOBUF_FINAL;
  #if defined(PROTOBUF_CUSTOM_VTABLE)
  private:
  static ::size_t ByteSizeLong(const ::google::protobuf::MessageLite& msg);
  static ::uint8_t* _InternalSerialize(
      const MessageLite& msg, ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream);

  public:
  ::size_t ByteSizeLong() const { return ByteSizeLong(*this); }
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    return _InternalSerialize(*this, target, stream);
  }
  #else   // PROTOBUF_CUSTOM_VTABLE
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  #endif  // PROTOBUF_CUSTOM_VTABLE
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  static void SharedDtor(MessageLite& self);
  void InternalSwap(CreateResponse* other);
 private:
  template <typename T>
  friend ::absl::string_view(
      ::google::protobuf::internal::GetAnyMessageName)();
  static ::absl::string_view FullMessageName() { return "account.v1alpha1.CreateResponse"; }

 protected:
  explicit CreateResponse(::google::protobuf::Arena* arena);
  CreateResponse(::google::protobuf::Arena* arena, const CreateResponse& from);
  CreateResponse(::google::protobuf::Arena* arena, CreateResponse&& from) noexcept
      : CreateResponse(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::internal::ClassData* GetClassData() const PROTOBUF_FINAL;
  static void* PlacementNew_(const void*, void* mem,
                             ::google::protobuf::Arena* arena);
  static constexpr auto InternalNewImpl_();
  static const ::google::protobuf::internal::ClassDataFull _class_data_;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kIdFieldNumber = 1,
  };
  // string id = 1 [json_name = "id"];
  void clear_id() ;
  const std::string& id() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_id(Arg_&& arg, Args_... args);
  std::string* mutable_id();
  PROTOBUF_NODISCARD std::string* release_id();
  void set_allocated_id(std::string* value);

  private:
  const std::string& _internal_id() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_id(
      const std::string& value);
  std::string* _internal_mutable_id();

  public:
  // @@protoc_insertion_point(class_scope:account.v1alpha1.CreateResponse)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 1, 0,
      42, 2>
      _table_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const CreateResponse& from_msg);
    ::google::protobuf::internal::ArenaStringPtr id_;
    ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_account_2fv1alpha1_2faccount_2eproto;
};
// -------------------------------------------------------------------

class CreateRequest final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:account.v1alpha1.CreateRequest) */ {
 public:
  inline CreateRequest() : CreateRequest(nullptr) {}
  ~CreateRequest() PROTOBUF_FINAL;

#if defined(PROTOBUF_CUSTOM_VTABLE)
  void operator delete(CreateRequest* msg, std::destroying_delete_t) {
    SharedDtor(*msg);
    ::google::protobuf::internal::SizedDelete(msg, sizeof(CreateRequest));
  }
#endif

  template <typename = void>
  explicit PROTOBUF_CONSTEXPR CreateRequest(
      ::google::protobuf::internal::ConstantInitialized);

  inline CreateRequest(const CreateRequest& from) : CreateRequest(nullptr, from) {}
  inline CreateRequest(CreateRequest&& from) noexcept
      : CreateRequest(nullptr, std::move(from)) {}
  inline CreateRequest& operator=(const CreateRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline CreateRequest& operator=(CreateRequest&& from) noexcept {
    if (this == &from) return *this;
    if (::google::protobuf::internal::CanMoveWithInternalSwap(GetArena(), from.GetArena())) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const CreateRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const CreateRequest* internal_default_instance() {
    return reinterpret_cast<const CreateRequest*>(
        &_CreateRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(CreateRequest& a, CreateRequest& b) { a.Swap(&b); }
  inline void Swap(CreateRequest* other) {
    if (other == this) return;
    if (::google::protobuf::internal::CanUseInternalSwap(GetArena(), other->GetArena())) {
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CreateRequest* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CreateRequest* New(::google::protobuf::Arena* arena = nullptr) const {
    return ::google::protobuf::Message::DefaultConstruct<CreateRequest>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const CreateRequest& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const CreateRequest& from) { CreateRequest::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() PROTOBUF_FINAL;
  #if defined(PROTOBUF_CUSTOM_VTABLE)
  private:
  static ::size_t ByteSizeLong(const ::google::protobuf::MessageLite& msg);
  static ::uint8_t* _InternalSerialize(
      const MessageLite& msg, ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream);

  public:
  ::size_t ByteSizeLong() const { return ByteSizeLong(*this); }
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    return _InternalSerialize(*this, target, stream);
  }
  #else   // PROTOBUF_CUSTOM_VTABLE
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  #endif  // PROTOBUF_CUSTOM_VTABLE
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  static void SharedDtor(MessageLite& self);
  void InternalSwap(CreateRequest* other);
 private:
  template <typename T>
  friend ::absl::string_view(
      ::google::protobuf::internal::GetAnyMessageName)();
  static ::absl::string_view FullMessageName() { return "account.v1alpha1.CreateRequest"; }

 protected:
  explicit CreateRequest(::google::protobuf::Arena* arena);
  CreateRequest(::google::protobuf::Arena* arena, const CreateRequest& from);
  CreateRequest(::google::protobuf::Arena* arena, CreateRequest&& from) noexcept
      : CreateRequest(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::internal::ClassData* GetClassData() const PROTOBUF_FINAL;
  static void* PlacementNew_(const void*, void* mem,
                             ::google::protobuf::Arena* arena);
  static constexpr auto InternalNewImpl_();
  static const ::google::protobuf::internal::ClassDataFull _class_data_;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kEmailFieldNumber = 1,
    kPasswordFieldNumber = 2,
  };
  // string email = 1 [json_name = "email"];
  void clear_email() ;
  const std::string& email() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_email(Arg_&& arg, Args_... args);
  std::string* mutable_email();
  PROTOBUF_NODISCARD std::string* release_email();
  void set_allocated_email(std::string* value);

  private:
  const std::string& _internal_email() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_email(
      const std::string& value);
  std::string* _internal_mutable_email();

  public:
  // string password = 2 [json_name = "password"];
  void clear_password() ;
  const std::string& password() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_password(Arg_&& arg, Args_... args);
  std::string* mutable_password();
  PROTOBUF_NODISCARD std::string* release_password();
  void set_allocated_password(std::string* value);

  private:
  const std::string& _internal_password() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_password(
      const std::string& value);
  std::string* _internal_mutable_password();

  public:
  // @@protoc_insertion_point(class_scope:account.v1alpha1.CreateRequest)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      1, 2, 0,
      52, 2>
      _table_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const CreateRequest& from_msg);
    ::google::protobuf::internal::ArenaStringPtr email_;
    ::google::protobuf::internal::ArenaStringPtr password_;
    ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_account_2fv1alpha1_2faccount_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// CreateRequest

// string email = 1 [json_name = "email"];
inline void CreateRequest::clear_email() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.email_.ClearToEmpty();
}
inline const std::string& CreateRequest::email() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:account.v1alpha1.CreateRequest.email)
  return _internal_email();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void CreateRequest::set_email(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.email_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:account.v1alpha1.CreateRequest.email)
}
inline std::string* CreateRequest::mutable_email() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_email();
  // @@protoc_insertion_point(field_mutable:account.v1alpha1.CreateRequest.email)
  return _s;
}
inline const std::string& CreateRequest::_internal_email() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.email_.Get();
}
inline void CreateRequest::_internal_set_email(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.email_.Set(value, GetArena());
}
inline std::string* CreateRequest::_internal_mutable_email() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.email_.Mutable( GetArena());
}
inline std::string* CreateRequest::release_email() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:account.v1alpha1.CreateRequest.email)
  return _impl_.email_.Release();
}
inline void CreateRequest::set_allocated_email(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.email_.SetAllocated(value, GetArena());
  if (::google::protobuf::internal::DebugHardenForceCopyDefaultString() && _impl_.email_.IsDefault()) {
    _impl_.email_.Set("", GetArena());
  }
  // @@protoc_insertion_point(field_set_allocated:account.v1alpha1.CreateRequest.email)
}

// string password = 2 [json_name = "password"];
inline void CreateRequest::clear_password() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.password_.ClearToEmpty();
}
inline const std::string& CreateRequest::password() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:account.v1alpha1.CreateRequest.password)
  return _internal_password();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void CreateRequest::set_password(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.password_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:account.v1alpha1.CreateRequest.password)
}
inline std::string* CreateRequest::mutable_password() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_password();
  // @@protoc_insertion_point(field_mutable:account.v1alpha1.CreateRequest.password)
  return _s;
}
inline const std::string& CreateRequest::_internal_password() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.password_.Get();
}
inline void CreateRequest::_internal_set_password(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.password_.Set(value, GetArena());
}
inline std::string* CreateRequest::_internal_mutable_password() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.password_.Mutable( GetArena());
}
inline std::string* CreateRequest::release_password() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:account.v1alpha1.CreateRequest.password)
  return _impl_.password_.Release();
}
inline void CreateRequest::set_allocated_password(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.password_.SetAllocated(value, GetArena());
  if (::google::protobuf::internal::DebugHardenForceCopyDefaultString() && _impl_.password_.IsDefault()) {
    _impl_.password_.Set("", GetArena());
  }
  // @@protoc_insertion_point(field_set_allocated:account.v1alpha1.CreateRequest.password)
}

// -------------------------------------------------------------------

// CreateResponse

// string id = 1 [json_name = "id"];
inline void CreateResponse::clear_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.id_.ClearToEmpty();
}
inline const std::string& CreateResponse::id() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:account.v1alpha1.CreateResponse.id)
  return _internal_id();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void CreateResponse::set_id(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.id_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:account.v1alpha1.CreateResponse.id)
}
inline std::string* CreateResponse::mutable_id() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_id();
  // @@protoc_insertion_point(field_mutable:account.v1alpha1.CreateResponse.id)
  return _s;
}
inline const std::string& CreateResponse::_internal_id() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.id_.Get();
}
inline void CreateResponse::_internal_set_id(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.id_.Set(value, GetArena());
}
inline std::string* CreateResponse::_internal_mutable_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.id_.Mutable( GetArena());
}
inline std::string* CreateResponse::release_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:account.v1alpha1.CreateResponse.id)
  return _impl_.id_.Release();
}
inline void CreateResponse::set_allocated_id(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.id_.SetAllocated(value, GetArena());
  if (::google::protobuf::internal::DebugHardenForceCopyDefaultString() && _impl_.id_.IsDefault()) {
    _impl_.id_.Set("", GetArena());
  }
  // @@protoc_insertion_point(field_set_allocated:account.v1alpha1.CreateResponse.id)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace v1alpha1
}  // namespace account


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // account_2fv1alpha1_2faccount_2eproto_2epb_2eh
