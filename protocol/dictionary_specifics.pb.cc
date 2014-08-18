// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dictionary_specifics.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "dictionary_specifics.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {

void protobuf_ShutdownFile_dictionary_5fspecifics_2eproto() {
  delete DictionarySpecifics::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_dictionary_5fspecifics_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_dictionary_5fspecifics_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  DictionarySpecifics::default_instance_ = new DictionarySpecifics();
  DictionarySpecifics::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_dictionary_5fspecifics_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_dictionary_5fspecifics_2eproto_once_);
void protobuf_AddDesc_dictionary_5fspecifics_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_dictionary_5fspecifics_2eproto_once_,
                 &protobuf_AddDesc_dictionary_5fspecifics_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_dictionary_5fspecifics_2eproto {
  StaticDescriptorInitializer_dictionary_5fspecifics_2eproto() {
    protobuf_AddDesc_dictionary_5fspecifics_2eproto();
  }
} static_descriptor_initializer_dictionary_5fspecifics_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int DictionarySpecifics::kWordFieldNumber;
#endif  // !_MSC_VER

DictionarySpecifics::DictionarySpecifics()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void DictionarySpecifics::InitAsDefaultInstance() {
}

DictionarySpecifics::DictionarySpecifics(const DictionarySpecifics& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void DictionarySpecifics::SharedCtor() {
  _cached_size_ = 0;
  word_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DictionarySpecifics::~DictionarySpecifics() {
  SharedDtor();
}

void DictionarySpecifics::SharedDtor() {
  if (word_ != &::google::protobuf::internal::GetEmptyString()) {
    delete word_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void DictionarySpecifics::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const DictionarySpecifics& DictionarySpecifics::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_dictionary_5fspecifics_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_dictionary_5fspecifics_2eproto();
#endif
  return *default_instance_;
}

DictionarySpecifics* DictionarySpecifics::default_instance_ = NULL;

DictionarySpecifics* DictionarySpecifics::New() const {
  return new DictionarySpecifics;
}

void DictionarySpecifics::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_word()) {
      if (word_ != &::google::protobuf::internal::GetEmptyString()) {
        word_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool DictionarySpecifics::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string word = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_word()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void DictionarySpecifics::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string word = 1;
  if (has_word()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->word(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormatLite::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

int DictionarySpecifics::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string word = 1;
    if (has_word()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->word());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DictionarySpecifics::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const DictionarySpecifics*>(&from));
}

void DictionarySpecifics::MergeFrom(const DictionarySpecifics& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_word()) {
      set_word(from.word());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void DictionarySpecifics::CopyFrom(const DictionarySpecifics& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DictionarySpecifics::IsInitialized() const {

  return true;
}

void DictionarySpecifics::Swap(DictionarySpecifics* other) {
  if (other != this) {
    std::swap(word_, other->word_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string DictionarySpecifics::GetTypeName() const {
  return "sync_pb.DictionarySpecifics";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)