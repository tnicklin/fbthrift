/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/optionals/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/optionals/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/optionals/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/optionals/gen-cpp2/module_data.h"


namespace apache { namespace thrift {

folly::Range<::cpp2::Animal const*> const TEnumTraits<::cpp2::Animal>::values = folly::range(TEnumDataStorage<::cpp2::Animal>::values);
folly::Range<std::string_view const*> const TEnumTraits<::cpp2::Animal>::names = folly::range(TEnumDataStorage<::cpp2::Animal>::names);

bool TEnumTraits<::cpp2::Animal>::findName(type value, std::string_view* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_name(value, out);
}

bool TEnumTraits<::cpp2::Animal>::findValue(std::string_view name, type* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_value(name, out);
}

}} // apache::thrift


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::Color>::translateFieldName(
    std::string_view _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::Color>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

std::string_view Color::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<Color>::fields_names[folly::to_underlying(ord) - 1];
}
std::string_view Color::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<Color>::name;
}


Color::Color(apache::thrift::FragileConstructor, double red__arg, double green__arg, double blue__arg, double alpha__arg) :
    __fbthrift_field_red(std::move(red__arg)),
    __fbthrift_field_green(std::move(green__arg)),
    __fbthrift_field_blue(std::move(blue__arg)),
    __fbthrift_field_alpha(std::move(alpha__arg)) { 
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
  __isset.set(folly::index_constant<2>(), true);
  __isset.set(folly::index_constant<3>(), true);
}


void Color::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_red = double();
  this->__fbthrift_field_green = double();
  this->__fbthrift_field_blue = double();
  this->__fbthrift_field_alpha = double();
  __isset = {};
}

void Color::__fbthrift_clear_terse_fields() {
}

bool Color::__fbthrift_is_empty() const {
  return false;
}

bool Color::operator==([[maybe_unused]] const Color& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool Color::operator<([[maybe_unused]] const Color& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}


void swap([[maybe_unused]] Color& a, [[maybe_unused]] Color& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_red, b.__fbthrift_field_red);
  swap(a.__fbthrift_field_green, b.__fbthrift_field_green);
  swap(a.__fbthrift_field_blue, b.__fbthrift_field_blue);
  swap(a.__fbthrift_field_alpha, b.__fbthrift_field_alpha);
  swap(a.__isset, b.__isset);
}

template void Color::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Color::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Color::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Color::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Color::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Color::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Color::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Color::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::Vehicle>::translateFieldName(
    std::string_view _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::Vehicle>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

std::string_view Vehicle::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<Vehicle>::fields_names[folly::to_underlying(ord) - 1];
}
std::string_view Vehicle::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<Vehicle>::name;
}

Vehicle::Vehicle(const Vehicle&) = default;
Vehicle& Vehicle::operator=(const Vehicle&) = default;
Vehicle::Vehicle() :
      __fbthrift_field_hasAC(false) {
}


Vehicle::~Vehicle() {}

Vehicle::Vehicle([[maybe_unused]] Vehicle&& other) noexcept :
    __fbthrift_field_color(std::move(other.__fbthrift_field_color)),
    __fbthrift_field_licensePlate(std::move(other.__fbthrift_field_licensePlate)),
    __fbthrift_field_description(std::move(other.__fbthrift_field_description)),
    __fbthrift_field_name(std::move(other.__fbthrift_field_name)),
    __fbthrift_field_hasAC(std::move(other.__fbthrift_field_hasAC)),
    __isset(other.__isset) {
}

Vehicle& Vehicle::operator=([[maybe_unused]] Vehicle&& other) noexcept {
    this->__fbthrift_field_color = std::move(other.__fbthrift_field_color);
    this->__fbthrift_field_licensePlate = std::move(other.__fbthrift_field_licensePlate);
    this->__fbthrift_field_description = std::move(other.__fbthrift_field_description);
    this->__fbthrift_field_name = std::move(other.__fbthrift_field_name);
    this->__fbthrift_field_hasAC = std::move(other.__fbthrift_field_hasAC);
    __isset = other.__isset;
    return *this;
}


Vehicle::Vehicle(apache::thrift::FragileConstructor, ::cpp2::Color color__arg, ::std::string licensePlate__arg, ::std::string description__arg, ::std::string name__arg, bool hasAC__arg) :
    __fbthrift_field_color(std::move(color__arg)),
    __fbthrift_field_licensePlate(std::move(licensePlate__arg)),
    __fbthrift_field_description(std::move(description__arg)),
    __fbthrift_field_name(std::move(name__arg)),
    __fbthrift_field_hasAC(std::move(hasAC__arg)) { 
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
  __isset.set(folly::index_constant<2>(), true);
  __isset.set(folly::index_constant<3>(), true);
  __isset.set(folly::index_constant<4>(), true);
}


void Vehicle::__fbthrift_clear() {
  // clear all fields
  ::apache::thrift::clear(this->__fbthrift_field_color);
  this->__fbthrift_field_licensePlate = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_description = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_name = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_hasAC = bool();
  __isset = {};
}

void Vehicle::__fbthrift_clear_terse_fields() {
}

bool Vehicle::__fbthrift_is_empty() const {
  return false;
}

bool Vehicle::operator==([[maybe_unused]] const Vehicle& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool Vehicle::operator<([[maybe_unused]] const Vehicle& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}

const ::cpp2::Color& Vehicle::get_color() const& {
  return __fbthrift_field_color;
}

::cpp2::Color Vehicle::get_color() && {
  return std::move(__fbthrift_field_color);
}


void swap([[maybe_unused]] Vehicle& a, [[maybe_unused]] Vehicle& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_color, b.__fbthrift_field_color);
  swap(a.__fbthrift_field_licensePlate, b.__fbthrift_field_licensePlate);
  swap(a.__fbthrift_field_description, b.__fbthrift_field_description);
  swap(a.__fbthrift_field_name, b.__fbthrift_field_name);
  swap(a.__fbthrift_field_hasAC, b.__fbthrift_field_hasAC);
  swap(a.__isset, b.__isset);
}

template void Vehicle::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Vehicle::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Vehicle::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Vehicle::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Vehicle::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Vehicle::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Vehicle::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Vehicle::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        Vehicle,
        ::apache::thrift::type_class::structure,
        ::cpp2::Color>,
    "inconsistent use of json option");

} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::Person>::translateFieldName(
    std::string_view _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::Person>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

std::string_view Person::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<Person>::fields_names[folly::to_underlying(ord) - 1];
}
std::string_view Person::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<Person>::name;
}

Person::Person(const Person&) = default;
Person& Person::operator=(const Person&) = default;
Person::Person() :
      __fbthrift_field_id(),
      __fbthrift_field_age(),
      __fbthrift_field_bestFriend(),
      __fbthrift_field_afraidOfAnimal() {
}


Person::~Person() {}

Person::Person([[maybe_unused]] Person&& other) noexcept :
    __fbthrift_field_id(std::move(other.__fbthrift_field_id)),
    __fbthrift_field_name(std::move(other.__fbthrift_field_name)),
    __fbthrift_field_age(std::move(other.__fbthrift_field_age)),
    __fbthrift_field_address(std::move(other.__fbthrift_field_address)),
    __fbthrift_field_favoriteColor(std::move(other.__fbthrift_field_favoriteColor)),
    __fbthrift_field_friends(std::move(other.__fbthrift_field_friends)),
    __fbthrift_field_bestFriend(std::move(other.__fbthrift_field_bestFriend)),
    __fbthrift_field_petNames(std::move(other.__fbthrift_field_petNames)),
    __fbthrift_field_afraidOfAnimal(std::move(other.__fbthrift_field_afraidOfAnimal)),
    __fbthrift_field_vehicles(std::move(other.__fbthrift_field_vehicles)),
    __isset(other.__isset) {
}

Person& Person::operator=([[maybe_unused]] Person&& other) noexcept {
    this->__fbthrift_field_id = std::move(other.__fbthrift_field_id);
    this->__fbthrift_field_name = std::move(other.__fbthrift_field_name);
    this->__fbthrift_field_age = std::move(other.__fbthrift_field_age);
    this->__fbthrift_field_address = std::move(other.__fbthrift_field_address);
    this->__fbthrift_field_favoriteColor = std::move(other.__fbthrift_field_favoriteColor);
    this->__fbthrift_field_friends = std::move(other.__fbthrift_field_friends);
    this->__fbthrift_field_bestFriend = std::move(other.__fbthrift_field_bestFriend);
    this->__fbthrift_field_petNames = std::move(other.__fbthrift_field_petNames);
    this->__fbthrift_field_afraidOfAnimal = std::move(other.__fbthrift_field_afraidOfAnimal);
    this->__fbthrift_field_vehicles = std::move(other.__fbthrift_field_vehicles);
    __isset = other.__isset;
    return *this;
}


Person::Person(apache::thrift::FragileConstructor, ::cpp2::PersonID id__arg, ::std::string name__arg, ::std::int16_t age__arg, ::std::string address__arg, ::cpp2::Color favoriteColor__arg, ::std::set<::cpp2::PersonID> friends__arg, ::cpp2::PersonID bestFriend__arg, ::std::map<::cpp2::Animal, ::std::string> petNames__arg, ::cpp2::Animal afraidOfAnimal__arg, ::std::vector<::cpp2::Vehicle> vehicles__arg) :
    __fbthrift_field_id(std::move(id__arg)),
    __fbthrift_field_name(std::move(name__arg)),
    __fbthrift_field_age(std::move(age__arg)),
    __fbthrift_field_address(std::move(address__arg)),
    __fbthrift_field_favoriteColor(std::move(favoriteColor__arg)),
    __fbthrift_field_friends(std::move(friends__arg)),
    __fbthrift_field_bestFriend(std::move(bestFriend__arg)),
    __fbthrift_field_petNames(std::move(petNames__arg)),
    __fbthrift_field_afraidOfAnimal(std::move(afraidOfAnimal__arg)),
    __fbthrift_field_vehicles(std::move(vehicles__arg)) { 
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
  __isset.set(folly::index_constant<2>(), true);
  __isset.set(folly::index_constant<3>(), true);
  __isset.set(folly::index_constant<4>(), true);
  __isset.set(folly::index_constant<5>(), true);
  __isset.set(folly::index_constant<6>(), true);
  __isset.set(folly::index_constant<7>(), true);
  __isset.set(folly::index_constant<8>(), true);
  __isset.set(folly::index_constant<9>(), true);
}


void Person::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_id = ::cpp2::PersonID();
  this->__fbthrift_field_name = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_age = ::std::int16_t();
  this->__fbthrift_field_address = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  ::apache::thrift::clear(this->__fbthrift_field_favoriteColor);
  this->__fbthrift_field_friends.clear();
  this->__fbthrift_field_bestFriend = ::cpp2::PersonID();
  this->__fbthrift_field_petNames.clear();
  this->__fbthrift_field_afraidOfAnimal = ::cpp2::Animal();
  this->__fbthrift_field_vehicles.clear();
  __isset = {};
}

void Person::__fbthrift_clear_terse_fields() {
}

bool Person::__fbthrift_is_empty() const {
  return false;
}

bool Person::operator==([[maybe_unused]] const Person& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool Person::operator<([[maybe_unused]] const Person& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}

const ::cpp2::Color* Person::get_favoriteColor() const& {
  return favoriteColor_ref().has_value() ? std::addressof(__fbthrift_field_favoriteColor) : nullptr;
}

::cpp2::Color* Person::get_favoriteColor() & {
  return favoriteColor_ref().has_value() ? std::addressof(__fbthrift_field_favoriteColor) : nullptr;
}

const ::std::set<::cpp2::PersonID>* Person::get_friends() const& {
  return friends_ref().has_value() ? std::addressof(__fbthrift_field_friends) : nullptr;
}

::std::set<::cpp2::PersonID>* Person::get_friends() & {
  return friends_ref().has_value() ? std::addressof(__fbthrift_field_friends) : nullptr;
}

const ::std::map<::cpp2::Animal, ::std::string>* Person::get_petNames() const& {
  return petNames_ref().has_value() ? std::addressof(__fbthrift_field_petNames) : nullptr;
}

::std::map<::cpp2::Animal, ::std::string>* Person::get_petNames() & {
  return petNames_ref().has_value() ? std::addressof(__fbthrift_field_petNames) : nullptr;
}

const ::std::vector<::cpp2::Vehicle>* Person::get_vehicles() const& {
  return vehicles_ref().has_value() ? std::addressof(__fbthrift_field_vehicles) : nullptr;
}

::std::vector<::cpp2::Vehicle>* Person::get_vehicles() & {
  return vehicles_ref().has_value() ? std::addressof(__fbthrift_field_vehicles) : nullptr;
}


void swap([[maybe_unused]] Person& a, [[maybe_unused]] Person& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_id, b.__fbthrift_field_id);
  swap(a.__fbthrift_field_name, b.__fbthrift_field_name);
  swap(a.__fbthrift_field_age, b.__fbthrift_field_age);
  swap(a.__fbthrift_field_address, b.__fbthrift_field_address);
  swap(a.__fbthrift_field_favoriteColor, b.__fbthrift_field_favoriteColor);
  swap(a.__fbthrift_field_friends, b.__fbthrift_field_friends);
  swap(a.__fbthrift_field_bestFriend, b.__fbthrift_field_bestFriend);
  swap(a.__fbthrift_field_petNames, b.__fbthrift_field_petNames);
  swap(a.__fbthrift_field_afraidOfAnimal, b.__fbthrift_field_afraidOfAnimal);
  swap(a.__fbthrift_field_vehicles, b.__fbthrift_field_vehicles);
  swap(a.__isset, b.__isset);
}

template void Person::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Person::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Person::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Person::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Person::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Person::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Person::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Person::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        Person,
        ::apache::thrift::type_class::structure,
        ::cpp2::Color>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        Person,
        ::apache::thrift::type_class::list<::apache::thrift::type_class::structure>,
        ::std::vector<::cpp2::Vehicle>>,
    "inconsistent use of json option");

} // cpp2

namespace cpp2 { namespace {
[[maybe_unused]] FOLLY_ERASE void validateAdapters() {
}
}} // cpp2
namespace apache::thrift::detail::annotation {
}
