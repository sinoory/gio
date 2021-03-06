// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: device_info_specifics.proto

#ifndef PROTOBUF_device_5finfo_5fspecifics_2eproto__INCLUDED
#define PROTOBUF_device_5finfo_5fspecifics_2eproto__INCLUDED

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
#include "sync_enums.pb.h"
// @@protoc_insertion_point(includes)
#include "sync/base/sync_export.h"

namespace sync_pb {

// Internal implementation detail -- do not call these.
void SYNC_EXPORT protobuf_AddDesc_device_5finfo_5fspecifics_2eproto();
void protobuf_AssignDesc_device_5finfo_5fspecifics_2eproto();
void protobuf_ShutdownFile_device_5finfo_5fspecifics_2eproto();

class DeviceInfoSpecifics;

// ===================================================================

class SYNC_EXPORT DeviceInfoSpecifics : public ::google::protobuf::MessageLite {
 public:
  DeviceInfoSpecifics();
  virtual ~DeviceInfoSpecifics();

  DeviceInfoSpecifics(const DeviceInfoSpecifics& from);

  inline DeviceInfoSpecifics& operator=(const DeviceInfoSpecifics& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const DeviceInfoSpecifics& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const DeviceInfoSpecifics* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(DeviceInfoSpecifics* other);

  // implements Message ----------------------------------------------

  DeviceInfoSpecifics* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const DeviceInfoSpecifics& from);
  void MergeFrom(const DeviceInfoSpecifics& from);
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

  // optional string cache_guid = 1;
  inline bool has_cache_guid() const;
  inline void clear_cache_guid();
  static const int kCacheGuidFieldNumber = 1;
  inline const ::std::string& cache_guid() const;
  inline void set_cache_guid(const ::std::string& value);
  inline void set_cache_guid(const char* value);
  inline void set_cache_guid(const char* value, size_t size);
  inline ::std::string* mutable_cache_guid();
  inline ::std::string* release_cache_guid();
  inline void set_allocated_cache_guid(::std::string* cache_guid);

  // optional string client_name = 2;
  inline bool has_client_name() const;
  inline void clear_client_name();
  static const int kClientNameFieldNumber = 2;
  inline const ::std::string& client_name() const;
  inline void set_client_name(const ::std::string& value);
  inline void set_client_name(const char* value);
  inline void set_client_name(const char* value, size_t size);
  inline ::std::string* mutable_client_name();
  inline ::std::string* release_client_name();
  inline void set_allocated_client_name(::std::string* client_name);

  // optional .sync_pb.SyncEnums.DeviceType device_type = 3;
  inline bool has_device_type() const;
  inline void clear_device_type();
  static const int kDeviceTypeFieldNumber = 3;
  inline ::sync_pb::SyncEnums_DeviceType device_type() const;
  inline void set_device_type(::sync_pb::SyncEnums_DeviceType value);

  // optional string sync_user_agent = 4;
  inline bool has_sync_user_agent() const;
  inline void clear_sync_user_agent();
  static const int kSyncUserAgentFieldNumber = 4;
  inline const ::std::string& sync_user_agent() const;
  inline void set_sync_user_agent(const ::std::string& value);
  inline void set_sync_user_agent(const char* value);
  inline void set_sync_user_agent(const char* value, size_t size);
  inline ::std::string* mutable_sync_user_agent();
  inline ::std::string* release_sync_user_agent();
  inline void set_allocated_sync_user_agent(::std::string* sync_user_agent);

  // optional string chrome_version = 5;
  inline bool has_chrome_version() const;
  inline void clear_chrome_version();
  static const int kChromeVersionFieldNumber = 5;
  inline const ::std::string& chrome_version() const;
  inline void set_chrome_version(const ::std::string& value);
  inline void set_chrome_version(const char* value);
  inline void set_chrome_version(const char* value, size_t size);
  inline ::std::string* mutable_chrome_version();
  inline ::std::string* release_chrome_version();
  inline void set_allocated_chrome_version(::std::string* chrome_version);

  // @@protoc_insertion_point(class_scope:sync_pb.DeviceInfoSpecifics)
 private:
  inline void set_has_cache_guid();
  inline void clear_has_cache_guid();
  inline void set_has_client_name();
  inline void clear_has_client_name();
  inline void set_has_device_type();
  inline void clear_has_device_type();
  inline void set_has_sync_user_agent();
  inline void clear_has_sync_user_agent();
  inline void set_has_chrome_version();
  inline void clear_has_chrome_version();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* cache_guid_;
  ::std::string* client_name_;
  ::std::string* sync_user_agent_;
  ::std::string* chrome_version_;
  int device_type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void SYNC_EXPORT protobuf_AddDesc_device_5finfo_5fspecifics_2eproto_impl();
  #else
  friend void SYNC_EXPORT protobuf_AddDesc_device_5finfo_5fspecifics_2eproto();
  #endif
  friend void protobuf_AssignDesc_device_5finfo_5fspecifics_2eproto();
  friend void protobuf_ShutdownFile_device_5finfo_5fspecifics_2eproto();

  void InitAsDefaultInstance();
  static DeviceInfoSpecifics* default_instance_;
};
// ===================================================================


// ===================================================================

// DeviceInfoSpecifics

// optional string cache_guid = 1;
inline bool DeviceInfoSpecifics::has_cache_guid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DeviceInfoSpecifics::set_has_cache_guid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DeviceInfoSpecifics::clear_has_cache_guid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DeviceInfoSpecifics::clear_cache_guid() {
  if (cache_guid_ != &::google::protobuf::internal::GetEmptyString()) {
    cache_guid_->clear();
  }
  clear_has_cache_guid();
}
inline const ::std::string& DeviceInfoSpecifics::cache_guid() const {
  return *cache_guid_;
}
inline void DeviceInfoSpecifics::set_cache_guid(const ::std::string& value) {
  set_has_cache_guid();
  if (cache_guid_ == &::google::protobuf::internal::GetEmptyString()) {
    cache_guid_ = new ::std::string;
  }
  cache_guid_->assign(value);
}
inline void DeviceInfoSpecifics::set_cache_guid(const char* value) {
  set_has_cache_guid();
  if (cache_guid_ == &::google::protobuf::internal::GetEmptyString()) {
    cache_guid_ = new ::std::string;
  }
  cache_guid_->assign(value);
}
inline void DeviceInfoSpecifics::set_cache_guid(const char* value, size_t size) {
  set_has_cache_guid();
  if (cache_guid_ == &::google::protobuf::internal::GetEmptyString()) {
    cache_guid_ = new ::std::string;
  }
  cache_guid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DeviceInfoSpecifics::mutable_cache_guid() {
  set_has_cache_guid();
  if (cache_guid_ == &::google::protobuf::internal::GetEmptyString()) {
    cache_guid_ = new ::std::string;
  }
  return cache_guid_;
}
inline ::std::string* DeviceInfoSpecifics::release_cache_guid() {
  clear_has_cache_guid();
  if (cache_guid_ == &::google::protobuf::internal::GetEmptyString()) {
    return NULL;
  } else {
    ::std::string* temp = cache_guid_;
    cache_guid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
    return temp;
  }
}
inline void DeviceInfoSpecifics::set_allocated_cache_guid(::std::string* cache_guid) {
  if (cache_guid_ != &::google::protobuf::internal::GetEmptyString()) {
    delete cache_guid_;
  }
  if (cache_guid) {
    set_has_cache_guid();
    cache_guid_ = cache_guid;
  } else {
    clear_has_cache_guid();
    cache_guid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  }
}

// optional string client_name = 2;
inline bool DeviceInfoSpecifics::has_client_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DeviceInfoSpecifics::set_has_client_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DeviceInfoSpecifics::clear_has_client_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DeviceInfoSpecifics::clear_client_name() {
  if (client_name_ != &::google::protobuf::internal::GetEmptyString()) {
    client_name_->clear();
  }
  clear_has_client_name();
}
inline const ::std::string& DeviceInfoSpecifics::client_name() const {
  return *client_name_;
}
inline void DeviceInfoSpecifics::set_client_name(const ::std::string& value) {
  set_has_client_name();
  if (client_name_ == &::google::protobuf::internal::GetEmptyString()) {
    client_name_ = new ::std::string;
  }
  client_name_->assign(value);
}
inline void DeviceInfoSpecifics::set_client_name(const char* value) {
  set_has_client_name();
  if (client_name_ == &::google::protobuf::internal::GetEmptyString()) {
    client_name_ = new ::std::string;
  }
  client_name_->assign(value);
}
inline void DeviceInfoSpecifics::set_client_name(const char* value, size_t size) {
  set_has_client_name();
  if (client_name_ == &::google::protobuf::internal::GetEmptyString()) {
    client_name_ = new ::std::string;
  }
  client_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DeviceInfoSpecifics::mutable_client_name() {
  set_has_client_name();
  if (client_name_ == &::google::protobuf::internal::GetEmptyString()) {
    client_name_ = new ::std::string;
  }
  return client_name_;
}
inline ::std::string* DeviceInfoSpecifics::release_client_name() {
  clear_has_client_name();
  if (client_name_ == &::google::protobuf::internal::GetEmptyString()) {
    return NULL;
  } else {
    ::std::string* temp = client_name_;
    client_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
    return temp;
  }
}
inline void DeviceInfoSpecifics::set_allocated_client_name(::std::string* client_name) {
  if (client_name_ != &::google::protobuf::internal::GetEmptyString()) {
    delete client_name_;
  }
  if (client_name) {
    set_has_client_name();
    client_name_ = client_name;
  } else {
    clear_has_client_name();
    client_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  }
}

// optional .sync_pb.SyncEnums.DeviceType device_type = 3;
inline bool DeviceInfoSpecifics::has_device_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void DeviceInfoSpecifics::set_has_device_type() {
  _has_bits_[0] |= 0x00000004u;
}
inline void DeviceInfoSpecifics::clear_has_device_type() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void DeviceInfoSpecifics::clear_device_type() {
  device_type_ = 1;
  clear_has_device_type();
}
inline ::sync_pb::SyncEnums_DeviceType DeviceInfoSpecifics::device_type() const {
  return static_cast< ::sync_pb::SyncEnums_DeviceType >(device_type_);
}
inline void DeviceInfoSpecifics::set_device_type(::sync_pb::SyncEnums_DeviceType value) {
  assert(::sync_pb::SyncEnums_DeviceType_IsValid(value));
  set_has_device_type();
  device_type_ = value;
}

// optional string sync_user_agent = 4;
inline bool DeviceInfoSpecifics::has_sync_user_agent() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void DeviceInfoSpecifics::set_has_sync_user_agent() {
  _has_bits_[0] |= 0x00000008u;
}
inline void DeviceInfoSpecifics::clear_has_sync_user_agent() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void DeviceInfoSpecifics::clear_sync_user_agent() {
  if (sync_user_agent_ != &::google::protobuf::internal::GetEmptyString()) {
    sync_user_agent_->clear();
  }
  clear_has_sync_user_agent();
}
inline const ::std::string& DeviceInfoSpecifics::sync_user_agent() const {
  return *sync_user_agent_;
}
inline void DeviceInfoSpecifics::set_sync_user_agent(const ::std::string& value) {
  set_has_sync_user_agent();
  if (sync_user_agent_ == &::google::protobuf::internal::GetEmptyString()) {
    sync_user_agent_ = new ::std::string;
  }
  sync_user_agent_->assign(value);
}
inline void DeviceInfoSpecifics::set_sync_user_agent(const char* value) {
  set_has_sync_user_agent();
  if (sync_user_agent_ == &::google::protobuf::internal::GetEmptyString()) {
    sync_user_agent_ = new ::std::string;
  }
  sync_user_agent_->assign(value);
}
inline void DeviceInfoSpecifics::set_sync_user_agent(const char* value, size_t size) {
  set_has_sync_user_agent();
  if (sync_user_agent_ == &::google::protobuf::internal::GetEmptyString()) {
    sync_user_agent_ = new ::std::string;
  }
  sync_user_agent_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DeviceInfoSpecifics::mutable_sync_user_agent() {
  set_has_sync_user_agent();
  if (sync_user_agent_ == &::google::protobuf::internal::GetEmptyString()) {
    sync_user_agent_ = new ::std::string;
  }
  return sync_user_agent_;
}
inline ::std::string* DeviceInfoSpecifics::release_sync_user_agent() {
  clear_has_sync_user_agent();
  if (sync_user_agent_ == &::google::protobuf::internal::GetEmptyString()) {
    return NULL;
  } else {
    ::std::string* temp = sync_user_agent_;
    sync_user_agent_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
    return temp;
  }
}
inline void DeviceInfoSpecifics::set_allocated_sync_user_agent(::std::string* sync_user_agent) {
  if (sync_user_agent_ != &::google::protobuf::internal::GetEmptyString()) {
    delete sync_user_agent_;
  }
  if (sync_user_agent) {
    set_has_sync_user_agent();
    sync_user_agent_ = sync_user_agent;
  } else {
    clear_has_sync_user_agent();
    sync_user_agent_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  }
}

// optional string chrome_version = 5;
inline bool DeviceInfoSpecifics::has_chrome_version() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void DeviceInfoSpecifics::set_has_chrome_version() {
  _has_bits_[0] |= 0x00000010u;
}
inline void DeviceInfoSpecifics::clear_has_chrome_version() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void DeviceInfoSpecifics::clear_chrome_version() {
  if (chrome_version_ != &::google::protobuf::internal::GetEmptyString()) {
    chrome_version_->clear();
  }
  clear_has_chrome_version();
}
inline const ::std::string& DeviceInfoSpecifics::chrome_version() const {
  return *chrome_version_;
}
inline void DeviceInfoSpecifics::set_chrome_version(const ::std::string& value) {
  set_has_chrome_version();
  if (chrome_version_ == &::google::protobuf::internal::GetEmptyString()) {
    chrome_version_ = new ::std::string;
  }
  chrome_version_->assign(value);
}
inline void DeviceInfoSpecifics::set_chrome_version(const char* value) {
  set_has_chrome_version();
  if (chrome_version_ == &::google::protobuf::internal::GetEmptyString()) {
    chrome_version_ = new ::std::string;
  }
  chrome_version_->assign(value);
}
inline void DeviceInfoSpecifics::set_chrome_version(const char* value, size_t size) {
  set_has_chrome_version();
  if (chrome_version_ == &::google::protobuf::internal::GetEmptyString()) {
    chrome_version_ = new ::std::string;
  }
  chrome_version_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DeviceInfoSpecifics::mutable_chrome_version() {
  set_has_chrome_version();
  if (chrome_version_ == &::google::protobuf::internal::GetEmptyString()) {
    chrome_version_ = new ::std::string;
  }
  return chrome_version_;
}
inline ::std::string* DeviceInfoSpecifics::release_chrome_version() {
  clear_has_chrome_version();
  if (chrome_version_ == &::google::protobuf::internal::GetEmptyString()) {
    return NULL;
  } else {
    ::std::string* temp = chrome_version_;
    chrome_version_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
    return temp;
  }
}
inline void DeviceInfoSpecifics::set_allocated_chrome_version(::std::string* chrome_version) {
  if (chrome_version_ != &::google::protobuf::internal::GetEmptyString()) {
    delete chrome_version_;
  }
  if (chrome_version) {
    set_has_chrome_version();
    chrome_version_ = chrome_version;
  } else {
    clear_has_chrome_version();
    chrome_version_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_device_5finfo_5fspecifics_2eproto__INCLUDED
