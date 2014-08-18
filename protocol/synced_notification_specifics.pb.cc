// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: synced_notification_specifics.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "synced_notification_specifics.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {

void protobuf_ShutdownFile_synced_5fnotification_5fspecifics_2eproto() {
  delete SyncedNotificationSpecifics::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_synced_5fnotification_5fspecifics_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_synced_5fnotification_5fspecifics_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sync_pb::protobuf_AddDesc_synced_5fnotification_5fdata_2eproto();
  ::sync_pb::protobuf_AddDesc_synced_5fnotification_5frender_2eproto();
  SyncedNotificationSpecifics::default_instance_ = new SyncedNotificationSpecifics();
  SyncedNotificationSpecifics::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_synced_5fnotification_5fspecifics_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_synced_5fnotification_5fspecifics_2eproto_once_);
void protobuf_AddDesc_synced_5fnotification_5fspecifics_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_synced_5fnotification_5fspecifics_2eproto_once_,
                 &protobuf_AddDesc_synced_5fnotification_5fspecifics_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_synced_5fnotification_5fspecifics_2eproto {
  StaticDescriptorInitializer_synced_5fnotification_5fspecifics_2eproto() {
    protobuf_AddDesc_synced_5fnotification_5fspecifics_2eproto();
  }
} static_descriptor_initializer_synced_5fnotification_5fspecifics_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int SyncedNotificationSpecifics::kCoalescedNotificationFieldNumber;
#endif  // !_MSC_VER

SyncedNotificationSpecifics::SyncedNotificationSpecifics()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void SyncedNotificationSpecifics::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  coalesced_notification_ = const_cast< ::sync_pb::CoalescedSyncedNotification*>(
      ::sync_pb::CoalescedSyncedNotification::internal_default_instance());
#else
  coalesced_notification_ = const_cast< ::sync_pb::CoalescedSyncedNotification*>(&::sync_pb::CoalescedSyncedNotification::default_instance());
#endif
}

SyncedNotificationSpecifics::SyncedNotificationSpecifics(const SyncedNotificationSpecifics& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void SyncedNotificationSpecifics::SharedCtor() {
  _cached_size_ = 0;
  coalesced_notification_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SyncedNotificationSpecifics::~SyncedNotificationSpecifics() {
  SharedDtor();
}

void SyncedNotificationSpecifics::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete coalesced_notification_;
  }
}

void SyncedNotificationSpecifics::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const SyncedNotificationSpecifics& SyncedNotificationSpecifics::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_synced_5fnotification_5fspecifics_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_synced_5fnotification_5fspecifics_2eproto();
#endif
  return *default_instance_;
}

SyncedNotificationSpecifics* SyncedNotificationSpecifics::default_instance_ = NULL;

SyncedNotificationSpecifics* SyncedNotificationSpecifics::New() const {
  return new SyncedNotificationSpecifics;
}

void SyncedNotificationSpecifics::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_coalesced_notification()) {
      if (coalesced_notification_ != NULL) coalesced_notification_->::sync_pb::CoalescedSyncedNotification::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool SyncedNotificationSpecifics::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .sync_pb.CoalescedSyncedNotification coalesced_notification = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_coalesced_notification()));
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

void SyncedNotificationSpecifics::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional .sync_pb.CoalescedSyncedNotification coalesced_notification = 1;
  if (has_coalesced_notification()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->coalesced_notification(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormatLite::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

int SyncedNotificationSpecifics::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .sync_pb.CoalescedSyncedNotification coalesced_notification = 1;
    if (has_coalesced_notification()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->coalesced_notification());
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

void SyncedNotificationSpecifics::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SyncedNotificationSpecifics*>(&from));
}

void SyncedNotificationSpecifics::MergeFrom(const SyncedNotificationSpecifics& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_coalesced_notification()) {
      mutable_coalesced_notification()->::sync_pb::CoalescedSyncedNotification::MergeFrom(from.coalesced_notification());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void SyncedNotificationSpecifics::CopyFrom(const SyncedNotificationSpecifics& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SyncedNotificationSpecifics::IsInitialized() const {

  return true;
}

void SyncedNotificationSpecifics::Swap(SyncedNotificationSpecifics* other) {
  if (other != this) {
    std::swap(coalesced_notification_, other->coalesced_notification_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string SyncedNotificationSpecifics::GetTypeName() const {
  return "sync_pb.SyncedNotificationSpecifics";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)