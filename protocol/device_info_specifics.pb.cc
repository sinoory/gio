// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: device_info_specifics.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "device_info_specifics.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {

void protobuf_ShutdownFile_device_5finfo_5fspecifics_2eproto() {
  delete DeviceInfoSpecifics::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_device_5finfo_5fspecifics_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_device_5finfo_5fspecifics_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sync_pb::protobuf_AddDesc_sync_5fenums_2eproto();
  DeviceInfoSpecifics::default_instance_ = new DeviceInfoSpecifics();
  DeviceInfoSpecifics::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_device_5finfo_5fspecifics_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_device_5finfo_5fspecifics_2eproto_once_);
void protobuf_AddDesc_device_5finfo_5fspecifics_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_device_5finfo_5fspecifics_2eproto_once_,
                 &protobuf_AddDesc_device_5finfo_5fspecifics_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_device_5finfo_5fspecifics_2eproto {
  StaticDescriptorInitializer_device_5finfo_5fspecifics_2eproto() {
    protobuf_AddDesc_device_5finfo_5fspecifics_2eproto();
  }
} static_descriptor_initializer_device_5finfo_5fspecifics_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int DeviceInfoSpecifics::kCacheGuidFieldNumber;
const int DeviceInfoSpecifics::kClientNameFieldNumber;
const int DeviceInfoSpecifics::kDeviceTypeFieldNumber;
const int DeviceInfoSpecifics::kSyncUserAgentFieldNumber;
const int DeviceInfoSpecifics::kChromeVersionFieldNumber;
#endif  // !_MSC_VER

DeviceInfoSpecifics::DeviceInfoSpecifics()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void DeviceInfoSpecifics::InitAsDefaultInstance() {
}

DeviceInfoSpecifics::DeviceInfoSpecifics(const DeviceInfoSpecifics& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void DeviceInfoSpecifics::SharedCtor() {
  _cached_size_ = 0;
  cache_guid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  client_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  device_type_ = 1;
  sync_user_agent_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  chrome_version_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DeviceInfoSpecifics::~DeviceInfoSpecifics() {
  SharedDtor();
}

void DeviceInfoSpecifics::SharedDtor() {
  if (cache_guid_ != &::google::protobuf::internal::GetEmptyString()) {
    delete cache_guid_;
  }
  if (client_name_ != &::google::protobuf::internal::GetEmptyString()) {
    delete client_name_;
  }
  if (sync_user_agent_ != &::google::protobuf::internal::GetEmptyString()) {
    delete sync_user_agent_;
  }
  if (chrome_version_ != &::google::protobuf::internal::GetEmptyString()) {
    delete chrome_version_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void DeviceInfoSpecifics::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const DeviceInfoSpecifics& DeviceInfoSpecifics::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_device_5finfo_5fspecifics_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_device_5finfo_5fspecifics_2eproto();
#endif
  return *default_instance_;
}

DeviceInfoSpecifics* DeviceInfoSpecifics::default_instance_ = NULL;

DeviceInfoSpecifics* DeviceInfoSpecifics::New() const {
  return new DeviceInfoSpecifics;
}

void DeviceInfoSpecifics::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_cache_guid()) {
      if (cache_guid_ != &::google::protobuf::internal::GetEmptyString()) {
        cache_guid_->clear();
      }
    }
    if (has_client_name()) {
      if (client_name_ != &::google::protobuf::internal::GetEmptyString()) {
        client_name_->clear();
      }
    }
    device_type_ = 1;
    if (has_sync_user_agent()) {
      if (sync_user_agent_ != &::google::protobuf::internal::GetEmptyString()) {
        sync_user_agent_->clear();
      }
    }
    if (has_chrome_version()) {
      if (chrome_version_ != &::google::protobuf::internal::GetEmptyString()) {
        chrome_version_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool DeviceInfoSpecifics::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string cache_guid = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_cache_guid()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_client_name;
        break;
      }

      // optional string client_name = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_client_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_client_name()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_device_type;
        break;
      }

      // optional .sync_pb.SyncEnums.DeviceType device_type = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_device_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::sync_pb::SyncEnums_DeviceType_IsValid(value)) {
            set_device_type(static_cast< ::sync_pb::SyncEnums_DeviceType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(3, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_sync_user_agent;
        break;
      }

      // optional string sync_user_agent = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_sync_user_agent:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_sync_user_agent()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_chrome_version;
        break;
      }

      // optional string chrome_version = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_chrome_version:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_chrome_version()));
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

void DeviceInfoSpecifics::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string cache_guid = 1;
  if (has_cache_guid()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->cache_guid(), output);
  }

  // optional string client_name = 2;
  if (has_client_name()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->client_name(), output);
  }

  // optional .sync_pb.SyncEnums.DeviceType device_type = 3;
  if (has_device_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->device_type(), output);
  }

  // optional string sync_user_agent = 4;
  if (has_sync_user_agent()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->sync_user_agent(), output);
  }

  // optional string chrome_version = 5;
  if (has_chrome_version()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      5, this->chrome_version(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormatLite::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

int DeviceInfoSpecifics::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string cache_guid = 1;
    if (has_cache_guid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->cache_guid());
    }

    // optional string client_name = 2;
    if (has_client_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->client_name());
    }

    // optional .sync_pb.SyncEnums.DeviceType device_type = 3;
    if (has_device_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->device_type());
    }

    // optional string sync_user_agent = 4;
    if (has_sync_user_agent()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->sync_user_agent());
    }

    // optional string chrome_version = 5;
    if (has_chrome_version()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->chrome_version());
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

void DeviceInfoSpecifics::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const DeviceInfoSpecifics*>(&from));
}

void DeviceInfoSpecifics::MergeFrom(const DeviceInfoSpecifics& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_cache_guid()) {
      set_cache_guid(from.cache_guid());
    }
    if (from.has_client_name()) {
      set_client_name(from.client_name());
    }
    if (from.has_device_type()) {
      set_device_type(from.device_type());
    }
    if (from.has_sync_user_agent()) {
      set_sync_user_agent(from.sync_user_agent());
    }
    if (from.has_chrome_version()) {
      set_chrome_version(from.chrome_version());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void DeviceInfoSpecifics::CopyFrom(const DeviceInfoSpecifics& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DeviceInfoSpecifics::IsInitialized() const {

  return true;
}

void DeviceInfoSpecifics::Swap(DeviceInfoSpecifics* other) {
  if (other != this) {
    std::swap(cache_guid_, other->cache_guid_);
    std::swap(client_name_, other->client_name_);
    std::swap(device_type_, other->device_type_);
    std::swap(sync_user_agent_, other->sync_user_agent_);
    std::swap(chrome_version_, other->chrome_version_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string DeviceInfoSpecifics::GetTypeName() const {
  return "sync_pb.DeviceInfoSpecifics";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)
