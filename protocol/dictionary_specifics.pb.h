// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dictionary_specifics.proto

#ifndef PROTOBUF_dictionary_5fspecifics_2eproto__INCLUDED
#define PROTOBUF_dictionary_5fspecifics_2eproto__INCLUDED

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
void SYNC_EXPORT protobuf_AddDesc_dictionary_5fspecifics_2eproto();
void protobuf_AssignDesc_dictionary_5fspecifics_2eproto();
void protobuf_ShutdownFile_dictionary_5fspecifics_2eproto();

class DictionarySpecifics;

// ===================================================================

class SYNC_EXPORT DictionarySpecifics : public ::google::protobuf::MessageLite {
 public:
  DictionarySpecifics();
  virtual ~DictionarySpecifics();

  DictionarySpecifics(const DictionarySpecifics& from);

  inline DictionarySpecifics& operator=(const DictionarySpecifics& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const DictionarySpecifics& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const DictionarySpecifics* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(DictionarySpecifics* other);

  // implements Message ----------------------------------------------

  DictionarySpecifics* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const DictionarySpecifics& from);
  void MergeFrom(const DictionarySpecifics& from);
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

  // optional string word = 1;
  inline bool has_word() const;
  inline void clear_word();
  static const int kWordFieldNumber = 1;
  inline const ::std::string& word() const;
  inline void set_word(const ::std::string& value);
  inline void set_word(const char* value);
  inline void set_word(const char* value, size_t size);
  inline ::std::string* mutable_word();
  inline ::std::string* release_word();
  inline void set_allocated_word(::std::string* word);

  // @@protoc_insertion_point(class_scope:sync_pb.DictionarySpecifics)
 private:
  inline void set_has_word();
  inline void clear_has_word();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* word_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void SYNC_EXPORT protobuf_AddDesc_dictionary_5fspecifics_2eproto_impl();
  #else
  friend void SYNC_EXPORT protobuf_AddDesc_dictionary_5fspecifics_2eproto();
  #endif
  friend void protobuf_AssignDesc_dictionary_5fspecifics_2eproto();
  friend void protobuf_ShutdownFile_dictionary_5fspecifics_2eproto();

  void InitAsDefaultInstance();
  static DictionarySpecifics* default_instance_;
};
// ===================================================================


// ===================================================================

// DictionarySpecifics

// optional string word = 1;
inline bool DictionarySpecifics::has_word() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DictionarySpecifics::set_has_word() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DictionarySpecifics::clear_has_word() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DictionarySpecifics::clear_word() {
  if (word_ != &::google::protobuf::internal::GetEmptyString()) {
    word_->clear();
  }
  clear_has_word();
}
inline const ::std::string& DictionarySpecifics::word() const {
  return *word_;
}
inline void DictionarySpecifics::set_word(const ::std::string& value) {
  set_has_word();
  if (word_ == &::google::protobuf::internal::GetEmptyString()) {
    word_ = new ::std::string;
  }
  word_->assign(value);
}
inline void DictionarySpecifics::set_word(const char* value) {
  set_has_word();
  if (word_ == &::google::protobuf::internal::GetEmptyString()) {
    word_ = new ::std::string;
  }
  word_->assign(value);
}
inline void DictionarySpecifics::set_word(const char* value, size_t size) {
  set_has_word();
  if (word_ == &::google::protobuf::internal::GetEmptyString()) {
    word_ = new ::std::string;
  }
  word_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DictionarySpecifics::mutable_word() {
  set_has_word();
  if (word_ == &::google::protobuf::internal::GetEmptyString()) {
    word_ = new ::std::string;
  }
  return word_;
}
inline ::std::string* DictionarySpecifics::release_word() {
  clear_has_word();
  if (word_ == &::google::protobuf::internal::GetEmptyString()) {
    return NULL;
  } else {
    ::std::string* temp = word_;
    word_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
    return temp;
  }
}
inline void DictionarySpecifics::set_allocated_word(::std::string* word) {
  if (word_ != &::google::protobuf::internal::GetEmptyString()) {
    delete word_;
  }
  if (word) {
    set_has_word();
    word_ = word;
  } else {
    clear_has_word();
    word_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_dictionary_5fspecifics_2eproto__INCLUDED