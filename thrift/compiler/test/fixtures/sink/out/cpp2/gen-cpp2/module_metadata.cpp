/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/sink/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/sink/gen-cpp2/module_metadata.h"

// some of these functions can be so large that the compiler gives up optimizing
// them - and issues a warning which may be treated as an error!
//
// these functions are so rarely called that it is probably okay for them not to
// be optimized in practice
FOLLY_CLANG_DISABLE_WARNING("-Wignored-optimization-argument")

namespace apache {
namespace thrift {
namespace detail {
namespace md {
using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;
using ThriftService = ::apache::thrift::metadata::ThriftService;
using ThriftServiceContext = ::apache::thrift::metadata::ThriftServiceContext;
using ThriftFunctionGenerator = void (*)(ThriftMetadata&, ThriftService&);


const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::InitialResponse>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.InitialResponse", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_InitialResponse = res.first->second;
  module_InitialResponse.name() = "module.InitialResponse";
  module_InitialResponse.is_union() = false;
  static const auto* const
  module_InitialResponse_fields = new std::array<EncodedThriftField, 1>{ {
    { 1, "content", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{ }},  }};
  for (const auto& f : *module_InitialResponse_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_InitialResponse.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::FinalResponse>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.FinalResponse", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_FinalResponse = res.first->second;
  module_FinalResponse.name() = "module.FinalResponse";
  module_FinalResponse.is_union() = false;
  static const auto* const
  module_FinalResponse_fields = new std::array<EncodedThriftField, 1>{ {
    { 1, "content", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{ }},  }};
  for (const auto& f : *module_FinalResponse_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_FinalResponse.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::SinkPayload>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.SinkPayload", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_SinkPayload = res.first->second;
  module_SinkPayload.name() = "module.SinkPayload";
  module_SinkPayload.is_union() = false;
  static const auto* const
  module_SinkPayload_fields = new std::array<EncodedThriftField, 1>{ {
    { 1, "content", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{ }},  }};
  for (const auto& f : *module_SinkPayload_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_SinkPayload.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::CompatibleWithKeywordSink>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.CompatibleWithKeywordSink", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_CompatibleWithKeywordSink = res.first->second;
  module_CompatibleWithKeywordSink.name() = "module.CompatibleWithKeywordSink";
  module_CompatibleWithKeywordSink.is_union() = false;
  static const auto* const
  module_CompatibleWithKeywordSink_fields = new std::array<EncodedThriftField, 1>{ {
    { 1, "sink", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{ }},  }};
  for (const auto& f : *module_CompatibleWithKeywordSink_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_CompatibleWithKeywordSink.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::InitialException>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.InitialException", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_InitialException = res.first->second;
  module_InitialException.name() = "module.InitialException";
  module_InitialException.is_union() = false;
  static const auto* const
  module_InitialException_fields = new std::array<EncodedThriftField, 1>{ {
    { 1, "reason", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{ }},  }};
  for (const auto& f : *module_InitialException_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_InitialException.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::SinkException1>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.SinkException1", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_SinkException1 = res.first->second;
  module_SinkException1.name() = "module.SinkException1";
  module_SinkException1.is_union() = false;
  static const auto* const
  module_SinkException1_fields = new std::array<EncodedThriftField, 1>{ {
    { 1, "reason", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{ }},  }};
  for (const auto& f : *module_SinkException1_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_SinkException1.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::SinkException2>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.SinkException2", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_SinkException2 = res.first->second;
  module_SinkException2.name() = "module.SinkException2";
  module_SinkException2.is_union() = false;
  static const auto* const
  module_SinkException2_fields = new std::array<EncodedThriftField, 1>{ {
    { 1, "reason", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE), std::vector<ThriftConstStruct>{ }},  }};
  for (const auto& f : *module_SinkException2_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_SinkException2.fields()->push_back(std::move(field));
  }
  return res.first->second;
}

void ExceptionMetadata<::cpp2::InitialException>::gen(ThriftMetadata& metadata) {
  auto res = metadata.exceptions()->emplace("module.InitialException", ::apache::thrift::metadata::ThriftException{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftException& module_InitialException = res.first->second;
  module_InitialException.name() = "module.InitialException";
  static const auto* const
  module_InitialException_fields = new std::array<EncodedThriftField, 1>{ {
    { 1, "reason", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{ }},  }};
  for (const auto& f : *module_InitialException_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    module_InitialException.fields()->push_back(std::move(field));
  }
}
void ExceptionMetadata<::cpp2::SinkException1>::gen(ThriftMetadata& metadata) {
  auto res = metadata.exceptions()->emplace("module.SinkException1", ::apache::thrift::metadata::ThriftException{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftException& module_SinkException1 = res.first->second;
  module_SinkException1.name() = "module.SinkException1";
  static const auto* const
  module_SinkException1_fields = new std::array<EncodedThriftField, 1>{ {
    { 1, "reason", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{ }},  }};
  for (const auto& f : *module_SinkException1_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    module_SinkException1.fields()->push_back(std::move(field));
  }
}
void ExceptionMetadata<::cpp2::SinkException2>::gen(ThriftMetadata& metadata) {
  auto res = metadata.exceptions()->emplace("module.SinkException2", ::apache::thrift::metadata::ThriftException{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftException& module_SinkException2 = res.first->second;
  module_SinkException2.name() = "module.SinkException2";
  static const auto* const
  module_SinkException2_fields = new std::array<EncodedThriftField, 1>{ {
    { 1, "reason", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE), std::vector<ThriftConstStruct>{ }},  }};
  for (const auto& f : *module_SinkException2_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    module_SinkException2.fields()->push_back(std::move(field));
  }
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::SinkService>>::gen_method([[maybe_unused]] ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  func.name() = "method";
  auto func_ret_type = std::make_unique<Sink>(std::make_unique<Struct<::cpp2::SinkPayload>>("module.SinkPayload"), std::make_unique<Struct<::cpp2::FinalResponse>>("module.FinalResponse"));
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::SinkService>>::gen_methodAndReponse([[maybe_unused]] ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  func.name() = "methodAndReponse";
  auto func_ret_type = std::make_unique<Sink>(std::make_unique<Struct<::cpp2::SinkPayload>>("module.SinkPayload"), std::make_unique<Struct<::cpp2::FinalResponse>>("module.FinalResponse"), std::make_unique<Struct<::cpp2::InitialResponse>>("module.InitialResponse"));
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::SinkService>>::gen_methodThrow([[maybe_unused]] ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  func.name() = "methodThrow";
  auto func_ret_type = std::make_unique<Sink>(std::make_unique<Struct<::cpp2::SinkPayload>>("module.SinkPayload"), std::make_unique<Struct<::cpp2::FinalResponse>>("module.FinalResponse"));
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  ::apache::thrift::metadata::ThriftField module_SinkService_methodThrow_ex_1;
  module_SinkService_methodThrow_ex_1.id() = 1;
  module_SinkService_methodThrow_ex_1.name() = "ex";
  module_SinkService_methodThrow_ex_1.is_optional() = false;
  auto module_SinkService_methodThrow_ex_1_type = std::make_unique<Struct<::cpp2::InitialException>>("module.InitialException");
  module_SinkService_methodThrow_ex_1_type->writeAndGenType(*module_SinkService_methodThrow_ex_1.type(), metadata);
  func.exceptions()->push_back(std::move(module_SinkService_methodThrow_ex_1));
  ExceptionMetadata<::cpp2::InitialException>::gen(metadata);
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::SinkService>>::gen_methodSinkThrow([[maybe_unused]] ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  func.name() = "methodSinkThrow";
  auto func_ret_type = std::make_unique<Sink>(std::make_unique<Struct<::cpp2::SinkPayload>>("module.SinkPayload"), std::make_unique<Struct<::cpp2::FinalResponse>>("module.FinalResponse"));
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::SinkService>>::gen_methodFinalThrow([[maybe_unused]] ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  func.name() = "methodFinalThrow";
  auto func_ret_type = std::make_unique<Sink>(std::make_unique<Struct<::cpp2::SinkPayload>>("module.SinkPayload"), std::make_unique<Struct<::cpp2::FinalResponse>>("module.FinalResponse"));
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::SinkService>>::gen_methodBothThrow([[maybe_unused]] ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  func.name() = "methodBothThrow";
  auto func_ret_type = std::make_unique<Sink>(std::make_unique<Struct<::cpp2::SinkPayload>>("module.SinkPayload"), std::make_unique<Struct<::cpp2::FinalResponse>>("module.FinalResponse"));
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::SinkService>>::gen_methodFast([[maybe_unused]] ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  func.name() = "methodFast";
  auto func_ret_type = std::make_unique<Sink>(std::make_unique<Struct<::cpp2::SinkPayload>>("module.SinkPayload"), std::make_unique<Struct<::cpp2::FinalResponse>>("module.FinalResponse"));
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}

void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::SinkService>>::gen(::apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  const ::apache::thrift::metadata::ThriftServiceContextRef* self = genRecurse(*response.metadata(), *response.services());
  DCHECK(self != nullptr);
  // TODO(praihan): Remove ThriftServiceContext from response. But in the meantime, we need to fill the field with the result of looking up in ThriftMetadata.
  ::apache::thrift::metadata::ThriftServiceContext context;
  context.module() = *self->module();
  context.service_info() = response.metadata()->services()->at(*self->service_name());
  response.context() = std::move(context);
}

const ThriftServiceContextRef* ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::SinkService>>::genRecurse([[maybe_unused]] ThriftMetadata& metadata, std::vector<ThriftServiceContextRef>& services) {
  ::apache::thrift::metadata::ThriftService module_SinkService;
  module_SinkService.name() = "module.SinkService";
  static const ThriftFunctionGenerator functions[] = {
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::SinkService>>::gen_method,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::SinkService>>::gen_methodAndReponse,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::SinkService>>::gen_methodThrow,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::SinkService>>::gen_methodSinkThrow,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::SinkService>>::gen_methodFinalThrow,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::SinkService>>::gen_methodBothThrow,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::SinkService>>::gen_methodFast,
  };
  for (auto& function_gen : functions) {
    function_gen(metadata, module_SinkService);
  }
  // We need to keep the index around because a reference or iterator could be invalidated.
  auto selfIndex = services.size();
  services.emplace_back();
  ThriftServiceContextRef& context = services[selfIndex];
  metadata.services()->emplace("module.SinkService", std::move(module_SinkService));
  context.service_name() = "module.SinkService";
  ::apache::thrift::metadata::ThriftModuleContext module;
  module.name() = "module";
  context.module() = std::move(module);
  return &context;
}
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
