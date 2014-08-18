// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: app_list_specifics.proto

#ifndef PROTOBUF_app_5flist_5fspecifics_2eproto__INCLUDED
#define PROTOBUF_app_5flist_5fspecifics_2eproto__INCLUDED

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
void SYNC_EXPORT protobuf_AddDesc_app_5flist_5fspecifics_2eproto();
void protobuf_AssignDesc_app_5flist_5fspecifics_2eproto();
void protobuf_ShutdownFile_app_5flist_5fspecifics_2eproto();

class AppListSpecifics;

enum AppListSpecifics_AppListItemType {
  AppListSpecifics_AppListItemType_TYPE_APP = 1,
  AppListSpecifics_AppListItemType_TYPE_REMOVE_DEFAULT_APP = 2,
  AppListSpecifics_AppListItemType_TYPE_FOLDER = 3,
  AppListSpecifics_AppListItemType_TYPE_URL = 4
};
SYNC_EXPORT bool AppListSpecifics_AppListItemType_IsValid(int value);
const AppListSpecifics_AppListItemType AppListSpecifics_AppListItemType_AppListItemType_MIN = AppListSpecifics_AppListItemType_TYPE_APP;
const AppListSpecifics_AppListItemType AppListSpecifics_AppListItemType_AppListItemType_MAX = AppListSpecifics_AppListItemType_TYPE_URL;
const int AppListSpecifics_AppListItemType_AppListItemType_ARRAYSIZE = AppListSpecifics_AppListItemType_AppListItemType_MAX + 1;

// ===================================================================

class SYNC_EXPORT AppListSpecifics : public ::google::protobuf::MessageLite {
 public:
  AppListSpecifics();
  virtual ~AppListSpecifics();

  AppListSpecifics(const AppListSpecifics& from);

  inline AppListSpecifics& operator=(const AppListSpecifics& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const AppListSpecifics& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const AppListSpecifics* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(AppListSpecifics* other);

  // implements Message ----------------------------------------------

  AppListSpecifics* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const AppListSpecifics& from);
  void MergeFrom(const AppListSpecifics& from);
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

  typedef AppListSpecifics_AppListItemType AppListItemType;
  static const AppListItemType TYPE_APP = AppListSpecifics_AppListItemType_TYPE_APP;
  static const AppListItemType TYPE_REMOVE_DEFAULT_APP = AppListSpecifics_AppListItemType_TYPE_REMOVE_DEFAULT_APP;
  static const AppListItemType TYPE_FOLDER = AppListSpecifics_AppListItemType_TYPE_FOLDER;
  static const AppListItemType TYPE_URL = AppListSpecifics_AppListItemType_TYPE_URL;
  static inline bool AppListItemType_IsValid(int value) {
    return AppListSpecifics_AppListItemType_IsValid(value);
  }
  static const AppListItemType AppListItemType_MIN =
    AppListSpecifics_AppListItemType_AppListItemType_MIN;
  static const AppListItemType AppListItemType_MAX =
    AppListSpecifics_AppListItemType_AppListItemType_MAX;
  static const int AppListItemType_ARRAYSIZE =
    AppListSpecifics_AppListItemType_AppListItemType_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // optional string item_id = 1;
  inline bool has_item_id() const;
  inline void clear_item_id();
  static const int kItemIdFieldNumber = 1;
  inline const ::std::string& item_id() const;
  inline void set_item_id(const ::std::string& value);
  inline void set_item_id(const char* value);
  inline void set_item_id(const char* value, size_t size);
  inline ::std::string* mutable_item_id();
  inline ::std::string* release_item_id();
  inline void set_allocated_item_id(::std::string* item_id);

  // optional .sync_pb.AppListSpecifics.AppListItemType item_type = 2;
  inline bool has_item_type() const;
  inline void clear_item_type();
  static const int kItemTypeFieldNumber = 2;
  inline ::sync_pb::AppListSpecifics_AppListItemType item_type() const;
  inline void set_item_type(::sync_pb::AppListSpecifics_AppListItemType value);

  // optional string item_name = 3;
  inline bool has_item_name() const;
  inline void clear_item_name();
  static const int kItemNameFieldNumber = 3;
  inline const ::std::string& item_name() const;
  inline void set_item_name(const ::std::string& value);
  inline void set_item_name(const char* value);
  inline void set_item_name(const char* value, size_t size);
  inline ::std::string* mutable_item_name();
  inline ::std::string* release_item_name();
  inline void set_allocated_item_name(::std::string* item_name);

  // optional string parent_id = 4;
  inline bool has_parent_id() const;
  inline void clear_parent_id();
  static const int kParentIdFieldNumber = 4;
  inline const ::std::string& parent_id() const;
  inline void set_parent_id(const ::std::string& value);
  inline void set_parent_id(const char* value);
  inline void set_parent_id(const char* value, size_t size);
  inline ::std::string* mutable_parent_id();
  inline ::std::string* release_parent_id();
  inline void set_allocated_parent_id(::std::string* parent_id);

  // optional string page_ordinal = 5;
  inline bool has_page_ordinal() const;
  inline void clear_page_ordinal();
  static const int kPageOrdinalFieldNumber = 5;
  inline const ::std::string& page_ordinal() const;
  inline void set_page_ordinal(const ::std::string& value);
  inline void set_page_ordinal(const char* value);
  inline void set_page_ordinal(const char* value, size_t size);
  inline ::std::string* mutable_page_ordinal();
  inline ::std::string* release_page_ordinal();
  inline void set_allocated_page_ordinal(::std::string* page_ordinal);

  // optional string item_ordinal = 6;
  inline bool has_item_ordinal() const;
  inline void clear_item_ordinal();
  static const int kItemOrdinalFieldNumber = 6;
  inline const ::std::string& item_ordinal() const;
  inline void set_item_ordinal(const ::std::string& value);
  inline void set_item_ordinal(const char* value);
  inline void set_item_ordinal(const char* value, size_t size);
  inline ::std::string* mutable_item_ordinal();
  inline ::std::string* release_item_ordinal();
  inline void set_allocated_item_ordinal(::std::string* item_ordinal);

  // @@protoc_insertion_point(class_scope:sync_pb.AppListSpecifics)
 private:
  inline void set_has_item_id();
  inline void clear_has_item_id();
  inline void set_has_item_type();
  inline void clear_has_item_type();
  inline void set_has_item_name();
  inline void clear_has_item_name();
  inline void set_has_parent_id();
  inline void clear_has_parent_id();
  inline void set_has_page_ordinal();
  inline void clear_has_page_ordinal();
  inline void set_has_item_ordinal();
  inline void clear_has_item_ordinal();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* item_id_;
  ::std::string* item_name_;
  ::std::string* parent_id_;
  ::std::string* page_ordinal_;
  ::std::string* item_ordinal_;
  int item_type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void SYNC_EXPORT protobuf_AddDesc_app_5flist_5fspecifics_2eproto_impl();
  #else
  friend void SYNC_EXPORT protobuf_AddDesc_app_5flist_5fspecifics_2eproto();
  #endif
  friend void protobuf_AssignDesc_app_5flist_5fspecifics_2eproto();
  friend void protobuf_ShutdownFile_app_5flist_5fspecifics_2eproto();

  void InitAsDefaultInstance();
  static AppListSpecifics* default_instance_;
};
// ===================================================================


// ===================================================================

// AppListSpecifics

// optional string item_id = 1;
inline bool AppListSpecifics::has_item_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AppListSpecifics::set_has_item_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AppListSpecifics::clear_has_item_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AppListSpecifics::clear_item_id() {
  if (item_id_ != &::google::protobuf::internal::GetEmptyString()) {
    item_id_->clear();
  }
  clear_has_item_id();
}
inline const ::std::string& AppListSpecifics::item_id() const {
  return *item_id_;
}
inline void AppListSpecifics::set_item_id(const ::std::string& value) {
  set_has_item_id();
  if (item_id_ == &::google::protobuf::internal::GetEmptyString()) {
    item_id_ = new ::std::string;
  }
  item_id_->assign(value);
}
inline void AppListSpecifics::set_item_id(const char* value) {
  set_has_item_id();
  if (item_id_ == &::google::protobuf::internal::GetEmptyString()) {
    item_id_ = new ::std::string;
  }
  item_id_->assign(value);
}
inline void AppListSpecifics::set_item_id(const char* value, size_t size) {
  set_has_item_id();
  if (item_id_ == &::google::protobuf::internal::GetEmptyString()) {
    item_id_ = new ::std::string;
  }
  item_id_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* AppListSpecifics::mutable_item_id() {
  set_has_item_id();
  if (item_id_ == &::google::protobuf::internal::GetEmptyString()) {
    item_id_ = new ::std::string;
  }
  return item_id_;
}
inline ::std::string* AppListSpecifics::release_item_id() {
  clear_has_item_id();
  if (item_id_ == &::google::protobuf::internal::GetEmptyString()) {
    return NULL;
  } else {
    ::std::string* temp = item_id_;
    item_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
    return temp;
  }
}
inline void AppListSpecifics::set_allocated_item_id(::std::string* item_id) {
  if (item_id_ != &::google::protobuf::internal::GetEmptyString()) {
    delete item_id_;
  }
  if (item_id) {
    set_has_item_id();
    item_id_ = item_id;
  } else {
    clear_has_item_id();
    item_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  }
}

// optional .sync_pb.AppListSpecifics.AppListItemType item_type = 2;
inline bool AppListSpecifics::has_item_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AppListSpecifics::set_has_item_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AppListSpecifics::clear_has_item_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void AppListSpecifics::clear_item_type() {
  item_type_ = 1;
  clear_has_item_type();
}
inline ::sync_pb::AppListSpecifics_AppListItemType AppListSpecifics::item_type() const {
  return static_cast< ::sync_pb::AppListSpecifics_AppListItemType >(item_type_);
}
inline void AppListSpecifics::set_item_type(::sync_pb::AppListSpecifics_AppListItemType value) {
  assert(::sync_pb::AppListSpecifics_AppListItemType_IsValid(value));
  set_has_item_type();
  item_type_ = value;
}

// optional string item_name = 3;
inline bool AppListSpecifics::has_item_name() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void AppListSpecifics::set_has_item_name() {
  _has_bits_[0] |= 0x00000004u;
}
inline void AppListSpecifics::clear_has_item_name() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void AppListSpecifics::clear_item_name() {
  if (item_name_ != &::google::protobuf::internal::GetEmptyString()) {
    item_name_->clear();
  }
  clear_has_item_name();
}
inline const ::std::string& AppListSpecifics::item_name() const {
  return *item_name_;
}
inline void AppListSpecifics::set_item_name(const ::std::string& value) {
  set_has_item_name();
  if (item_name_ == &::google::protobuf::internal::GetEmptyString()) {
    item_name_ = new ::std::string;
  }
  item_name_->assign(value);
}
inline void AppListSpecifics::set_item_name(const char* value) {
  set_has_item_name();
  if (item_name_ == &::google::protobuf::internal::GetEmptyString()) {
    item_name_ = new ::std::string;
  }
  item_name_->assign(value);
}
inline void AppListSpecifics::set_item_name(const char* value, size_t size) {
  set_has_item_name();
  if (item_name_ == &::google::protobuf::internal::GetEmptyString()) {
    item_name_ = new ::std::string;
  }
  item_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* AppListSpecifics::mutable_item_name() {
  set_has_item_name();
  if (item_name_ == &::google::protobuf::internal::GetEmptyString()) {
    item_name_ = new ::std::string;
  }
  return item_name_;
}
inline ::std::string* AppListSpecifics::release_item_name() {
  clear_has_item_name();
  if (item_name_ == &::google::protobuf::internal::GetEmptyString()) {
    return NULL;
  } else {
    ::std::string* temp = item_name_;
    item_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
    return temp;
  }
}
inline void AppListSpecifics::set_allocated_item_name(::std::string* item_name) {
  if (item_name_ != &::google::protobuf::internal::GetEmptyString()) {
    delete item_name_;
  }
  if (item_name) {
    set_has_item_name();
    item_name_ = item_name;
  } else {
    clear_has_item_name();
    item_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  }
}

// optional string parent_id = 4;
inline bool AppListSpecifics::has_parent_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void AppListSpecifics::set_has_parent_id() {
  _has_bits_[0] |= 0x00000008u;
}
inline void AppListSpecifics::clear_has_parent_id() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void AppListSpecifics::clear_parent_id() {
  if (parent_id_ != &::google::protobuf::internal::GetEmptyString()) {
    parent_id_->clear();
  }
  clear_has_parent_id();
}
inline const ::std::string& AppListSpecifics::parent_id() const {
  return *parent_id_;
}
inline void AppListSpecifics::set_parent_id(const ::std::string& value) {
  set_has_parent_id();
  if (parent_id_ == &::google::protobuf::internal::GetEmptyString()) {
    parent_id_ = new ::std::string;
  }
  parent_id_->assign(value);
}
inline void AppListSpecifics::set_parent_id(const char* value) {
  set_has_parent_id();
  if (parent_id_ == &::google::protobuf::internal::GetEmptyString()) {
    parent_id_ = new ::std::string;
  }
  parent_id_->assign(value);
}
inline void AppListSpecifics::set_parent_id(const char* value, size_t size) {
  set_has_parent_id();
  if (parent_id_ == &::google::protobuf::internal::GetEmptyString()) {
    parent_id_ = new ::std::string;
  }
  parent_id_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* AppListSpecifics::mutable_parent_id() {
  set_has_parent_id();
  if (parent_id_ == &::google::protobuf::internal::GetEmptyString()) {
    parent_id_ = new ::std::string;
  }
  return parent_id_;
}
inline ::std::string* AppListSpecifics::release_parent_id() {
  clear_has_parent_id();
  if (parent_id_ == &::google::protobuf::internal::GetEmptyString()) {
    return NULL;
  } else {
    ::std::string* temp = parent_id_;
    parent_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
    return temp;
  }
}
inline void AppListSpecifics::set_allocated_parent_id(::std::string* parent_id) {
  if (parent_id_ != &::google::protobuf::internal::GetEmptyString()) {
    delete parent_id_;
  }
  if (parent_id) {
    set_has_parent_id();
    parent_id_ = parent_id;
  } else {
    clear_has_parent_id();
    parent_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  }
}

// optional string page_ordinal = 5;
inline bool AppListSpecifics::has_page_ordinal() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void AppListSpecifics::set_has_page_ordinal() {
  _has_bits_[0] |= 0x00000010u;
}
inline void AppListSpecifics::clear_has_page_ordinal() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void AppListSpecifics::clear_page_ordinal() {
  if (page_ordinal_ != &::google::protobuf::internal::GetEmptyString()) {
    page_ordinal_->clear();
  }
  clear_has_page_ordinal();
}
inline const ::std::string& AppListSpecifics::page_ordinal() const {
  return *page_ordinal_;
}
inline void AppListSpecifics::set_page_ordinal(const ::std::string& value) {
  set_has_page_ordinal();
  if (page_ordinal_ == &::google::protobuf::internal::GetEmptyString()) {
    page_ordinal_ = new ::std::string;
  }
  page_ordinal_->assign(value);
}
inline void AppListSpecifics::set_page_ordinal(const char* value) {
  set_has_page_ordinal();
  if (page_ordinal_ == &::google::protobuf::internal::GetEmptyString()) {
    page_ordinal_ = new ::std::string;
  }
  page_ordinal_->assign(value);
}
inline void AppListSpecifics::set_page_ordinal(const char* value, size_t size) {
  set_has_page_ordinal();
  if (page_ordinal_ == &::google::protobuf::internal::GetEmptyString()) {
    page_ordinal_ = new ::std::string;
  }
  page_ordinal_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* AppListSpecifics::mutable_page_ordinal() {
  set_has_page_ordinal();
  if (page_ordinal_ == &::google::protobuf::internal::GetEmptyString()) {
    page_ordinal_ = new ::std::string;
  }
  return page_ordinal_;
}
inline ::std::string* AppListSpecifics::release_page_ordinal() {
  clear_has_page_ordinal();
  if (page_ordinal_ == &::google::protobuf::internal::GetEmptyString()) {
    return NULL;
  } else {
    ::std::string* temp = page_ordinal_;
    page_ordinal_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
    return temp;
  }
}
inline void AppListSpecifics::set_allocated_page_ordinal(::std::string* page_ordinal) {
  if (page_ordinal_ != &::google::protobuf::internal::GetEmptyString()) {
    delete page_ordinal_;
  }
  if (page_ordinal) {
    set_has_page_ordinal();
    page_ordinal_ = page_ordinal;
  } else {
    clear_has_page_ordinal();
    page_ordinal_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  }
}

// optional string item_ordinal = 6;
inline bool AppListSpecifics::has_item_ordinal() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void AppListSpecifics::set_has_item_ordinal() {
  _has_bits_[0] |= 0x00000020u;
}
inline void AppListSpecifics::clear_has_item_ordinal() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void AppListSpecifics::clear_item_ordinal() {
  if (item_ordinal_ != &::google::protobuf::internal::GetEmptyString()) {
    item_ordinal_->clear();
  }
  clear_has_item_ordinal();
}
inline const ::std::string& AppListSpecifics::item_ordinal() const {
  return *item_ordinal_;
}
inline void AppListSpecifics::set_item_ordinal(const ::std::string& value) {
  set_has_item_ordinal();
  if (item_ordinal_ == &::google::protobuf::internal::GetEmptyString()) {
    item_ordinal_ = new ::std::string;
  }
  item_ordinal_->assign(value);
}
inline void AppListSpecifics::set_item_ordinal(const char* value) {
  set_has_item_ordinal();
  if (item_ordinal_ == &::google::protobuf::internal::GetEmptyString()) {
    item_ordinal_ = new ::std::string;
  }
  item_ordinal_->assign(value);
}
inline void AppListSpecifics::set_item_ordinal(const char* value, size_t size) {
  set_has_item_ordinal();
  if (item_ordinal_ == &::google::protobuf::internal::GetEmptyString()) {
    item_ordinal_ = new ::std::string;
  }
  item_ordinal_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* AppListSpecifics::mutable_item_ordinal() {
  set_has_item_ordinal();
  if (item_ordinal_ == &::google::protobuf::internal::GetEmptyString()) {
    item_ordinal_ = new ::std::string;
  }
  return item_ordinal_;
}
inline ::std::string* AppListSpecifics::release_item_ordinal() {
  clear_has_item_ordinal();
  if (item_ordinal_ == &::google::protobuf::internal::GetEmptyString()) {
    return NULL;
  } else {
    ::std::string* temp = item_ordinal_;
    item_ordinal_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
    return temp;
  }
}
inline void AppListSpecifics::set_allocated_item_ordinal(::std::string* item_ordinal) {
  if (item_ordinal_ != &::google::protobuf::internal::GetEmptyString()) {
    delete item_ordinal_;
  }
  if (item_ordinal) {
    set_has_item_ordinal();
    item_ordinal_ = item_ordinal;
  } else {
    clear_has_item_ordinal();
    item_ordinal_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_app_5flist_5fspecifics_2eproto__INCLUDED
