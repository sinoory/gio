// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: synced_notification_app_info_specifics.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "synced_notification_app_info_specifics.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {

void protobuf_ShutdownFile_synced_5fnotification_5fapp_5finfo_5fspecifics_2eproto() {
  delete SyncedNotificationAppInfoSpecifics::default_instance_;
  delete SyncedNotificationAppInfo::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_synced_5fnotification_5fapp_5finfo_5fspecifics_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_synced_5fnotification_5fapp_5finfo_5fspecifics_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sync_pb::protobuf_AddDesc_synced_5fnotification_5frender_2eproto();
  SyncedNotificationAppInfoSpecifics::default_instance_ = new SyncedNotificationAppInfoSpecifics();
  SyncedNotificationAppInfo::default_instance_ = new SyncedNotificationAppInfo();
  SyncedNotificationAppInfoSpecifics::default_instance_->InitAsDefaultInstance();
  SyncedNotificationAppInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_synced_5fnotification_5fapp_5finfo_5fspecifics_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_synced_5fnotification_5fapp_5finfo_5fspecifics_2eproto_once_);
void protobuf_AddDesc_synced_5fnotification_5fapp_5finfo_5fspecifics_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_synced_5fnotification_5fapp_5finfo_5fspecifics_2eproto_once_,
                 &protobuf_AddDesc_synced_5fnotification_5fapp_5finfo_5fspecifics_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_synced_5fnotification_5fapp_5finfo_5fspecifics_2eproto {
  StaticDescriptorInitializer_synced_5fnotification_5fapp_5finfo_5fspecifics_2eproto() {
    protobuf_AddDesc_synced_5fnotification_5fapp_5finfo_5fspecifics_2eproto();
  }
} static_descriptor_initializer_synced_5fnotification_5fapp_5finfo_5fspecifics_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int SyncedNotificationAppInfoSpecifics::kSyncedNotificationAppInfoFieldNumber;
#endif  // !_MSC_VER

SyncedNotificationAppInfoSpecifics::SyncedNotificationAppInfoSpecifics()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void SyncedNotificationAppInfoSpecifics::InitAsDefaultInstance() {
}

SyncedNotificationAppInfoSpecifics::SyncedNotificationAppInfoSpecifics(const SyncedNotificationAppInfoSpecifics& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void SyncedNotificationAppInfoSpecifics::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SyncedNotificationAppInfoSpecifics::~SyncedNotificationAppInfoSpecifics() {
  SharedDtor();
}

void SyncedNotificationAppInfoSpecifics::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void SyncedNotificationAppInfoSpecifics::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const SyncedNotificationAppInfoSpecifics& SyncedNotificationAppInfoSpecifics::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_synced_5fnotification_5fapp_5finfo_5fspecifics_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_synced_5fnotification_5fapp_5finfo_5fspecifics_2eproto();
#endif
  return *default_instance_;
}

SyncedNotificationAppInfoSpecifics* SyncedNotificationAppInfoSpecifics::default_instance_ = NULL;

SyncedNotificationAppInfoSpecifics* SyncedNotificationAppInfoSpecifics::New() const {
  return new SyncedNotificationAppInfoSpecifics;
}

void SyncedNotificationAppInfoSpecifics::Clear() {
  synced_notification_app_info_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool SyncedNotificationAppInfoSpecifics::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .sync_pb.SyncedNotificationAppInfo synced_notification_app_info = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_synced_notification_app_info:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_synced_notification_app_info()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_synced_notification_app_info;
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

void SyncedNotificationAppInfoSpecifics::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .sync_pb.SyncedNotificationAppInfo synced_notification_app_info = 1;
  for (int i = 0; i < this->synced_notification_app_info_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->synced_notification_app_info(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormatLite::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

int SyncedNotificationAppInfoSpecifics::ByteSize() const {
  int total_size = 0;

  // repeated .sync_pb.SyncedNotificationAppInfo synced_notification_app_info = 1;
  total_size += 1 * this->synced_notification_app_info_size();
  for (int i = 0; i < this->synced_notification_app_info_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->synced_notification_app_info(i));
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

void SyncedNotificationAppInfoSpecifics::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SyncedNotificationAppInfoSpecifics*>(&from));
}

void SyncedNotificationAppInfoSpecifics::MergeFrom(const SyncedNotificationAppInfoSpecifics& from) {
  GOOGLE_CHECK_NE(&from, this);
  synced_notification_app_info_.MergeFrom(from.synced_notification_app_info_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void SyncedNotificationAppInfoSpecifics::CopyFrom(const SyncedNotificationAppInfoSpecifics& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SyncedNotificationAppInfoSpecifics::IsInitialized() const {

  return true;
}

void SyncedNotificationAppInfoSpecifics::Swap(SyncedNotificationAppInfoSpecifics* other) {
  if (other != this) {
    synced_notification_app_info_.Swap(&other->synced_notification_app_info_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string SyncedNotificationAppInfoSpecifics::GetTypeName() const {
  return "sync_pb.SyncedNotificationAppInfoSpecifics";
}


// ===================================================================

#ifndef _MSC_VER
const int SyncedNotificationAppInfo::kAppIdFieldNumber;
const int SyncedNotificationAppInfo::kSettingsDisplayNameFieldNumber;
const int SyncedNotificationAppInfo::kIconFieldNumber;
#endif  // !_MSC_VER

SyncedNotificationAppInfo::SyncedNotificationAppInfo()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void SyncedNotificationAppInfo::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  icon_ = const_cast< ::sync_pb::SyncedNotificationImage*>(
      ::sync_pb::SyncedNotificationImage::internal_default_instance());
#else
  icon_ = const_cast< ::sync_pb::SyncedNotificationImage*>(&::sync_pb::SyncedNotificationImage::default_instance());
#endif
}

SyncedNotificationAppInfo::SyncedNotificationAppInfo(const SyncedNotificationAppInfo& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void SyncedNotificationAppInfo::SharedCtor() {
  _cached_size_ = 0;
  settings_display_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  icon_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SyncedNotificationAppInfo::~SyncedNotificationAppInfo() {
  SharedDtor();
}

void SyncedNotificationAppInfo::SharedDtor() {
  if (settings_display_name_ != &::google::protobuf::internal::GetEmptyString()) {
    delete settings_display_name_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete icon_;
  }
}

void SyncedNotificationAppInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const SyncedNotificationAppInfo& SyncedNotificationAppInfo::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_synced_5fnotification_5fapp_5finfo_5fspecifics_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_synced_5fnotification_5fapp_5finfo_5fspecifics_2eproto();
#endif
  return *default_instance_;
}

SyncedNotificationAppInfo* SyncedNotificationAppInfo::default_instance_ = NULL;

SyncedNotificationAppInfo* SyncedNotificationAppInfo::New() const {
  return new SyncedNotificationAppInfo;
}

void SyncedNotificationAppInfo::Clear() {
  if (_has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    if (has_settings_display_name()) {
      if (settings_display_name_ != &::google::protobuf::internal::GetEmptyString()) {
        settings_display_name_->clear();
      }
    }
    if (has_icon()) {
      if (icon_ != NULL) icon_->::sync_pb::SyncedNotificationImage::Clear();
    }
  }
  app_id_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool SyncedNotificationAppInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated string app_id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_app_id:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_app_id()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_app_id;
        if (input->ExpectTag(18)) goto parse_settings_display_name;
        break;
      }

      // optional string settings_display_name = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_settings_display_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_settings_display_name()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_icon;
        break;
      }

      // optional .sync_pb.SyncedNotificationImage icon = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_icon:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_icon()));
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

void SyncedNotificationAppInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated string app_id = 1;
  for (int i = 0; i < this->app_id_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->app_id(i), output);
  }

  // optional string settings_display_name = 2;
  if (has_settings_display_name()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->settings_display_name(), output);
  }

  // optional .sync_pb.SyncedNotificationImage icon = 3;
  if (has_icon()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, this->icon(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormatLite::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

int SyncedNotificationAppInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    // optional string settings_display_name = 2;
    if (has_settings_display_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->settings_display_name());
    }

    // optional .sync_pb.SyncedNotificationImage icon = 3;
    if (has_icon()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->icon());
    }

  }
  // repeated string app_id = 1;
  total_size += 1 * this->app_id_size();
  for (int i = 0; i < this->app_id_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->app_id(i));
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

void SyncedNotificationAppInfo::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SyncedNotificationAppInfo*>(&from));
}

void SyncedNotificationAppInfo::MergeFrom(const SyncedNotificationAppInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  app_id_.MergeFrom(from.app_id_);
  if (from._has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    if (from.has_settings_display_name()) {
      set_settings_display_name(from.settings_display_name());
    }
    if (from.has_icon()) {
      mutable_icon()->::sync_pb::SyncedNotificationImage::MergeFrom(from.icon());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void SyncedNotificationAppInfo::CopyFrom(const SyncedNotificationAppInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SyncedNotificationAppInfo::IsInitialized() const {

  return true;
}

void SyncedNotificationAppInfo::Swap(SyncedNotificationAppInfo* other) {
  if (other != this) {
    app_id_.Swap(&other->app_id_);
    std::swap(settings_display_name_, other->settings_display_name_);
    std::swap(icon_, other->icon_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string SyncedNotificationAppInfo::GetTypeName() const {
  return "sync_pb.SyncedNotificationAppInfo";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)