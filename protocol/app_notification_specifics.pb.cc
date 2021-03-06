// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: app_notification_specifics.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "app_notification_specifics.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {

void protobuf_ShutdownFile_app_5fnotification_5fspecifics_2eproto() {
  delete AppNotification::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_app_5fnotification_5fspecifics_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_app_5fnotification_5fspecifics_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  AppNotification::default_instance_ = new AppNotification();
  AppNotification::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_app_5fnotification_5fspecifics_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_app_5fnotification_5fspecifics_2eproto_once_);
void protobuf_AddDesc_app_5fnotification_5fspecifics_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_app_5fnotification_5fspecifics_2eproto_once_,
                 &protobuf_AddDesc_app_5fnotification_5fspecifics_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_app_5fnotification_5fspecifics_2eproto {
  StaticDescriptorInitializer_app_5fnotification_5fspecifics_2eproto() {
    protobuf_AddDesc_app_5fnotification_5fspecifics_2eproto();
  }
} static_descriptor_initializer_app_5fnotification_5fspecifics_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int AppNotification::kGuidFieldNumber;
const int AppNotification::kAppIdFieldNumber;
const int AppNotification::kCreationTimestampMsFieldNumber;
const int AppNotification::kTitleFieldNumber;
const int AppNotification::kBodyTextFieldNumber;
const int AppNotification::kLinkUrlFieldNumber;
const int AppNotification::kLinkTextFieldNumber;
#endif  // !_MSC_VER

AppNotification::AppNotification()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void AppNotification::InitAsDefaultInstance() {
}

AppNotification::AppNotification(const AppNotification& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void AppNotification::SharedCtor() {
  _cached_size_ = 0;
  guid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  app_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  creation_timestamp_ms_ = GOOGLE_LONGLONG(0);
  title_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  body_text_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  link_url_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  link_text_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AppNotification::~AppNotification() {
  SharedDtor();
}

void AppNotification::SharedDtor() {
  if (guid_ != &::google::protobuf::internal::GetEmptyString()) {
    delete guid_;
  }
  if (app_id_ != &::google::protobuf::internal::GetEmptyString()) {
    delete app_id_;
  }
  if (title_ != &::google::protobuf::internal::GetEmptyString()) {
    delete title_;
  }
  if (body_text_ != &::google::protobuf::internal::GetEmptyString()) {
    delete body_text_;
  }
  if (link_url_ != &::google::protobuf::internal::GetEmptyString()) {
    delete link_url_;
  }
  if (link_text_ != &::google::protobuf::internal::GetEmptyString()) {
    delete link_text_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void AppNotification::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const AppNotification& AppNotification::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_app_5fnotification_5fspecifics_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_app_5fnotification_5fspecifics_2eproto();
#endif
  return *default_instance_;
}

AppNotification* AppNotification::default_instance_ = NULL;

AppNotification* AppNotification::New() const {
  return new AppNotification;
}

void AppNotification::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_guid()) {
      if (guid_ != &::google::protobuf::internal::GetEmptyString()) {
        guid_->clear();
      }
    }
    if (has_app_id()) {
      if (app_id_ != &::google::protobuf::internal::GetEmptyString()) {
        app_id_->clear();
      }
    }
    creation_timestamp_ms_ = GOOGLE_LONGLONG(0);
    if (has_title()) {
      if (title_ != &::google::protobuf::internal::GetEmptyString()) {
        title_->clear();
      }
    }
    if (has_body_text()) {
      if (body_text_ != &::google::protobuf::internal::GetEmptyString()) {
        body_text_->clear();
      }
    }
    if (has_link_url()) {
      if (link_url_ != &::google::protobuf::internal::GetEmptyString()) {
        link_url_->clear();
      }
    }
    if (has_link_text()) {
      if (link_text_ != &::google::protobuf::internal::GetEmptyString()) {
        link_text_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool AppNotification::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string guid = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_guid()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_app_id;
        break;
      }

      // optional string app_id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_app_id:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_app_id()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_creation_timestamp_ms;
        break;
      }

      // optional int64 creation_timestamp_ms = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_creation_timestamp_ms:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &creation_timestamp_ms_)));
          set_has_creation_timestamp_ms();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_title;
        break;
      }

      // optional string title = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_title:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_title()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_body_text;
        break;
      }

      // optional string body_text = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_body_text:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_body_text()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_link_url;
        break;
      }

      // optional string link_url = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_link_url:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_link_url()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(58)) goto parse_link_text;
        break;
      }

      // optional string link_text = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_link_text:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_link_text()));
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

void AppNotification::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string guid = 1;
  if (has_guid()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->guid(), output);
  }

  // optional string app_id = 2;
  if (has_app_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->app_id(), output);
  }

  // optional int64 creation_timestamp_ms = 3;
  if (has_creation_timestamp_ms()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->creation_timestamp_ms(), output);
  }

  // optional string title = 4;
  if (has_title()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->title(), output);
  }

  // optional string body_text = 5;
  if (has_body_text()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      5, this->body_text(), output);
  }

  // optional string link_url = 6;
  if (has_link_url()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      6, this->link_url(), output);
  }

  // optional string link_text = 7;
  if (has_link_text()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      7, this->link_text(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormatLite::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

int AppNotification::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string guid = 1;
    if (has_guid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->guid());
    }

    // optional string app_id = 2;
    if (has_app_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->app_id());
    }

    // optional int64 creation_timestamp_ms = 3;
    if (has_creation_timestamp_ms()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->creation_timestamp_ms());
    }

    // optional string title = 4;
    if (has_title()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->title());
    }

    // optional string body_text = 5;
    if (has_body_text()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->body_text());
    }

    // optional string link_url = 6;
    if (has_link_url()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->link_url());
    }

    // optional string link_text = 7;
    if (has_link_text()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->link_text());
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

void AppNotification::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const AppNotification*>(&from));
}

void AppNotification::MergeFrom(const AppNotification& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_guid()) {
      set_guid(from.guid());
    }
    if (from.has_app_id()) {
      set_app_id(from.app_id());
    }
    if (from.has_creation_timestamp_ms()) {
      set_creation_timestamp_ms(from.creation_timestamp_ms());
    }
    if (from.has_title()) {
      set_title(from.title());
    }
    if (from.has_body_text()) {
      set_body_text(from.body_text());
    }
    if (from.has_link_url()) {
      set_link_url(from.link_url());
    }
    if (from.has_link_text()) {
      set_link_text(from.link_text());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void AppNotification::CopyFrom(const AppNotification& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AppNotification::IsInitialized() const {

  return true;
}

void AppNotification::Swap(AppNotification* other) {
  if (other != this) {
    std::swap(guid_, other->guid_);
    std::swap(app_id_, other->app_id_);
    std::swap(creation_timestamp_ms_, other->creation_timestamp_ms_);
    std::swap(title_, other->title_);
    std::swap(body_text_, other->body_text_);
    std::swap(link_url_, other->link_url_);
    std::swap(link_text_, other->link_text_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string AppNotification::GetTypeName() const {
  return "sync_pb.AppNotification";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)
