/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>

#include <thrift/lib/cpp2/type/Tag.h>


namespace apache {
namespace thrift {
namespace tag {
struct MyInt;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_MyInt
#define APACHE_THRIFT_ACCESSOR_MyInt
APACHE_THRIFT_DEFINE_ACCESSOR(MyInt);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
namespace test { namespace namespace_from_package { namespace module {
class Foo;
}}} // test::namespace_from_package::module
// END forward_declare
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace test { namespace namespace_from_package { namespace module {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;


class Foo final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;
  template<class> friend struct ::apache::thrift::detail::invoke_reffer;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static const char* __fbthrift_thrift_uri();
  using __fbthrift_fields = ::apache::thrift::type::fields<
    ::apache::thrift::type::field_t<::apache::thrift::FieldId{1}, ::apache::thrift::type::i64_t>
  >;

  static constexpr std::size_t __fbthrift_field_size_v = 1;

  static constexpr ::apache::thrift::FieldId __fbthrift_field_ids[] = {::apache::thrift::FieldId{1}, };
  
  static ::apache::thrift::tag::MyInt __fbthrift_ident(::apache::thrift::type::field_id_u_c<1>);

  static constexpr ::apache::thrift::Ordinal __fbthrift_ordinal(::apache::thrift::FieldId id) {
    switch (::folly::to_underlying(id)) {
      case 1: return ::apache::thrift::Ordinal{1};
    }
    return ::apache::thrift::Ordinal{0};
  }


  void __fbthrift_clear();
  void __fbthrift_clear_terse_fields();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = Foo;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  Foo() :
      __fbthrift_field_MyInt() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Foo(apache::thrift::FragileConstructor, ::std::int64_t MyInt__arg);

  Foo(Foo&&) = default;

  Foo(const Foo&) = default;


  Foo& operator=(Foo&&) = default;

  Foo& operator=(const Foo&) = default;
 private:
  ::std::int64_t __fbthrift_field_MyInt;
 private:
  apache::thrift::detail::isset_bitset<1, apache::thrift::detail::IssetBitsetOption::Unpacked> __isset;

 public:

  bool operator==(const Foo&) const;
  bool operator<(const Foo&) const;

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> MyInt_ref() const& {
    return {this->__fbthrift_field_MyInt, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> MyInt_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_MyInt), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> MyInt_ref() & {
    return {this->__fbthrift_field_MyInt, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> MyInt_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_MyInt), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> MyInt() const& {
    return {this->__fbthrift_field_MyInt, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> MyInt() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_MyInt), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> MyInt() & {
    return {this->__fbthrift_field_MyInt, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> MyInt() && {
    return {static_cast<T&&>(this->__fbthrift_field_MyInt), __isset.at(0), __isset.bit(0)};
  }

  ::std::int64_t get_MyInt() const {
    return __fbthrift_field_MyInt;
  }

  [[deprecated("Use `FOO.MyInt_ref() = BAR;` instead of `FOO.set_MyInt(BAR);`")]]
  ::std::int64_t& set_MyInt(::std::int64_t MyInt_) {
    MyInt_ref() = MyInt_;
    return __fbthrift_field_MyInt;
  }

  template <class Protocol_>
  unsigned long read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<Foo>;
  friend void swap(Foo& a, Foo& b);
};

template <class Protocol_>
unsigned long Foo::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}


}}} // test::namespace_from_package::module
