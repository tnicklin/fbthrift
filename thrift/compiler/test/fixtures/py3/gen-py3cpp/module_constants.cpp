/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/py3/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/py3/gen-py3cpp/module_constants.h"

#include <thrift/lib/cpp2/gen/module_constants_cpp.h>


namespace py3 { namespace simple {

#if FOLLY_CPLUSPLUS < 201703L
constexpr bool const module_constants::A_BOOL_;
#endif

#if FOLLY_CPLUSPLUS < 201703L
constexpr ::std::int8_t const module_constants::A_BYTE_;
#endif

#if FOLLY_CPLUSPLUS < 201703L
constexpr ::std::int16_t const module_constants::THE_ANSWER_;
#endif

#if FOLLY_CPLUSPLUS < 201703L
constexpr ::std::int32_t const module_constants::A_NUMBER_;
#endif

#if FOLLY_CPLUSPLUS < 201703L
constexpr ::std::int64_t const module_constants::A_BIG_NUMBER_;
#endif

#if FOLLY_CPLUSPLUS < 201703L
constexpr double const module_constants::A_REAL_NUMBER_;
#endif

#if FOLLY_CPLUSPLUS < 201703L
constexpr double const module_constants::A_FAKE_NUMBER_;
#endif

#if FOLLY_CPLUSPLUS < 201703L
constexpr char const * const module_constants::A_WORD_;
#endif

#if FOLLY_CPLUSPLUS < 201703L
constexpr ::std::string const module_constants::SOME_BYTES_;
#endif

::py3::simple::SimpleStruct const& module_constants::A_STRUCT() {
  static folly::Indestructible<::py3::simple::SimpleStruct> const instance{::apache::thrift::detail::make_structured_constant<::py3::simple::SimpleStruct>(::apache::thrift::detail::wrap_struct_argument<::apache::thrift::ident::is_on>(true), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::ident::tiny_int>(static_cast<::std::int8_t>(5)), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::ident::small_int>(static_cast<::std::int16_t>(6)), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::ident::nice_sized_int>(static_cast<::std::int32_t>(7)), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::ident::big_int>(static_cast<::std::int64_t>(8)), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::ident::real>(static_cast<double>(9.9)))};
  return *instance;
}

::std::vector<::std::string> const& module_constants::WORD_LIST() {
  static folly::Indestructible<::std::vector<::std::string>> const instance{std::initializer_list<::std::string>{apache::thrift::StringTraits<std::string>::fromStringLiteral("the"),
  apache::thrift::StringTraits<std::string>::fromStringLiteral("quick"),
  apache::thrift::StringTraits<std::string>::fromStringLiteral("brown"),
  apache::thrift::StringTraits<std::string>::fromStringLiteral("fox"),
  apache::thrift::StringTraits<std::string>::fromStringLiteral("jumps"),
  apache::thrift::StringTraits<std::string>::fromStringLiteral("over"),
  apache::thrift::StringTraits<std::string>::fromStringLiteral("the"),
  apache::thrift::StringTraits<std::string>::fromStringLiteral("lazy"),
  apache::thrift::StringTraits<std::string>::fromStringLiteral("dog")}};
  return *instance;
}

::std::vector<::std::map<::std::int32_t, double>> const& module_constants::SOME_MAP() {
  static folly::Indestructible<::std::vector<::std::map<::std::int32_t, double>>> const instance{std::initializer_list<::std::map<::std::int32_t, double>>{std::initializer_list<::std::map<::std::int32_t, double>::value_type>{{static_cast<::std::int32_t>(1), static_cast<double>(1.1)},
  {static_cast<::std::int32_t>(2), static_cast<double>(2.2)}},
  std::initializer_list<::std::map<::std::int32_t, double>::value_type>{{static_cast<::std::int32_t>(3), static_cast<double>(3.3)}}}};
  return *instance;
}

::std::set<::std::int32_t> const& module_constants::DIGITS() {
  static folly::Indestructible<::std::set<::std::int32_t>> const instance{std::initializer_list<::std::int32_t>{static_cast<::std::int32_t>(1),
  static_cast<::std::int32_t>(2),
  static_cast<::std::int32_t>(3),
  static_cast<::std::int32_t>(4),
  static_cast<::std::int32_t>(5)}};
  return *instance;
}

::std::map<::std::string, ::py3::simple::SimpleStruct> const& module_constants::A_CONST_MAP() {
  static folly::Indestructible<::std::map<::std::string, ::py3::simple::SimpleStruct>> const instance{std::initializer_list<::std::map<::std::string, ::py3::simple::SimpleStruct>::value_type>{{apache::thrift::StringTraits<std::string>::fromStringLiteral("simple"), ::apache::thrift::detail::make_structured_constant<::py3::simple::SimpleStruct>(::apache::thrift::detail::wrap_struct_argument<::apache::thrift::ident::is_on>(false), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::ident::tiny_int>(static_cast<::std::int8_t>(50)), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::ident::small_int>(static_cast<::std::int16_t>(61)), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::ident::nice_sized_int>(static_cast<::std::int32_t>(72)), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::ident::big_int>(static_cast<::std::int64_t>(83)), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::ident::real>(static_cast<double>(99.9)))}}};
  return *instance;
}

::std::map<::py3::simple::AnEnumRenamed, ::std::int32_t> const& module_constants::ANOTHER_CONST_MAP() {
  static folly::Indestructible<::std::map<::py3::simple::AnEnumRenamed, ::std::int32_t>> const instance{std::initializer_list<::std::map<::py3::simple::AnEnumRenamed, ::std::int32_t>::value_type>{{ ::py3::simple::AnEnumRenamed::name, static_cast<::std::int32_t>(0)},
  { ::py3::simple::AnEnumRenamed::value, static_cast<::std::int32_t>(1)},
  { ::py3::simple::AnEnumRenamed::normal, static_cast<::std::int32_t>(2)}}};
  return *instance;
}

}} // py3::simple
