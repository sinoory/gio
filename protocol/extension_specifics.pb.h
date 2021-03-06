// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: extension_specifics.proto

#ifndef PROTOBUF_extension_5fspecifics_2eproto__INCLUDED
#define PROTOBUF_extension_5fspecifics_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include "sync/base/sync_export.h"

namespace sync_pb {

// Internal implementation detail -- do not call these.
void SYNC_EXPORT protobuf_AddDesc_extension_5fspecifics_2eproto();
void protobuf_AssignDesc_extension_5fspecifics_2eproto();
void protobuf_ShutdownFile_extension_5fspecifics_2eproto();

class ExtensionSpecifics;

// ===================================================================

class SYNC_EXPORT ExtensionSpecifics : public ::google::protobuf::MessageLite {
 public:
  ExtensionSpecifics();
  virtual ~ExtensionSpecifics();

  ExtensionSpecifics(const ExtensionSpecifics& from);

  inline ExtensionSpecifics& operator=(const ExtensionSpecifics& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ExtensionSpecifics& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const ExtensionSpecifics* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(ExtensionSpecifics* other);

  // implements Message ----------------------------------------------

  ExtensionSpecifics* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const ExtensionSpecifics& from);
  void MergeFrom(const ExtensionSpecifics& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline const ::std::string& id() const;
  inline void set_id(const ::std::string& value);
  inline void set_id(const char* value);
  inline void set_id(const char* value, size_t size);
  inline ::std::string* mutable_id();
  inline ::std::string* release_id();
  inline void set_allocated_id(::std::string* id);

  // optional string version = 2;
  inline bool has_version() const;
  inline void clear_version();
  static const int kVersionFieldNumber = 2;
  inline const ::std::string& version() const;
  inline void set_version(const ::std::string& value);
  inline void set_version(const char* value);
  inline void set_version(const char* value, size_t size);
  inline ::std::string* mutable_version();
  inline ::std::string* release_version();
  inline void set_allocated_version(::std::string* version);

  // optional string update_url = 3;
  inline bool has_update_url() const;
  inline void clear_update_url();
  static const int kUpdateUrlFieldNumber = 3;
  inline const ::std::string& update_url() const;
  inline void set_update_url(const ::std::string& value);
  inline void set_update_url(const char* value);
  inline void set_update_url(const char* value, size_t size);
  inline ::std::string* mutable_update_url();
  inline ::std::string* release_update_url();
  inline void set_allocated_update_url(::std::string* update_url);

  // optional bool enabled = 4;
  inline bool has_enabled() const;
  inline void clear_enabled();
  static const int kEnabledFieldNumber = 4;
  inline bool enabled() const;
  inline void set_enabled(bool value);

  // optional bool incognito_enabled = 5;
  inline bool has_incognito_enabled() const;
  inline void clear_incognito_enabled();
  static const int kIncognitoEnabledFieldNumber = 5;
  inline bool incognito_enabled() const;
  inline void set_incognito_enabled(bool value);

  // optional string name = 6;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 6;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:sync_pb.ExtensionSpecifics)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_version();
  inline void clear_has_version();
  inline void set_has_update_url();
  inline void clear_has_update_url();
  inline void set_has_enabled();
  inline void clear_has_enabled();
  inline void set_has_incognito_enabled();
  inline void clear_has_incognito_enabled();
  inline void set_has_name();
  inline void clear_has_name();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* id_;
  ::std::string* version_;
  ::std::string* update_url_;
  ::std::string* name_;
  bool enabled_;
  bool incognito_enabled_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void SYNC_EXPORT protobuf_AddDesc_extension_5fspecifics_2eproto_impl();
  #else
  friend void SYNC_EXPORT protobuf_AddDesc_extension_5fspecifics_2eproto();
  #endif
  friend void protobuf_AssignDesc_extension_5fspecifics_2eproto();
  friend void protobuf_ShutdownFile_extension_5fspecifics_2eproto();

  void InitAsDefaultInstance();
  static ExtensionSpecifics* default_instance_;
};
// ===================================================================


// ===================================================================

// ExtensionSpecifics

// optional string id = 1;
inline bool ExtensionSpecifics::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ExtensionSpecifics::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ExtensionSpecifics::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ExtensionSpecifics::clear_id() {
  if (id_ != &::google::protobuf::internal::GetEmptyString()) {
    id_->clear();
  }
  clear_has_id();
}
inline const ::std::string& ExtensionSpecifics::id() const {
  return *id_;
}
inline void ExtensionSpecifics::set_id(const ::std::string& value) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::GetEmptyString()) {
    id_ = new ::std::string;
  }
  id_->assign(value);
}
inline void ExtensionSpecifics::set_id(const char* value) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::GetEmptyString()) {
    id_ = new ::std::string;
  }
  id_->assign(value);
}
inline void ExtensionSpecifics::set_id(const char* value, size_t size) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::GetEmptyString()) {
    id_ = new ::std::string;
  }
  id_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ExtensionSpecifics::mutable_id() {
  set_has_id();
  if (id_ == &::google::protobuf::internal::GetEmptyString()) {
    id_ = new ::std::string;
  }
  return id_;
}
inline ::std::string* ExtensionSpecifics::release_id() {
  clear_has_id();
  if (id_ == &::google::protobuf::internal::GetEmptyString()) {
    return NULL;
  } else {
    ::std::string* temp = id_;
    id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
    return temp;
  }
}
inline void ExtensionSpecifics::set_allocated_id(::std::string* id) {
  if (id_ != &::google::protobuf::internal::GetEmptyString()) {
    delete id_;
  }
  if (id) {
    set_has_id();
    id_ = id;
  } else {
    clear_has_id();
    id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  }
}

// optional string version = 2;
inline bool ExtensionSpecifics::has_version() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ExtensionSpecifics::set_has_version() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ExtensionSpecifics::clear_has_version() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ExtensionSpecifics::clear_version() {
  if (version_ != &::google::protobuf::internal::GetEmptyString()) {
    version_->clear();
  }
  clear_has_version();
}
inline const ::std::string& ExtensionSpecifics::version() const {
  return *version_;
}
inline void ExtensionSpecifics::set_version(const ::std::string& value) {
  set_has_version();
  if (version_ == &::google::protobuf::internal::GetEmptyString()) {
    version_ = new ::std::string;
  }
  version_->assign(value);
}
inline void ExtensionSpecifics::set_version(const char* value) {
  set_has_version();
  if (version_ == &::google::protobuf::internal::GetEmptyString()) {
    version_ = new ::std::string;
  }
  version_->assign(value);
}
inline void ExtensionSpecifics::set_version(const char* value, size_t size) {
  set_has_version();
  if (version_ == &::google::protobuf::internal::GetEmptyString()) {
    version_ = new ::std::string;
  }
  version_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ExtensionSpecifics::mutable_version() {
  set_has_version();
  if (version_ == &::google::protobuf::internal::GetEmptyString()) {
    version_ = new ::std::string;
  }
  return version_;
}
inline ::std::string* ExtensionSpecifics::release_version() {
  clear_has_version();
  if (version_ == &::google::protobuf::internal::GetEmptyString()) {
    return NULL;
  } else {
    ::std::string* temp = version_;
    version_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
    return temp;
  }
}
inline void ExtensionSpecifics::set_allocated_version(::std::string* version) {
  if (version_ != &::google::protobuf::internal::GetEmptyString()) {
    delete version_;
  }
  if (version) {
    set_has_version();
    version_ = version;
  } else {
    clear_has_version();
    version_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  }
}

// optional string update_url = 3;
inline bool ExtensionSpecifics::has_update_url() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ExtensionSpecifics::set_has_update_url() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ExtensionSpecifics::clear_has_update_url() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ExtensionSpecifics::clear_update_url() {
  if (update_url_ != &::google::protobuf::internal::GetEmptyString()) {
    update_url_->clear();
  }
  clear_has_update_url();
}
inline const ::std::string& ExtensionSpecifics::update_url() const {
  return *update_url_;
}
inline void ExtensionSpecifics::set_update_url(const ::std::string& value) {
  set_has_update_url();
  if (update_url_ == &::google::protobuf::internal::GetEmptyString()) {
    update_url_ = new ::std::string;
  }
  update_url_->assign(value);
}
inline void ExtensionSpecifics::set_update_url(const char* value) {
  set_has_update_url();
  if (update_url_ == &::google::protobuf::internal::GetEmptyString()) {
    update_url_ = new ::std::string;
  }
  update_url_->assign(value);
}
inline void ExtensionSpecifics::set_update_url(const char* value, size_t size) {
  set_has_update_url();
  if (update_url_ == &::google::protobuf::internal::GetEmptyString()) {
    update_url_ = new ::std::string;
  }
  update_url_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ExtensionSpecifics::mutable_update_url() {
  set_has_update_url();
  if (update_url_ == &::google::protobuf::internal::GetEmptyString()) {
    update_url_ = new ::std::string;
  }
  return update_url_;
}
inline ::std::string* ExtensionSpecifics::release_update_url() {
  clear_has_update_url();
  if (update_url_ == &::google::protobuf::internal::GetEmptyString()) {
    return NULL;
  } else {
    ::std::string* temp = update_url_;
    update_url_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
    return temp;
  }
}
inline void ExtensionSpecifics::set_allocated_update_url(::std::string* update_url) {
  if (update_url_ != &::google::protobuf::internal::GetEmptyString()) {
    delete update_url_;
  }
  if (update_url) {
    set_has_update_url();
    update_url_ = update_url;
  } else {
    clear_has_update_url();
    update_url_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  }
}

// optional bool enabled = 4;
inline bool ExtensionSpecifics::has_enabled() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ExtensionSpecifics::set_has_enabled() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ExtensionSpecifics::clear_has_enabled() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ExtensionSpecifics::clear_enabled() {
  enabled_ = false;
  clear_has_enabled();
}
inline bool ExtensionSpecifics::enabled() const {
  return enabled_;
}
inline void ExtensionSpecifics::set_enabled(bool value) {
  set_has_enabled();
  enabled_ = value;
}

// optional bool incognito_enabled = 5;
inline bool ExtensionSpecifics::has_incognito_enabled() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ExtensionSpecifics::set_has_incognito_enabled() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ExtensionSpecifics::clear_has_incognito_enabled() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ExtensionSpecifics::clear_incognito_enabled() {
  incognito_enabled_ = false;
  clear_has_incognito_enabled();
}
inline bool ExtensionSpecifics::incognito_enabled() const {
  return incognito_enabled_;
}
inline void ExtensionSpecifics::set_incognito_enabled(bool value) {
  set_has_incognito_enabled();
  incognito_enabled_ = value;
}

// optional string name = 6;
inline bool ExtensionSpecifics::has_name() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ExtensionSpecifics::set_has_name() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ExtensionSpecifics::clear_has_name() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ExtensionSpecifics::clear_name() {
  if (name_ != &::google::protobuf::internal::GetEmptyString()) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& ExtensionSpecifics::name() const {
  return *name_;
}
inline void ExtensionSpecifics::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyString()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void ExtensionSpecifics::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyString()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void ExtensionSpecifics::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyString()) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ExtensionSpecifics::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyString()) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* ExtensionSpecifics::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyString()) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
    return temp;
  }
}
inline void ExtensionSpecifics::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::GetEmptyString()) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_extension_5fspecifics_2eproto__INCLUDED
