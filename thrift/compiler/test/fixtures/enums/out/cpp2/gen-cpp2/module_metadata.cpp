/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/enums/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/enums/gen-cpp2/module_metadata.h"

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

void EnumMetadata<::test::fixtures::enums::Metasyntactic>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums()->emplace("module.Metasyntactic", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name() = "module.Metasyntactic";
  using EnumTraits = TEnumTraits<::test::fixtures::enums::Metasyntactic>;
  for (std::size_t i = 0; i != EnumTraits::size; ++i) {
    enum_metadata.elements()->emplace(static_cast<int32_t>(EnumTraits::values[i]), EnumTraits::names[i]);
  }
}
void EnumMetadata<::test::fixtures::enums::MyEnum1>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums()->emplace("module.MyEnum1", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name() = "module.MyEnum1";
  using EnumTraits = TEnumTraits<::test::fixtures::enums::MyEnum1>;
  for (std::size_t i = 0; i != EnumTraits::size; ++i) {
    enum_metadata.elements()->emplace(static_cast<int32_t>(EnumTraits::values[i]), EnumTraits::names[i]);
  }
}
void EnumMetadata<::test::fixtures::enums::MyEnum2>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums()->emplace("module.MyEnum2", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name() = "module.MyEnum2";
  using EnumTraits = TEnumTraits<::test::fixtures::enums::MyEnum2>;
  for (std::size_t i = 0; i != EnumTraits::size; ++i) {
    enum_metadata.elements()->emplace(static_cast<int32_t>(EnumTraits::values[i]), EnumTraits::names[i]);
  }
}
void EnumMetadata<::test::fixtures::enums::MyEnum3>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums()->emplace("module.MyEnum3", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name() = "module.MyEnum3";
  using EnumTraits = TEnumTraits<::test::fixtures::enums::MyEnum3>;
  for (std::size_t i = 0; i != EnumTraits::size; ++i) {
    enum_metadata.elements()->emplace(static_cast<int32_t>(EnumTraits::values[i]), EnumTraits::names[i]);
  }
}
void EnumMetadata<::test::fixtures::enums::MyEnum4>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums()->emplace("module.MyEnum4", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name() = "module.MyEnum4";
  using EnumTraits = TEnumTraits<::test::fixtures::enums::MyEnum4>;
  for (std::size_t i = 0; i != EnumTraits::size; ++i) {
    enum_metadata.elements()->emplace(static_cast<int32_t>(EnumTraits::values[i]), EnumTraits::names[i]);
  }
}
void EnumMetadata<::test::fixtures::enums::MyBitmaskEnum1>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums()->emplace("module.MyBitmaskEnum1", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name() = "module.MyBitmaskEnum1";
  using EnumTraits = TEnumTraits<::test::fixtures::enums::MyBitmaskEnum1>;
  for (std::size_t i = 0; i != EnumTraits::size; ++i) {
    enum_metadata.elements()->emplace(static_cast<int32_t>(EnumTraits::values[i]), EnumTraits::names[i]);
  }
}
void EnumMetadata<::test::fixtures::enums::MyBitmaskEnum2>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums()->emplace("module.MyBitmaskEnum2", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name() = "module.MyBitmaskEnum2";
  using EnumTraits = TEnumTraits<::test::fixtures::enums::MyBitmaskEnum2>;
  for (std::size_t i = 0; i != EnumTraits::size; ++i) {
    enum_metadata.elements()->emplace(static_cast<int32_t>(EnumTraits::values[i]), EnumTraits::names[i]);
  }
  enum_metadata.structured_annotations()->push_back(*cvStruct("thrift.BitmaskEnum", {  }).cv_struct_ref());
}

const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::test::fixtures::enums::SomeStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.SomeStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_SomeStruct = res.first->second;
  module_SomeStruct.name() = "module.SomeStruct";
  module_SomeStruct.is_union() = false;
  static const auto* const
  module_SomeStruct_fields = new std::array<EncodedThriftField, 4>{ {
    { 1, "reasonable", false, std::make_unique<Enum<::test::fixtures::enums::Metasyntactic>>("module.Metasyntactic"), std::vector<ThriftConstStruct>{ }},    { 2, "fine", false, std::make_unique<Enum<::test::fixtures::enums::Metasyntactic>>("module.Metasyntactic"), std::vector<ThriftConstStruct>{ }},    { 3, "questionable", false, std::make_unique<Enum<::test::fixtures::enums::Metasyntactic>>("module.Metasyntactic"), std::vector<ThriftConstStruct>{ }},    { 4, "tags", false, std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)), std::vector<ThriftConstStruct>{ }},  }};
  for (const auto& f : *module_SomeStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_SomeStruct.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::test::fixtures::enums::MyStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.MyStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyStruct = res.first->second;
  module_MyStruct.name() = "module.MyStruct";
  module_MyStruct.is_union() = false;
  static const auto* const
  module_MyStruct_fields = new std::array<EncodedThriftField, 4>{ {
    { 1, "me2_3", false, std::make_unique<Enum<::test::fixtures::enums::MyEnum2>>("module.MyEnum2"), std::vector<ThriftConstStruct>{ }},    { 2, "me3_n3", false, std::make_unique<Enum<::test::fixtures::enums::MyEnum3>>("module.MyEnum3"), std::vector<ThriftConstStruct>{ }},    { 4, "me1_t1", false, std::make_unique<Enum<::test::fixtures::enums::MyEnum1>>("module.MyEnum1"), std::vector<ThriftConstStruct>{ }},    { 6, "me1_t2", false, std::make_unique<Enum<::test::fixtures::enums::MyEnum1>>("module.MyEnum1"), std::vector<ThriftConstStruct>{ }},  }};
  for (const auto& f : *module_MyStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_MyStruct.fields()->push_back(std::move(field));
  }
  return res.first->second;
}

} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
