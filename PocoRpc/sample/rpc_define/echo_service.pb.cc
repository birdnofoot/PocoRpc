// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: echo_service.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "echo_service.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Sample {

namespace {

const ::google::protobuf::Descriptor* EchoReq_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  EchoReq_reflection_ = NULL;
const ::google::protobuf::Descriptor* EchoReply_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  EchoReply_reflection_ = NULL;
const ::google::protobuf::ServiceDescriptor* EchoService_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_echo_5fservice_2eproto() {
  protobuf_AddDesc_echo_5fservice_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "echo_service.proto");
  GOOGLE_CHECK(file != NULL);
  EchoReq_descriptor_ = file->message_type(0);
  static const int EchoReq_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EchoReq, msg_),
  };
  EchoReq_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      EchoReq_descriptor_,
      EchoReq::default_instance_,
      EchoReq_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EchoReq, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EchoReq, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(EchoReq));
  EchoReply_descriptor_ = file->message_type(1);
  static const int EchoReply_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EchoReply, status_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EchoReply, msg_),
  };
  EchoReply_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      EchoReply_descriptor_,
      EchoReply::default_instance_,
      EchoReply_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EchoReply, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EchoReply, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(EchoReply));
  EchoService_descriptor_ = file->service(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_echo_5fservice_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    EchoReq_descriptor_, &EchoReq::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    EchoReply_descriptor_, &EchoReply::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_echo_5fservice_2eproto() {
  delete EchoReq::default_instance_;
  delete EchoReq_reflection_;
  delete EchoReply::default_instance_;
  delete EchoReply_reflection_;
}

void protobuf_AddDesc_echo_5fservice_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022echo_service.proto\022\006Sample\"\026\n\007EchoReq\022"
    "\013\n\003msg\030\001 \002(\t\"(\n\tEchoReply\022\016\n\006status\030\001 \002("
    "\005\022\013\n\003msg\030\002 \002(\t29\n\013EchoService\022*\n\004Echo\022\017."
    "Sample.EchoReq\032\021.Sample.EchoReplyB\003\200\001\001", 158);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "echo_service.proto", &protobuf_RegisterTypes);
  EchoReq::default_instance_ = new EchoReq();
  EchoReply::default_instance_ = new EchoReply();
  EchoReq::default_instance_->InitAsDefaultInstance();
  EchoReply::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_echo_5fservice_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_echo_5fservice_2eproto {
  StaticDescriptorInitializer_echo_5fservice_2eproto() {
    protobuf_AddDesc_echo_5fservice_2eproto();
  }
} static_descriptor_initializer_echo_5fservice_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int EchoReq::kMsgFieldNumber;
#endif  // !_MSC_VER

EchoReq::EchoReq()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void EchoReq::InitAsDefaultInstance() {
}

EchoReq::EchoReq(const EchoReq& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void EchoReq::SharedCtor() {
  _cached_size_ = 0;
  msg_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

EchoReq::~EchoReq() {
  SharedDtor();
}

void EchoReq::SharedDtor() {
  if (msg_ != &::google::protobuf::internal::kEmptyString) {
    delete msg_;
  }
  if (this != default_instance_) {
  }
}

void EchoReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* EchoReq::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EchoReq_descriptor_;
}

const EchoReq& EchoReq::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_echo_5fservice_2eproto();
  return *default_instance_;
}

EchoReq* EchoReq::default_instance_ = NULL;

EchoReq* EchoReq::New() const {
  return new EchoReq;
}

void EchoReq::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_msg()) {
      if (msg_ != &::google::protobuf::internal::kEmptyString) {
        msg_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool EchoReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string msg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_msg()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->msg().data(), this->msg().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void EchoReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string msg = 1;
  if (has_msg()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->msg().data(), this->msg().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->msg(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* EchoReq::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string msg = 1;
  if (has_msg()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->msg().data(), this->msg().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->msg(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int EchoReq::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string msg = 1;
    if (has_msg()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->msg());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EchoReq::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const EchoReq* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const EchoReq*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void EchoReq::MergeFrom(const EchoReq& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msg()) {
      set_msg(from.msg());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void EchoReq::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EchoReq::CopyFrom(const EchoReq& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EchoReq::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void EchoReq::Swap(EchoReq* other) {
  if (other != this) {
    std::swap(msg_, other->msg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata EchoReq::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = EchoReq_descriptor_;
  metadata.reflection = EchoReq_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int EchoReply::kStatusFieldNumber;
const int EchoReply::kMsgFieldNumber;
#endif  // !_MSC_VER

EchoReply::EchoReply()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void EchoReply::InitAsDefaultInstance() {
}

EchoReply::EchoReply(const EchoReply& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void EchoReply::SharedCtor() {
  _cached_size_ = 0;
  status_ = 0;
  msg_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

EchoReply::~EchoReply() {
  SharedDtor();
}

void EchoReply::SharedDtor() {
  if (msg_ != &::google::protobuf::internal::kEmptyString) {
    delete msg_;
  }
  if (this != default_instance_) {
  }
}

void EchoReply::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* EchoReply::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EchoReply_descriptor_;
}

const EchoReply& EchoReply::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_echo_5fservice_2eproto();
  return *default_instance_;
}

EchoReply* EchoReply::default_instance_ = NULL;

EchoReply* EchoReply::New() const {
  return new EchoReply;
}

void EchoReply::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    status_ = 0;
    if (has_msg()) {
      if (msg_ != &::google::protobuf::internal::kEmptyString) {
        msg_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool EchoReply::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 status = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &status_)));
          set_has_status();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_msg;
        break;
      }

      // required string msg = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_msg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_msg()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->msg().data(), this->msg().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void EchoReply::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 status = 1;
  if (has_status()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->status(), output);
  }

  // required string msg = 2;
  if (has_msg()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->msg().data(), this->msg().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->msg(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* EchoReply::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 status = 1;
  if (has_status()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->status(), target);
  }

  // required string msg = 2;
  if (has_msg()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->msg().data(), this->msg().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->msg(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int EchoReply::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 status = 1;
    if (has_status()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->status());
    }

    // required string msg = 2;
    if (has_msg()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->msg());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EchoReply::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const EchoReply* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const EchoReply*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void EchoReply::MergeFrom(const EchoReply& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_status()) {
      set_status(from.status());
    }
    if (from.has_msg()) {
      set_msg(from.msg());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void EchoReply::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EchoReply::CopyFrom(const EchoReply& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EchoReply::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void EchoReply::Swap(EchoReply* other) {
  if (other != this) {
    std::swap(status_, other->status_);
    std::swap(msg_, other->msg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata EchoReply::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = EchoReply_descriptor_;
  metadata.reflection = EchoReply_reflection_;
  return metadata;
}


// ===================================================================

EchoService::~EchoService() {}

const ::google::protobuf::ServiceDescriptor* EchoService::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EchoService_descriptor_;
}

const ::google::protobuf::ServiceDescriptor* EchoService::GetDescriptor() {
  protobuf_AssignDescriptorsOnce();
  return EchoService_descriptor_;
}

void EchoService::Echo(::google::protobuf::RpcController* controller,
                         const ::Sample::EchoReq*,
                         ::Sample::EchoReply*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method Echo() not implemented.");
  done->Run();
}

void EchoService::CallMethod(const ::google::protobuf::MethodDescriptor* method,
                             ::google::protobuf::RpcController* controller,
                             const ::google::protobuf::Message* request,
                             ::google::protobuf::Message* response,
                             ::google::protobuf::Closure* done) {
  GOOGLE_DCHECK_EQ(method->service(), EchoService_descriptor_);
  switch(method->index()) {
    case 0:
      Echo(controller,
             ::google::protobuf::down_cast<const ::Sample::EchoReq*>(request),
             ::google::protobuf::down_cast< ::Sample::EchoReply*>(response),
             done);
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::google::protobuf::Message& EchoService::GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::Sample::EchoReq::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

const ::google::protobuf::Message& EchoService::GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::Sample::EchoReply::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

EchoService_Stub::EchoService_Stub(::google::protobuf::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
EchoService_Stub::EchoService_Stub(
    ::google::protobuf::RpcChannel* channel,
    ::google::protobuf::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::google::protobuf::Service::STUB_OWNS_CHANNEL) {}
EchoService_Stub::~EchoService_Stub() {
  if (owns_channel_) delete channel_;
}

void EchoService_Stub::Echo(::google::protobuf::RpcController* controller,
                              const ::Sample::EchoReq* request,
                              ::Sample::EchoReply* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(0),
                       controller, request, response, done);
}

// @@protoc_insertion_point(namespace_scope)

}  // namespace Sample

// @@protoc_insertion_point(global_scope)
