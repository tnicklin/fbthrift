/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/basic/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_constants_h.h>

#include "thrift/compiler/test/fixtures/basic/gen-cpp2/module_types.h"

namespace test::fixtures::basic {
namespace module_constants {

  constexpr bool const FLAG_ = true;
  constexpr bool FLAG() {
    return FLAG_;
  }

  constexpr ::std::int8_t const OFFSET_ = static_cast<::std::int8_t>(-10);
  constexpr ::std::int8_t OFFSET() {
    return OFFSET_;
  }

  constexpr ::std::int16_t const COUNT_ = static_cast<::std::int16_t>(200);
  constexpr ::std::int16_t COUNT() {
    return COUNT_;
  }

  constexpr ::std::int32_t const MASK_ = static_cast<::std::int32_t>(16388846);
  constexpr ::std::int32_t MASK() {
    return MASK_;
  }

  constexpr double const E_ = static_cast<double>(2.718281828459);
  constexpr double E() {
    return E_;
  }

  constexpr char const * const DATE_ = "June 28, 2017";
  constexpr char const * DATE() {
    return DATE_;
  }

  ::std::vector<::std::int32_t> const& AList();

  ::std::set<::std::string> const& ASet();

  ::std::map<::std::string, ::std::vector<::std::int32_t>> const& AMap();


} // namespace module_constants
} // namespace test::fixtures::basic
