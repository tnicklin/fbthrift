/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/serialization_field_order/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/serialization_field_order/gen-cpp2/module_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

FOLLY_CLANG_DISABLE_WARNING("-Wunused-macros")

#if defined(__GNUC__) && defined(__linux__) && !FOLLY_MOBILE
// These attributes are applied to the static data members to ensure that they
// are not stripped from the compiled binary, in order to keep them available
// for use by debuggers at runtime.
//
// The "used" attribute is required to ensure the compiler always emits unused
// data.
//
// The "section" attribute is required to stop the linker from stripping used
// data. It works by forcing all of the data members (both used and unused ones)
// into the same section. As the linker strips data on a per-section basis, it
// is then unable to remove unused data without also removing used data.
// This has a similar effect to the "retain" attribute, but works with older
// toolchains.
#define THRIFT_DATA_MEMBER [[gnu::used]] [[gnu::section(".rodata.thrift.data")]]
#else
#define THRIFT_DATA_MEMBER
#endif

namespace apache {
namespace thrift {

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::Foo>::name = "Foo";
THRIFT_DATA_MEMBER const std::array<std::string_view, 3> TStructDataStorage<::cpp2::Foo>::fields_names = { {
  "field1"sv,
  "field2"sv,
  "field3"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 3> TStructDataStorage<::cpp2::Foo>::fields_ids = { {
  3,
  1,
  2,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 3> TStructDataStorage<::cpp2::Foo>::fields_types = { {
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 3> TStructDataStorage<::cpp2::Foo>::storage_names = { {
  "__fbthrift_field_field1"sv,
  "__fbthrift_field_field2"sv,
  "__fbthrift_field_field3"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 3> TStructDataStorage<::cpp2::Foo>::isset_indexes = { {
  0,
  1,
  2,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::Foo2>::name = "Foo2";
THRIFT_DATA_MEMBER const std::array<std::string_view, 3> TStructDataStorage<::cpp2::Foo2>::fields_names = { {
  "field1"sv,
  "field2"sv,
  "field3"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 3> TStructDataStorage<::cpp2::Foo2>::fields_ids = { {
  3,
  1,
  2,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 3> TStructDataStorage<::cpp2::Foo2>::fields_types = { {
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 3> TStructDataStorage<::cpp2::Foo2>::storage_names = { {
  "__fbthrift_field_field1"sv,
  "__fbthrift_field_field2"sv,
  "__fbthrift_field_field3"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 3> TStructDataStorage<::cpp2::Foo2>::isset_indexes = { {
  0,
  1,
  2,
}};

} // namespace thrift
} // namespace apache
