// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: unique_position.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "unique_position.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {

void protobuf_ShutdownFile_unique_5fposition_2eproto() {
  delete UniquePosition::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_unique_5fposition_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_unique_5fposition_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  UniquePosition::default_instance_ = new UniquePosition();
  UniquePosition::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_unique_5fposition_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_unique_5fposition_2eproto_once_);
void protobuf_AddDesc_unique_5fposition_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_unique_5fposition_2eproto_once_,
                 &protobuf_AddDesc_unique_5fposition_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_unique_5fposition_2eproto {
  StaticDescriptorInitializer_unique_5fposition_2eproto() {
    protobuf_AddDesc_unique_5fposition_2eproto();
  }
} static_descriptor_initializer_unique_5fposition_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int UniquePosition::kValueFieldNumber;
const int UniquePosition::kCompressedValueFieldNumber;
const int UniquePosition::kUncompressedLengthFieldNumber;
const int UniquePosition::kCustomCompressedV1FieldNumber;
#endif  // !_MSC_VER

UniquePosition::UniquePosition()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void UniquePosition::InitAsDefaultInstance() {
}

UniquePosition::UniquePosition(const UniquePosition& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void UniquePosition::SharedCtor() {
  _cached_size_ = 0;
  value_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  compressed_value_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  uncompressed_length_ = GOOGLE_ULONGLONG(0);
  custom_compressed_v1_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UniquePosition::~UniquePosition() {
  SharedDtor();
}

void UniquePosition::SharedDtor() {
  if (value_ != &::google::protobuf::internal::GetEmptyString()) {
    delete value_;
  }
  if (compressed_value_ != &::google::protobuf::internal::GetEmptyString()) {
    delete compressed_value_;
  }
  if (custom_compressed_v1_ != &::google::protobuf::internal::GetEmptyString()) {
    delete custom_compressed_v1_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void UniquePosition::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const UniquePosition& UniquePosition::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_unique_5fposition_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_unique_5fposition_2eproto();
#endif
  return *default_instance_;
}

UniquePosition* UniquePosition::default_instance_ = NULL;

UniquePosition* UniquePosition::New() const {
  return new UniquePosition;
}

void UniquePosition::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_value()) {
      if (value_ != &::google::protobuf::internal::GetEmptyString()) {
        value_->clear();
      }
    }
    if (has_compressed_value()) {
      if (compressed_value_ != &::google::protobuf::internal::GetEmptyString()) {
        compressed_value_->clear();
      }
    }
    uncompressed_length_ = GOOGLE_ULONGLONG(0);
    if (has_custom_compressed_v1()) {
      if (custom_compressed_v1_ != &::google::protobuf::internal::GetEmptyString()) {
        custom_compressed_v1_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool UniquePosition::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bytes value = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_value()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_compressed_value;
        break;
      }

      // optional bytes compressed_value = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_compressed_value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_compressed_value()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_uncompressed_length;
        break;
      }

      // optional uint64 uncompressed_length = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_uncompressed_length:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &uncompressed_length_)));
          set_has_uncompressed_length();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_custom_compressed_v1;
        break;
      }

      // optional bytes custom_compressed_v1 = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_custom_compressed_v1:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_custom_compressed_v1()));
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

void UniquePosition::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional bytes value = 1;
  if (has_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      1, this->value(), output);
  }

  // optional bytes compressed_value = 2;
  if (has_compressed_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      2, this->compressed_value(), output);
  }

  // optional uint64 uncompressed_length = 3;
  if (has_uncompressed_length()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->uncompressed_length(), output);
  }

  // optional bytes custom_compressed_v1 = 4;
  if (has_custom_compressed_v1()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      4, this->custom_compressed_v1(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormatLite::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

int UniquePosition::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional bytes value = 1;
    if (has_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->value());
    }

    // optional bytes compressed_value = 2;
    if (has_compressed_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->compressed_value());
    }

    // optional uint64 uncompressed_length = 3;
    if (has_uncompressed_length()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->uncompressed_length());
    }

    // optional bytes custom_compressed_v1 = 4;
    if (has_custom_compressed_v1()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->custom_compressed_v1());
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

void UniquePosition::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const UniquePosition*>(&from));
}

void UniquePosition::MergeFrom(const UniquePosition& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_value()) {
      set_value(from.value());
    }
    if (from.has_compressed_value()) {
      set_compressed_value(from.compressed_value());
    }
    if (from.has_uncompressed_length()) {
      set_uncompressed_length(from.uncompressed_length());
    }
    if (from.has_custom_compressed_v1()) {
      set_custom_compressed_v1(from.custom_compressed_v1());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void UniquePosition::CopyFrom(const UniquePosition& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UniquePosition::IsInitialized() const {

  return true;
}

void UniquePosition::Swap(UniquePosition* other) {
  if (other != this) {
    std::swap(value_, other->value_);
    std::swap(compressed_value_, other->compressed_value_);
    std::swap(uncompressed_length_, other->uncompressed_length_);
    std::swap(custom_compressed_v1_, other->custom_compressed_v1_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string UniquePosition::GetTypeName() const {
  return "sync_pb.UniquePosition";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)
