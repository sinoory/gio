// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: app_specifics.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "app_specifics.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {

void protobuf_ShutdownFile_app_5fspecifics_2eproto() {
  delete AppNotificationSettings::default_instance_;
  delete AppSpecifics::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_app_5fspecifics_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_app_5fspecifics_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sync_pb::protobuf_AddDesc_extension_5fspecifics_2eproto();
  AppNotificationSettings::default_instance_ = new AppNotificationSettings();
  AppSpecifics::default_instance_ = new AppSpecifics();
  AppNotificationSettings::default_instance_->InitAsDefaultInstance();
  AppSpecifics::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_app_5fspecifics_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_app_5fspecifics_2eproto_once_);
void protobuf_AddDesc_app_5fspecifics_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_app_5fspecifics_2eproto_once_,
                 &protobuf_AddDesc_app_5fspecifics_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_app_5fspecifics_2eproto {
  StaticDescriptorInitializer_app_5fspecifics_2eproto() {
    protobuf_AddDesc_app_5fspecifics_2eproto();
  }
} static_descriptor_initializer_app_5fspecifics_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int AppNotificationSettings::kInitialSetupDoneFieldNumber;
const int AppNotificationSettings::kDisabledFieldNumber;
const int AppNotificationSettings::kOauthClientIdFieldNumber;
#endif  // !_MSC_VER

AppNotificationSettings::AppNotificationSettings()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void AppNotificationSettings::InitAsDefaultInstance() {
}

AppNotificationSettings::AppNotificationSettings(const AppNotificationSettings& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void AppNotificationSettings::SharedCtor() {
  _cached_size_ = 0;
  initial_setup_done_ = false;
  disabled_ = false;
  oauth_client_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AppNotificationSettings::~AppNotificationSettings() {
  SharedDtor();
}

void AppNotificationSettings::SharedDtor() {
  if (oauth_client_id_ != &::google::protobuf::internal::GetEmptyString()) {
    delete oauth_client_id_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void AppNotificationSettings::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const AppNotificationSettings& AppNotificationSettings::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_app_5fspecifics_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_app_5fspecifics_2eproto();
#endif
  return *default_instance_;
}

AppNotificationSettings* AppNotificationSettings::default_instance_ = NULL;

AppNotificationSettings* AppNotificationSettings::New() const {
  return new AppNotificationSettings;
}

void AppNotificationSettings::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    initial_setup_done_ = false;
    disabled_ = false;
    if (has_oauth_client_id()) {
      if (oauth_client_id_ != &::google::protobuf::internal::GetEmptyString()) {
        oauth_client_id_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool AppNotificationSettings::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bool initial_setup_done = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &initial_setup_done_)));
          set_has_initial_setup_done();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_disabled;
        break;
      }

      // optional bool disabled = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_disabled:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &disabled_)));
          set_has_disabled();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_oauth_client_id;
        break;
      }

      // optional string oauth_client_id = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_oauth_client_id:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_oauth_client_id()));
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

void AppNotificationSettings::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional bool initial_setup_done = 1;
  if (has_initial_setup_done()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->initial_setup_done(), output);
  }

  // optional bool disabled = 2;
  if (has_disabled()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->disabled(), output);
  }

  // optional string oauth_client_id = 3;
  if (has_oauth_client_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->oauth_client_id(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormatLite::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

int AppNotificationSettings::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional bool initial_setup_done = 1;
    if (has_initial_setup_done()) {
      total_size += 1 + 1;
    }

    // optional bool disabled = 2;
    if (has_disabled()) {
      total_size += 1 + 1;
    }

    // optional string oauth_client_id = 3;
    if (has_oauth_client_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->oauth_client_id());
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

void AppNotificationSettings::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const AppNotificationSettings*>(&from));
}

void AppNotificationSettings::MergeFrom(const AppNotificationSettings& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_initial_setup_done()) {
      set_initial_setup_done(from.initial_setup_done());
    }
    if (from.has_disabled()) {
      set_disabled(from.disabled());
    }
    if (from.has_oauth_client_id()) {
      set_oauth_client_id(from.oauth_client_id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void AppNotificationSettings::CopyFrom(const AppNotificationSettings& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AppNotificationSettings::IsInitialized() const {

  return true;
}

void AppNotificationSettings::Swap(AppNotificationSettings* other) {
  if (other != this) {
    std::swap(initial_setup_done_, other->initial_setup_done_);
    std::swap(disabled_, other->disabled_);
    std::swap(oauth_client_id_, other->oauth_client_id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string AppNotificationSettings::GetTypeName() const {
  return "sync_pb.AppNotificationSettings";
}


// ===================================================================

bool AppSpecifics_LaunchType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const AppSpecifics_LaunchType AppSpecifics::PINNED;
const AppSpecifics_LaunchType AppSpecifics::REGULAR;
const AppSpecifics_LaunchType AppSpecifics::FULLSCREEN;
const AppSpecifics_LaunchType AppSpecifics::WINDOW;
const AppSpecifics_LaunchType AppSpecifics::LaunchType_MIN;
const AppSpecifics_LaunchType AppSpecifics::LaunchType_MAX;
const int AppSpecifics::LaunchType_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int AppSpecifics::kExtensionFieldNumber;
const int AppSpecifics::kNotificationSettingsFieldNumber;
const int AppSpecifics::kAppLaunchOrdinalFieldNumber;
const int AppSpecifics::kPageOrdinalFieldNumber;
const int AppSpecifics::kLaunchTypeFieldNumber;
#endif  // !_MSC_VER

AppSpecifics::AppSpecifics()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void AppSpecifics::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  extension_ = const_cast< ::sync_pb::ExtensionSpecifics*>(
      ::sync_pb::ExtensionSpecifics::internal_default_instance());
#else
  extension_ = const_cast< ::sync_pb::ExtensionSpecifics*>(&::sync_pb::ExtensionSpecifics::default_instance());
#endif
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  notification_settings_ = const_cast< ::sync_pb::AppNotificationSettings*>(
      ::sync_pb::AppNotificationSettings::internal_default_instance());
#else
  notification_settings_ = const_cast< ::sync_pb::AppNotificationSettings*>(&::sync_pb::AppNotificationSettings::default_instance());
#endif
}

AppSpecifics::AppSpecifics(const AppSpecifics& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void AppSpecifics::SharedCtor() {
  _cached_size_ = 0;
  extension_ = NULL;
  notification_settings_ = NULL;
  app_launch_ordinal_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  page_ordinal_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  launch_type_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AppSpecifics::~AppSpecifics() {
  SharedDtor();
}

void AppSpecifics::SharedDtor() {
  if (app_launch_ordinal_ != &::google::protobuf::internal::GetEmptyString()) {
    delete app_launch_ordinal_;
  }
  if (page_ordinal_ != &::google::protobuf::internal::GetEmptyString()) {
    delete page_ordinal_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete extension_;
    delete notification_settings_;
  }
}

void AppSpecifics::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const AppSpecifics& AppSpecifics::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_app_5fspecifics_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_app_5fspecifics_2eproto();
#endif
  return *default_instance_;
}

AppSpecifics* AppSpecifics::default_instance_ = NULL;

AppSpecifics* AppSpecifics::New() const {
  return new AppSpecifics;
}

void AppSpecifics::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_extension()) {
      if (extension_ != NULL) extension_->::sync_pb::ExtensionSpecifics::Clear();
    }
    if (has_notification_settings()) {
      if (notification_settings_ != NULL) notification_settings_->::sync_pb::AppNotificationSettings::Clear();
    }
    if (has_app_launch_ordinal()) {
      if (app_launch_ordinal_ != &::google::protobuf::internal::GetEmptyString()) {
        app_launch_ordinal_->clear();
      }
    }
    if (has_page_ordinal()) {
      if (page_ordinal_ != &::google::protobuf::internal::GetEmptyString()) {
        page_ordinal_->clear();
      }
    }
    launch_type_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool AppSpecifics::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .sync_pb.ExtensionSpecifics extension = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_extension()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_notification_settings;
        break;
      }

      // optional .sync_pb.AppNotificationSettings notification_settings = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_notification_settings:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_notification_settings()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_app_launch_ordinal;
        break;
      }

      // optional string app_launch_ordinal = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_app_launch_ordinal:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_app_launch_ordinal()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_page_ordinal;
        break;
      }

      // optional string page_ordinal = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_page_ordinal:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_page_ordinal()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_launch_type;
        break;
      }

      // optional .sync_pb.AppSpecifics.LaunchType launch_type = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_launch_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::sync_pb::AppSpecifics_LaunchType_IsValid(value)) {
            set_launch_type(static_cast< ::sync_pb::AppSpecifics_LaunchType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(5, value);
          }
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

void AppSpecifics::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional .sync_pb.ExtensionSpecifics extension = 1;
  if (has_extension()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->extension(), output);
  }

  // optional .sync_pb.AppNotificationSettings notification_settings = 2;
  if (has_notification_settings()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, this->notification_settings(), output);
  }

  // optional string app_launch_ordinal = 3;
  if (has_app_launch_ordinal()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->app_launch_ordinal(), output);
  }

  // optional string page_ordinal = 4;
  if (has_page_ordinal()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->page_ordinal(), output);
  }

  // optional .sync_pb.AppSpecifics.LaunchType launch_type = 5;
  if (has_launch_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      5, this->launch_type(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormatLite::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

int AppSpecifics::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .sync_pb.ExtensionSpecifics extension = 1;
    if (has_extension()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->extension());
    }

    // optional .sync_pb.AppNotificationSettings notification_settings = 2;
    if (has_notification_settings()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->notification_settings());
    }

    // optional string app_launch_ordinal = 3;
    if (has_app_launch_ordinal()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->app_launch_ordinal());
    }

    // optional string page_ordinal = 4;
    if (has_page_ordinal()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->page_ordinal());
    }

    // optional .sync_pb.AppSpecifics.LaunchType launch_type = 5;
    if (has_launch_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->launch_type());
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

void AppSpecifics::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const AppSpecifics*>(&from));
}

void AppSpecifics::MergeFrom(const AppSpecifics& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_extension()) {
      mutable_extension()->::sync_pb::ExtensionSpecifics::MergeFrom(from.extension());
    }
    if (from.has_notification_settings()) {
      mutable_notification_settings()->::sync_pb::AppNotificationSettings::MergeFrom(from.notification_settings());
    }
    if (from.has_app_launch_ordinal()) {
      set_app_launch_ordinal(from.app_launch_ordinal());
    }
    if (from.has_page_ordinal()) {
      set_page_ordinal(from.page_ordinal());
    }
    if (from.has_launch_type()) {
      set_launch_type(from.launch_type());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void AppSpecifics::CopyFrom(const AppSpecifics& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AppSpecifics::IsInitialized() const {

  return true;
}

void AppSpecifics::Swap(AppSpecifics* other) {
  if (other != this) {
    std::swap(extension_, other->extension_);
    std::swap(notification_settings_, other->notification_settings_);
    std::swap(app_launch_ordinal_, other->app_launch_ordinal_);
    std::swap(page_ordinal_, other->page_ordinal_);
    std::swap(launch_type_, other->launch_type_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string AppSpecifics::GetTypeName() const {
  return "sync_pb.AppSpecifics";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)
