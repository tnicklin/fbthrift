/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/basic-enum/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/basic-enum/gen-cpp2/module_constants.h"

#include <thrift/lib/cpp2/gen/module_constants_cpp.h>


namespace test::fixtures::enumstrict {
namespace module_constants {


::std::map<::test::fixtures::enumstrict::MyEnum, ::std::string> const& enumNames() {
  static folly::Indestructible<::std::map<::test::fixtures::enumstrict::MyEnum, ::std::string>> const instance{ std::initializer_list<::std::map<::test::fixtures::enumstrict::MyEnum, ::std::string>::value_type>{ {  ::test::fixtures::enumstrict::MyEnum::ONE, apache::thrift::StringTraits<std::string>::fromStringLiteral("one") },
  {  ::test::fixtures::enumstrict::MyEnum::TWO, apache::thrift::StringTraits<std::string>::fromStringLiteral("two") } } };
  return *instance;
}

} // namespace module_constants
} // namespace test::fixtures::enumstrict
