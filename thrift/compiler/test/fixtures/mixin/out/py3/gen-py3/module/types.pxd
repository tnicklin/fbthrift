#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
    uint32_t as cuint32_t,
)
from libcpp.string cimport string
from libcpp cimport bool as cbool, nullptr, nullptr_t
from cpython cimport bool as pbool
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.utility cimport move as cmove
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap, pair as cpair
from thrift.py3.exceptions cimport cTException
cimport folly.iobuf as _fbthrift_iobuf
cimport thrift.py3.exceptions
cimport thrift.py3.types
from thrift.py3.types cimport (
    bstring,
    bytes_to_string,
    field_ref as __field_ref,
    optional_field_ref as __optional_field_ref,
    required_field_ref as __required_field_ref,
    terse_field_ref as __terse_field_ref,
    union_field_ref as __union_field_ref,
    get_union_field_value as __get_union_field_value,
)
from thrift.py3.common cimport (
    RpcOptions as __RpcOptions,
    cThriftMetadata as __fbthrift_cThriftMetadata,
    MetadataBox as __MetadataBox,
)
from thrift.python.protocol cimport Protocol as __Protocol
from folly.optional cimport cOptional as __cOptional

cimport module.types_fields as _fbthrift_types_fields

cdef extern from "thrift/compiler/test/fixtures/mixin/gen-py3/module/types.h":
  pass





cdef extern from "thrift/compiler/test/fixtures/mixin/gen-cpp2/module_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass ExceptionMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "thrift/compiler/test/fixtures/mixin/gen-cpp2/module_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass StructMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "thrift/compiler/test/fixtures/mixin/gen-cpp2/module_types_custom_protocol.h" namespace "::cpp2":

    cdef cppclass cMixin1 "::cpp2::Mixin1":
        cMixin1() except +
        cMixin1(const cMixin1&) except +
        bint operator==(cMixin1&)
        bint operator!=(cMixin1&)
        bint operator<(cMixin1&)
        bint operator>(cMixin1&)
        bint operator<=(cMixin1&)
        bint operator>=(cMixin1&)
        __field_ref[string] field1_ref "field1_ref" ()


    cdef cppclass cMixin2 "::cpp2::Mixin2":
        cMixin2() except +
        cMixin2(const cMixin2&) except +
        bint operator==(cMixin2&)
        bint operator!=(cMixin2&)
        bint operator<(cMixin2&)
        bint operator>(cMixin2&)
        bint operator<=(cMixin2&)
        bint operator>=(cMixin2&)
        __field_ref[cMixin1] m1_ref "m1_ref" ()
        __optional_field_ref[string] field2_ref "field2_ref" ()
        __field_ref[string] field1_ref "field1" ()


    cdef cppclass cMixin3Base "::cpp2::Mixin3Base":
        cMixin3Base() except +
        cMixin3Base(const cMixin3Base&) except +
        bint operator==(cMixin3Base&)
        bint operator!=(cMixin3Base&)
        bint operator<(cMixin3Base&)
        bint operator>(cMixin3Base&)
        bint operator<=(cMixin3Base&)
        bint operator>=(cMixin3Base&)
        __field_ref[string] field3_ref "field3_ref" ()


    cdef cppclass cFoo "::cpp2::Foo":
        cFoo() except +
        cFoo(const cFoo&) except +
        bint operator==(cFoo&)
        bint operator!=(cFoo&)
        bint operator<(cFoo&)
        bint operator>(cFoo&)
        bint operator<=(cFoo&)
        bint operator>=(cFoo&)
        __field_ref[string] field4_ref "field4_ref" ()
        __field_ref[cMixin2] m2_ref "m2_ref" ()
        __field_ref[cMixin3Base] m3_ref "m3_ref" ()
        __field_ref[cMixin1] m1_ref "m1" ()
        __optional_field_ref[string] field2_ref "field2" ()
        __field_ref[string] field1_ref "field1" ()
        __field_ref[string] field3_ref "field3" ()




cdef class Mixin1(thrift.py3.types.Struct):
    cdef shared_ptr[cMixin1] _cpp_obj
    cdef _fbthrift_types_fields.__Mixin1_FieldsSetter _fields_setter
    cdef inline object field1_impl(self)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cMixin1])



cdef class Mixin2(thrift.py3.types.Struct):
    cdef shared_ptr[cMixin2] _cpp_obj
    cdef _fbthrift_types_fields.__Mixin2_FieldsSetter _fields_setter
    cdef inline object m1_impl(self)
    cdef inline object field2_impl(self)
    cdef inline object field1_impl(self)
    cdef Mixin1 __fbthrift_cached_m1

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cMixin2])



cdef class Mixin3Base(thrift.py3.types.Struct):
    cdef shared_ptr[cMixin3Base] _cpp_obj
    cdef _fbthrift_types_fields.__Mixin3Base_FieldsSetter _fields_setter
    cdef inline object field3_impl(self)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cMixin3Base])



cdef class Foo(thrift.py3.types.Struct):
    cdef shared_ptr[cFoo] _cpp_obj
    cdef _fbthrift_types_fields.__Foo_FieldsSetter _fields_setter
    cdef inline object field4_impl(self)
    cdef inline object m2_impl(self)
    cdef inline object m3_impl(self)
    cdef inline object m1_impl(self)
    cdef inline object field2_impl(self)
    cdef inline object field1_impl(self)
    cdef inline object field3_impl(self)
    cdef Mixin2 __fbthrift_cached_m2
    cdef Mixin3Base __fbthrift_cached_m3

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cFoo])



