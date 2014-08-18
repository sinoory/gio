// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: favicon_tracking_specifics.proto

#ifndef PROTOBUF_favicon_5ftracking_5fspecifics_2eproto__INCLUDED
#define PROTOBUF_favicon_5ftracking_5fspecifics_2eproto__INCLUDED

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
void SYNC_EXPORT protobuf_AddDesc_favicon_5ftracking_5fspecifics_2eproto();
void protobuf_AssignDesc_favicon_5ftracking_5fspecifics_2eproto();
void protobuf_ShutdownFile_favicon_5ftracking_5fspecifics_2eproto();

class FaviconTrackingSpecifics;

// ===================================================================

class SYNC_EXPORT FaviconTrackingSpecifics : public ::google::protobuf::MessageLite {
 public:
  FaviconTrackingSpecifics();
  virtual ~FaviconTrackingSpecifics();

  FaviconTrackingSpecifics(const FaviconTrackingSpecifics& from);

  inline FaviconTrackingSpecifics& operator=(const FaviconTrackingSpecifics& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const FaviconTrackingSpecifics& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const FaviconTrackingSpecifics* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(FaviconTrackingSpecifics* other);

  // implements Message ----------------------------------------------

  FaviconTrackingSpecifics* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const FaviconTrackingSpecifics& from);
  void MergeFrom(const FaviconTrackingSpecifics& from);
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

  // optional string favicon_url = 1;
  inline bool has_favicon_url() const;
  inline void clear_favicon_url();
  static const int kFaviconUrlFieldNumber = 1;
  inline const ::std::string& favicon_url() const;
  inline void set_favicon_url(const ::std::string& value);
  inline void set_favicon_url(const char* value);
  inline void set_favicon_url(const char* value, size_t size);
  inline ::std::string* mutable_favicon_url();
  inline ::std::string* release_favicon_url();
  inline void set_allocated_favicon_url(::std::string* favicon_url);

  // optional int64 last_visit_time_ms = 3;
  inline bool has_last_visit_time_ms() const;
  inline void clear_last_visit_time_ms();
  static const int kLastVisitTimeMsFieldNumber = 3;
  inline ::google::protobuf::int64 last_visit_time_ms() const;
  inline void set_last_visit_time_ms(::google::protobuf::int64 value);

  // optional bool is_bookmarked = 4;
  inline bool has_is_bookmarked() const;
  inline void clear_is_bookmarked();
  static const int kIsBookmarkedFieldNumber = 4;
  inline bool is_bookmarked() const;
  inline void set_is_bookmarked(bool value);

  // @@protoc_insertion_point(class_scope:sync_pb.FaviconTrackingSpecifics)
 private:
  inline void set_has_favicon_url();
  inline void clear_has_favicon_url();
  inline void set_has_last_visit_time_ms();
  inline void clear_has_last_visit_time_ms();
  inline void set_has_is_bookmarked();
  inline void clear_has_is_bookmarked();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* favicon_url_;
  ::google::protobuf::int64 last_visit_time_ms_;
  bool is_bookmarked_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void SYNC_EXPORT protobuf_AddDesc_favicon_5ftracking_5fspecifics_2eproto_impl();
  #else
  friend void SYNC_EXPORT protobuf_AddDesc_favicon_5ftracking_5fspecifics_2eproto();
  #endif
  friend void protobuf_AssignDesc_favicon_5ftracking_5fspecifics_2eproto();
  friend void protobuf_ShutdownFile_favicon_5ftracking_5fspecifics_2eproto();

  void InitAsDefaultInstance();
  static FaviconTrackingSpecifics* default_instance_;
};
// ===================================================================


// ===================================================================

// FaviconTrackingSpecifics

// optional string favicon_url = 1;
inline bool FaviconTrackingSpecifics::has_favicon_url() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FaviconTrackingSpecifics::set_has_favicon_url() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FaviconTrackingSpecifics::clear_has_favicon_url() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FaviconTrackingSpecifics::clear_favicon_url() {
  if (favicon_url_ != &::google::protobuf::internal::GetEmptyString()) {
    favicon_url_->clear();
  }
  clear_has_favicon_url();
}
inline const ::std::string& FaviconTrackingSpecifics::favicon_url() const {
  return *favicon_url_;
}
inline void FaviconTrackingSpecifics::set_favicon_url(const ::std::string& value) {
  set_has_favicon_url();
  if (favicon_url_ == &::google::protobuf::internal::GetEmptyString()) {
    favicon_url_ = new ::std::string;
  }
  favicon_url_->assign(value);
}
inline void FaviconTrackingSpecifics::set_favicon_url(const char* value) {
  set_has_favicon_url();
  if (favicon_url_ == &::google::protobuf::internal::GetEmptyString()) {
    favicon_url_ = new ::std::string;
  }
  favicon_url_->assign(value);
}
inline void FaviconTrackingSpecifics::set_favicon_url(const char* value, size_t size) {
  set_has_favicon_url();
  if (favicon_url_ == &::google::protobuf::internal::GetEmptyString()) {
    favicon_url_ = new ::std::string;
  }
  favicon_url_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* FaviconTrackingSpecifics::mutable_favicon_url() {
  set_has_favicon_url();
  if (favicon_url_ == &::google::protobuf::internal::GetEmptyString()) {
    favicon_url_ = new ::std::string;
  }
  return favicon_url_;
}
inline ::std::string* FaviconTrackingSpecifics::release_favicon_url() {
  clear_has_favicon_url();
  if (favicon_url_ == &::google::protobuf::internal::GetEmptyString()) {
    return NULL;
  } else {
    ::std::string* temp = favicon_url_;
    favicon_url_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
    return temp;
  }
}
inline void FaviconTrackingSpecifics::set_allocated_favicon_url(::std::string* favicon_url) {
  if (favicon_url_ != &::google::protobuf::internal::GetEmptyString()) {
    delete favicon_url_;
  }
  if (favicon_url) {
    set_has_favicon_url();
    favicon_url_ = favicon_url;
  } else {
    clear_has_favicon_url();
    favicon_url_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  }
}

// optional int64 last_visit_time_ms = 3;
inline bool FaviconTrackingSpecifics::has_last_visit_time_ms() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FaviconTrackingSpecifics::set_has_last_visit_time_ms() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FaviconTrackingSpecifics::clear_has_last_visit_time_ms() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FaviconTrackingSpecifics::clear_last_visit_time_ms() {
  last_visit_time_ms_ = GOOGLE_LONGLONG(0);
  clear_has_last_visit_time_ms();
}
inline ::google::protobuf::int64 FaviconTrackingSpecifics::last_visit_time_ms() const {
  return last_visit_time_ms_;
}
inline void FaviconTrackingSpecifics::set_last_visit_time_ms(::google::protobuf::int64 value) {
  set_has_last_visit_time_ms();
  last_visit_time_ms_ = value;
}

// optional bool is_bookmarked = 4;
inline bool FaviconTrackingSpecifics::has_is_bookmarked() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void FaviconTrackingSpecifics::set_has_is_bookmarked() {
  _has_bits_[0] |= 0x00000004u;
}
inline void FaviconTrackingSpecifics::clear_has_is_bookmarked() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void FaviconTrackingSpecifics::clear_is_bookmarked() {
  is_bookmarked_ = false;
  clear_has_is_bookmarked();
}
inline bool FaviconTrackingSpecifics::is_bookmarked() const {
  return is_bookmarked_;
}
inline void FaviconTrackingSpecifics::set_is_bookmarked(bool value) {
  set_has_is_bookmarked();
  is_bookmarked_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_favicon_5ftracking_5fspecifics_2eproto__INCLUDED