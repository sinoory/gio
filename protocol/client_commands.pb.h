// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: client_commands.proto

#ifndef PROTOBUF_client_5fcommands_2eproto__INCLUDED
#define PROTOBUF_client_5fcommands_2eproto__INCLUDED

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
void SYNC_EXPORT protobuf_AddDesc_client_5fcommands_2eproto();
void protobuf_AssignDesc_client_5fcommands_2eproto();
void protobuf_ShutdownFile_client_5fcommands_2eproto();

class ClientCommand;

// ===================================================================

class SYNC_EXPORT ClientCommand : public ::google::protobuf::MessageLite {
 public:
  ClientCommand();
  virtual ~ClientCommand();

  ClientCommand(const ClientCommand& from);

  inline ClientCommand& operator=(const ClientCommand& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ClientCommand& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const ClientCommand* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(ClientCommand* other);

  // implements Message ----------------------------------------------

  ClientCommand* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const ClientCommand& from);
  void MergeFrom(const ClientCommand& from);
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

  // optional int32 set_sync_poll_interval = 1;
  inline bool has_set_sync_poll_interval() const;
  inline void clear_set_sync_poll_interval();
  static const int kSetSyncPollIntervalFieldNumber = 1;
  inline ::google::protobuf::int32 set_sync_poll_interval() const;
  inline void set_set_sync_poll_interval(::google::protobuf::int32 value);

  // optional int32 set_sync_long_poll_interval = 2;
  inline bool has_set_sync_long_poll_interval() const;
  inline void clear_set_sync_long_poll_interval();
  static const int kSetSyncLongPollIntervalFieldNumber = 2;
  inline ::google::protobuf::int32 set_sync_long_poll_interval() const;
  inline void set_set_sync_long_poll_interval(::google::protobuf::int32 value);

  // optional int32 max_commit_batch_size = 3;
  inline bool has_max_commit_batch_size() const;
  inline void clear_max_commit_batch_size();
  static const int kMaxCommitBatchSizeFieldNumber = 3;
  inline ::google::protobuf::int32 max_commit_batch_size() const;
  inline void set_max_commit_batch_size(::google::protobuf::int32 value);

  // optional int32 sessions_commit_delay_seconds = 4;
  inline bool has_sessions_commit_delay_seconds() const;
  inline void clear_sessions_commit_delay_seconds();
  static const int kSessionsCommitDelaySecondsFieldNumber = 4;
  inline ::google::protobuf::int32 sessions_commit_delay_seconds() const;
  inline void set_sessions_commit_delay_seconds(::google::protobuf::int32 value);

  // optional int32 throttle_delay_seconds = 5;
  inline bool has_throttle_delay_seconds() const;
  inline void clear_throttle_delay_seconds();
  static const int kThrottleDelaySecondsFieldNumber = 5;
  inline ::google::protobuf::int32 throttle_delay_seconds() const;
  inline void set_throttle_delay_seconds(::google::protobuf::int32 value);

  // optional int32 client_invalidation_hint_buffer_size = 6;
  inline bool has_client_invalidation_hint_buffer_size() const;
  inline void clear_client_invalidation_hint_buffer_size();
  static const int kClientInvalidationHintBufferSizeFieldNumber = 6;
  inline ::google::protobuf::int32 client_invalidation_hint_buffer_size() const;
  inline void set_client_invalidation_hint_buffer_size(::google::protobuf::int32 value);

  // optional int32 gu_retry_delay_seconds = 7;
  inline bool has_gu_retry_delay_seconds() const;
  inline void clear_gu_retry_delay_seconds();
  static const int kGuRetryDelaySecondsFieldNumber = 7;
  inline ::google::protobuf::int32 gu_retry_delay_seconds() const;
  inline void set_gu_retry_delay_seconds(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:sync_pb.ClientCommand)
 private:
  inline void set_has_set_sync_poll_interval();
  inline void clear_has_set_sync_poll_interval();
  inline void set_has_set_sync_long_poll_interval();
  inline void clear_has_set_sync_long_poll_interval();
  inline void set_has_max_commit_batch_size();
  inline void clear_has_max_commit_batch_size();
  inline void set_has_sessions_commit_delay_seconds();
  inline void clear_has_sessions_commit_delay_seconds();
  inline void set_has_throttle_delay_seconds();
  inline void clear_has_throttle_delay_seconds();
  inline void set_has_client_invalidation_hint_buffer_size();
  inline void clear_has_client_invalidation_hint_buffer_size();
  inline void set_has_gu_retry_delay_seconds();
  inline void clear_has_gu_retry_delay_seconds();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 set_sync_poll_interval_;
  ::google::protobuf::int32 set_sync_long_poll_interval_;
  ::google::protobuf::int32 max_commit_batch_size_;
  ::google::protobuf::int32 sessions_commit_delay_seconds_;
  ::google::protobuf::int32 throttle_delay_seconds_;
  ::google::protobuf::int32 client_invalidation_hint_buffer_size_;
  ::google::protobuf::int32 gu_retry_delay_seconds_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(7 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void SYNC_EXPORT protobuf_AddDesc_client_5fcommands_2eproto_impl();
  #else
  friend void SYNC_EXPORT protobuf_AddDesc_client_5fcommands_2eproto();
  #endif
  friend void protobuf_AssignDesc_client_5fcommands_2eproto();
  friend void protobuf_ShutdownFile_client_5fcommands_2eproto();

  void InitAsDefaultInstance();
  static ClientCommand* default_instance_;
};
// ===================================================================


// ===================================================================

// ClientCommand

// optional int32 set_sync_poll_interval = 1;
inline bool ClientCommand::has_set_sync_poll_interval() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ClientCommand::set_has_set_sync_poll_interval() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ClientCommand::clear_has_set_sync_poll_interval() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ClientCommand::clear_set_sync_poll_interval() {
  set_sync_poll_interval_ = 0;
  clear_has_set_sync_poll_interval();
}
inline ::google::protobuf::int32 ClientCommand::set_sync_poll_interval() const {
  return set_sync_poll_interval_;
}
inline void ClientCommand::set_set_sync_poll_interval(::google::protobuf::int32 value) {
  set_has_set_sync_poll_interval();
  set_sync_poll_interval_ = value;
}

// optional int32 set_sync_long_poll_interval = 2;
inline bool ClientCommand::has_set_sync_long_poll_interval() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ClientCommand::set_has_set_sync_long_poll_interval() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ClientCommand::clear_has_set_sync_long_poll_interval() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ClientCommand::clear_set_sync_long_poll_interval() {
  set_sync_long_poll_interval_ = 0;
  clear_has_set_sync_long_poll_interval();
}
inline ::google::protobuf::int32 ClientCommand::set_sync_long_poll_interval() const {
  return set_sync_long_poll_interval_;
}
inline void ClientCommand::set_set_sync_long_poll_interval(::google::protobuf::int32 value) {
  set_has_set_sync_long_poll_interval();
  set_sync_long_poll_interval_ = value;
}

// optional int32 max_commit_batch_size = 3;
inline bool ClientCommand::has_max_commit_batch_size() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ClientCommand::set_has_max_commit_batch_size() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ClientCommand::clear_has_max_commit_batch_size() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ClientCommand::clear_max_commit_batch_size() {
  max_commit_batch_size_ = 0;
  clear_has_max_commit_batch_size();
}
inline ::google::protobuf::int32 ClientCommand::max_commit_batch_size() const {
  return max_commit_batch_size_;
}
inline void ClientCommand::set_max_commit_batch_size(::google::protobuf::int32 value) {
  set_has_max_commit_batch_size();
  max_commit_batch_size_ = value;
}

// optional int32 sessions_commit_delay_seconds = 4;
inline bool ClientCommand::has_sessions_commit_delay_seconds() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ClientCommand::set_has_sessions_commit_delay_seconds() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ClientCommand::clear_has_sessions_commit_delay_seconds() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ClientCommand::clear_sessions_commit_delay_seconds() {
  sessions_commit_delay_seconds_ = 0;
  clear_has_sessions_commit_delay_seconds();
}
inline ::google::protobuf::int32 ClientCommand::sessions_commit_delay_seconds() const {
  return sessions_commit_delay_seconds_;
}
inline void ClientCommand::set_sessions_commit_delay_seconds(::google::protobuf::int32 value) {
  set_has_sessions_commit_delay_seconds();
  sessions_commit_delay_seconds_ = value;
}

// optional int32 throttle_delay_seconds = 5;
inline bool ClientCommand::has_throttle_delay_seconds() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ClientCommand::set_has_throttle_delay_seconds() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ClientCommand::clear_has_throttle_delay_seconds() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ClientCommand::clear_throttle_delay_seconds() {
  throttle_delay_seconds_ = 0;
  clear_has_throttle_delay_seconds();
}
inline ::google::protobuf::int32 ClientCommand::throttle_delay_seconds() const {
  return throttle_delay_seconds_;
}
inline void ClientCommand::set_throttle_delay_seconds(::google::protobuf::int32 value) {
  set_has_throttle_delay_seconds();
  throttle_delay_seconds_ = value;
}

// optional int32 client_invalidation_hint_buffer_size = 6;
inline bool ClientCommand::has_client_invalidation_hint_buffer_size() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ClientCommand::set_has_client_invalidation_hint_buffer_size() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ClientCommand::clear_has_client_invalidation_hint_buffer_size() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ClientCommand::clear_client_invalidation_hint_buffer_size() {
  client_invalidation_hint_buffer_size_ = 0;
  clear_has_client_invalidation_hint_buffer_size();
}
inline ::google::protobuf::int32 ClientCommand::client_invalidation_hint_buffer_size() const {
  return client_invalidation_hint_buffer_size_;
}
inline void ClientCommand::set_client_invalidation_hint_buffer_size(::google::protobuf::int32 value) {
  set_has_client_invalidation_hint_buffer_size();
  client_invalidation_hint_buffer_size_ = value;
}

// optional int32 gu_retry_delay_seconds = 7;
inline bool ClientCommand::has_gu_retry_delay_seconds() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void ClientCommand::set_has_gu_retry_delay_seconds() {
  _has_bits_[0] |= 0x00000040u;
}
inline void ClientCommand::clear_has_gu_retry_delay_seconds() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void ClientCommand::clear_gu_retry_delay_seconds() {
  gu_retry_delay_seconds_ = 0;
  clear_has_gu_retry_delay_seconds();
}
inline ::google::protobuf::int32 ClientCommand::gu_retry_delay_seconds() const {
  return gu_retry_delay_seconds_;
}
inline void ClientCommand::set_gu_retry_delay_seconds(::google::protobuf::int32 value) {
  set_has_gu_retry_delay_seconds();
  gu_retry_delay_seconds_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_client_5fcommands_2eproto__INCLUDED
