// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dep_level2.proto

#ifndef PROTOBUF_dep_5flevel2_2eproto__INCLUDED
#define PROTOBUF_dep_5flevel2_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_dep_5flevel2_2eproto();
void protobuf_AssignDesc_dep_5flevel2_2eproto();
void protobuf_ShutdownFile_dep_5flevel2_2eproto();

class dep2_cfg;

// ===================================================================

class dep2_cfg : public ::google::protobuf::Message {
 public:
  dep2_cfg();
  virtual ~dep2_cfg();

  dep2_cfg(const dep2_cfg& from);

  inline dep2_cfg& operator=(const dep2_cfg& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const dep2_cfg& default_instance();

  void Swap(dep2_cfg* other);

  // implements Message ----------------------------------------------

  dep2_cfg* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const dep2_cfg& from);
  void MergeFrom(const dep2_cfg& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::uint32 id() const;
  inline void set_id(::google::protobuf::uint32 value);

  // required string level = 2;
  inline bool has_level() const;
  inline void clear_level();
  static const int kLevelFieldNumber = 2;
  inline const ::std::string& level() const;
  inline void set_level(const ::std::string& value);
  inline void set_level(const char* value);
  inline void set_level(const char* value, size_t size);
  inline ::std::string* mutable_level();
  inline ::std::string* release_level();
  inline void set_allocated_level(::std::string* level);

  // @@protoc_insertion_point(class_scope:dep2_cfg)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_level();
  inline void clear_has_level();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* level_;
  ::google::protobuf::uint32 id_;
  friend void  protobuf_AddDesc_dep_5flevel2_2eproto();
  friend void protobuf_AssignDesc_dep_5flevel2_2eproto();
  friend void protobuf_ShutdownFile_dep_5flevel2_2eproto();

  void InitAsDefaultInstance();
  static dep2_cfg* default_instance_;
};
// ===================================================================


// ===================================================================

// dep2_cfg

// required uint32 id = 1;
inline bool dep2_cfg::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void dep2_cfg::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void dep2_cfg::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void dep2_cfg::clear_id() {
  id_ = 0u;
  clear_has_id();
}
inline ::google::protobuf::uint32 dep2_cfg::id() const {
  // @@protoc_insertion_point(field_get:dep2_cfg.id)
  return id_;
}
inline void dep2_cfg::set_id(::google::protobuf::uint32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:dep2_cfg.id)
}

// required string level = 2;
inline bool dep2_cfg::has_level() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void dep2_cfg::set_has_level() {
  _has_bits_[0] |= 0x00000002u;
}
inline void dep2_cfg::clear_has_level() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void dep2_cfg::clear_level() {
  if (level_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    level_->clear();
  }
  clear_has_level();
}
inline const ::std::string& dep2_cfg::level() const {
  // @@protoc_insertion_point(field_get:dep2_cfg.level)
  return *level_;
}
inline void dep2_cfg::set_level(const ::std::string& value) {
  set_has_level();
  if (level_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    level_ = new ::std::string;
  }
  level_->assign(value);
  // @@protoc_insertion_point(field_set:dep2_cfg.level)
}
inline void dep2_cfg::set_level(const char* value) {
  set_has_level();
  if (level_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    level_ = new ::std::string;
  }
  level_->assign(value);
  // @@protoc_insertion_point(field_set_char:dep2_cfg.level)
}
inline void dep2_cfg::set_level(const char* value, size_t size) {
  set_has_level();
  if (level_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    level_ = new ::std::string;
  }
  level_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:dep2_cfg.level)
}
inline ::std::string* dep2_cfg::mutable_level() {
  set_has_level();
  if (level_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    level_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:dep2_cfg.level)
  return level_;
}
inline ::std::string* dep2_cfg::release_level() {
  clear_has_level();
  if (level_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = level_;
    level_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void dep2_cfg::set_allocated_level(::std::string* level) {
  if (level_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete level_;
  }
  if (level) {
    set_has_level();
    level_ = level;
  } else {
    clear_has_level();
    level_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:dep2_cfg.level)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_dep_5flevel2_2eproto__INCLUDED
