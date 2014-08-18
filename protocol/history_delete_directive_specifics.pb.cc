// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: history_delete_directive_specifics.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "history_delete_directive_specifics.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {

void protobuf_ShutdownFile_history_5fdelete_5fdirective_5fspecifics_2eproto() {
  delete HistoryDeleteDirectiveSpecifics::default_instance_;
  delete GlobalIdDirective::default_instance_;
  delete TimeRangeDirective::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_history_5fdelete_5fdirective_5fspecifics_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_history_5fdelete_5fdirective_5fspecifics_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  HistoryDeleteDirectiveSpecifics::default_instance_ = new HistoryDeleteDirectiveSpecifics();
  GlobalIdDirective::default_instance_ = new GlobalIdDirective();
  TimeRangeDirective::default_instance_ = new TimeRangeDirective();
  HistoryDeleteDirectiveSpecifics::default_instance_->InitAsDefaultInstance();
  GlobalIdDirective::default_instance_->InitAsDefaultInstance();
  TimeRangeDirective::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_history_5fdelete_5fdirective_5fspecifics_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_history_5fdelete_5fdirective_5fspecifics_2eproto_once_);
void protobuf_AddDesc_history_5fdelete_5fdirective_5fspecifics_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_history_5fdelete_5fdirective_5fspecifics_2eproto_once_,
                 &protobuf_AddDesc_history_5fdelete_5fdirective_5fspecifics_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_history_5fdelete_5fdirective_5fspecifics_2eproto {
  StaticDescriptorInitializer_history_5fdelete_5fdirective_5fspecifics_2eproto() {
    protobuf_AddDesc_history_5fdelete_5fdirective_5fspecifics_2eproto();
  }
} static_descriptor_initializer_history_5fdelete_5fdirective_5fspecifics_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int HistoryDeleteDirectiveSpecifics::kGlobalIdDirectiveFieldNumber;
const int HistoryDeleteDirectiveSpecifics::kTimeRangeDirectiveFieldNumber;
#endif  // !_MSC_VER

HistoryDeleteDirectiveSpecifics::HistoryDeleteDirectiveSpecifics()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void HistoryDeleteDirectiveSpecifics::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  global_id_directive_ = const_cast< ::sync_pb::GlobalIdDirective*>(
      ::sync_pb::GlobalIdDirective::internal_default_instance());
#else
  global_id_directive_ = const_cast< ::sync_pb::GlobalIdDirective*>(&::sync_pb::GlobalIdDirective::default_instance());
#endif
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  time_range_directive_ = const_cast< ::sync_pb::TimeRangeDirective*>(
      ::sync_pb::TimeRangeDirective::internal_default_instance());
#else
  time_range_directive_ = const_cast< ::sync_pb::TimeRangeDirective*>(&::sync_pb::TimeRangeDirective::default_instance());
#endif
}

HistoryDeleteDirectiveSpecifics::HistoryDeleteDirectiveSpecifics(const HistoryDeleteDirectiveSpecifics& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void HistoryDeleteDirectiveSpecifics::SharedCtor() {
  _cached_size_ = 0;
  global_id_directive_ = NULL;
  time_range_directive_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

HistoryDeleteDirectiveSpecifics::~HistoryDeleteDirectiveSpecifics() {
  SharedDtor();
}

void HistoryDeleteDirectiveSpecifics::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete global_id_directive_;
    delete time_range_directive_;
  }
}

void HistoryDeleteDirectiveSpecifics::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const HistoryDeleteDirectiveSpecifics& HistoryDeleteDirectiveSpecifics::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_history_5fdelete_5fdirective_5fspecifics_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_history_5fdelete_5fdirective_5fspecifics_2eproto();
#endif
  return *default_instance_;
}

HistoryDeleteDirectiveSpecifics* HistoryDeleteDirectiveSpecifics::default_instance_ = NULL;

HistoryDeleteDirectiveSpecifics* HistoryDeleteDirectiveSpecifics::New() const {
  return new HistoryDeleteDirectiveSpecifics;
}

void HistoryDeleteDirectiveSpecifics::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_global_id_directive()) {
      if (global_id_directive_ != NULL) global_id_directive_->::sync_pb::GlobalIdDirective::Clear();
    }
    if (has_time_range_directive()) {
      if (time_range_directive_ != NULL) time_range_directive_->::sync_pb::TimeRangeDirective::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool HistoryDeleteDirectiveSpecifics::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .sync_pb.GlobalIdDirective global_id_directive = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_global_id_directive()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_time_range_directive;
        break;
      }

      // optional .sync_pb.TimeRangeDirective time_range_directive = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_time_range_directive:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_time_range_directive()));
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

void HistoryDeleteDirectiveSpecifics::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional .sync_pb.GlobalIdDirective global_id_directive = 1;
  if (has_global_id_directive()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->global_id_directive(), output);
  }

  // optional .sync_pb.TimeRangeDirective time_range_directive = 2;
  if (has_time_range_directive()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, this->time_range_directive(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormatLite::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

int HistoryDeleteDirectiveSpecifics::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .sync_pb.GlobalIdDirective global_id_directive = 1;
    if (has_global_id_directive()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->global_id_directive());
    }

    // optional .sync_pb.TimeRangeDirective time_range_directive = 2;
    if (has_time_range_directive()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->time_range_directive());
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

void HistoryDeleteDirectiveSpecifics::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const HistoryDeleteDirectiveSpecifics*>(&from));
}

void HistoryDeleteDirectiveSpecifics::MergeFrom(const HistoryDeleteDirectiveSpecifics& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_global_id_directive()) {
      mutable_global_id_directive()->::sync_pb::GlobalIdDirective::MergeFrom(from.global_id_directive());
    }
    if (from.has_time_range_directive()) {
      mutable_time_range_directive()->::sync_pb::TimeRangeDirective::MergeFrom(from.time_range_directive());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void HistoryDeleteDirectiveSpecifics::CopyFrom(const HistoryDeleteDirectiveSpecifics& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HistoryDeleteDirectiveSpecifics::IsInitialized() const {

  return true;
}

void HistoryDeleteDirectiveSpecifics::Swap(HistoryDeleteDirectiveSpecifics* other) {
  if (other != this) {
    std::swap(global_id_directive_, other->global_id_directive_);
    std::swap(time_range_directive_, other->time_range_directive_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string HistoryDeleteDirectiveSpecifics::GetTypeName() const {
  return "sync_pb.HistoryDeleteDirectiveSpecifics";
}


// ===================================================================

#ifndef _MSC_VER
const int GlobalIdDirective::kGlobalIdFieldNumber;
const int GlobalIdDirective::kStartTimeUsecFieldNumber;
const int GlobalIdDirective::kEndTimeUsecFieldNumber;
#endif  // !_MSC_VER

GlobalIdDirective::GlobalIdDirective()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void GlobalIdDirective::InitAsDefaultInstance() {
}

GlobalIdDirective::GlobalIdDirective(const GlobalIdDirective& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void GlobalIdDirective::SharedCtor() {
  _cached_size_ = 0;
  start_time_usec_ = GOOGLE_LONGLONG(0);
  end_time_usec_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GlobalIdDirective::~GlobalIdDirective() {
  SharedDtor();
}

void GlobalIdDirective::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void GlobalIdDirective::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const GlobalIdDirective& GlobalIdDirective::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_history_5fdelete_5fdirective_5fspecifics_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_history_5fdelete_5fdirective_5fspecifics_2eproto();
#endif
  return *default_instance_;
}

GlobalIdDirective* GlobalIdDirective::default_instance_ = NULL;

GlobalIdDirective* GlobalIdDirective::New() const {
  return new GlobalIdDirective;
}

void GlobalIdDirective::Clear() {
  if (_has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    start_time_usec_ = GOOGLE_LONGLONG(0);
    end_time_usec_ = GOOGLE_LONGLONG(0);
  }
  global_id_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool GlobalIdDirective::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated int64 global_id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_global_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 1, 8, input, this->mutable_global_id())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, this->mutable_global_id())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(8)) goto parse_global_id;
        if (input->ExpectTag(16)) goto parse_start_time_usec;
        break;
      }

      // optional int64 start_time_usec = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_start_time_usec:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &start_time_usec_)));
          set_has_start_time_usec();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_end_time_usec;
        break;
      }

      // optional int64 end_time_usec = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_end_time_usec:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &end_time_usec_)));
          set_has_end_time_usec();
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

void GlobalIdDirective::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated int64 global_id = 1;
  for (int i = 0; i < this->global_id_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(
      1, this->global_id(i), output);
  }

  // optional int64 start_time_usec = 2;
  if (has_start_time_usec()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->start_time_usec(), output);
  }

  // optional int64 end_time_usec = 3;
  if (has_end_time_usec()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->end_time_usec(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormatLite::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

int GlobalIdDirective::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    // optional int64 start_time_usec = 2;
    if (has_start_time_usec()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->start_time_usec());
    }

    // optional int64 end_time_usec = 3;
    if (has_end_time_usec()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->end_time_usec());
    }

  }
  // repeated int64 global_id = 1;
  {
    int data_size = 0;
    for (int i = 0; i < this->global_id_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int64Size(this->global_id(i));
    }
    total_size += 1 * this->global_id_size() + data_size;
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

void GlobalIdDirective::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const GlobalIdDirective*>(&from));
}

void GlobalIdDirective::MergeFrom(const GlobalIdDirective& from) {
  GOOGLE_CHECK_NE(&from, this);
  global_id_.MergeFrom(from.global_id_);
  if (from._has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    if (from.has_start_time_usec()) {
      set_start_time_usec(from.start_time_usec());
    }
    if (from.has_end_time_usec()) {
      set_end_time_usec(from.end_time_usec());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void GlobalIdDirective::CopyFrom(const GlobalIdDirective& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GlobalIdDirective::IsInitialized() const {

  return true;
}

void GlobalIdDirective::Swap(GlobalIdDirective* other) {
  if (other != this) {
    global_id_.Swap(&other->global_id_);
    std::swap(start_time_usec_, other->start_time_usec_);
    std::swap(end_time_usec_, other->end_time_usec_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string GlobalIdDirective::GetTypeName() const {
  return "sync_pb.GlobalIdDirective";
}


// ===================================================================

#ifndef _MSC_VER
const int TimeRangeDirective::kStartTimeUsecFieldNumber;
const int TimeRangeDirective::kEndTimeUsecFieldNumber;
#endif  // !_MSC_VER

TimeRangeDirective::TimeRangeDirective()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void TimeRangeDirective::InitAsDefaultInstance() {
}

TimeRangeDirective::TimeRangeDirective(const TimeRangeDirective& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void TimeRangeDirective::SharedCtor() {
  _cached_size_ = 0;
  start_time_usec_ = GOOGLE_LONGLONG(0);
  end_time_usec_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TimeRangeDirective::~TimeRangeDirective() {
  SharedDtor();
}

void TimeRangeDirective::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void TimeRangeDirective::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const TimeRangeDirective& TimeRangeDirective::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_history_5fdelete_5fdirective_5fspecifics_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_history_5fdelete_5fdirective_5fspecifics_2eproto();
#endif
  return *default_instance_;
}

TimeRangeDirective* TimeRangeDirective::default_instance_ = NULL;

TimeRangeDirective* TimeRangeDirective::New() const {
  return new TimeRangeDirective;
}

void TimeRangeDirective::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    start_time_usec_ = GOOGLE_LONGLONG(0);
    end_time_usec_ = GOOGLE_LONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool TimeRangeDirective::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 start_time_usec = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &start_time_usec_)));
          set_has_start_time_usec();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_end_time_usec;
        break;
      }

      // optional int64 end_time_usec = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_end_time_usec:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &end_time_usec_)));
          set_has_end_time_usec();
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

void TimeRangeDirective::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int64 start_time_usec = 1;
  if (has_start_time_usec()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->start_time_usec(), output);
  }

  // optional int64 end_time_usec = 2;
  if (has_end_time_usec()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->end_time_usec(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormatLite::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

int TimeRangeDirective::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int64 start_time_usec = 1;
    if (has_start_time_usec()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->start_time_usec());
    }

    // optional int64 end_time_usec = 2;
    if (has_end_time_usec()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->end_time_usec());
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

void TimeRangeDirective::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const TimeRangeDirective*>(&from));
}

void TimeRangeDirective::MergeFrom(const TimeRangeDirective& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_start_time_usec()) {
      set_start_time_usec(from.start_time_usec());
    }
    if (from.has_end_time_usec()) {
      set_end_time_usec(from.end_time_usec());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void TimeRangeDirective::CopyFrom(const TimeRangeDirective& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TimeRangeDirective::IsInitialized() const {

  return true;
}

void TimeRangeDirective::Swap(TimeRangeDirective* other) {
  if (other != this) {
    std::swap(start_time_usec_, other->start_time_usec_);
    std::swap(end_time_usec_, other->end_time_usec_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string TimeRangeDirective::GetTypeName() const {
  return "sync_pb.TimeRangeDirective";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)