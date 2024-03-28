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
cimport module0.types as _module0_types
cimport module1.types as _module1_types

cimport module2.types_fields as _fbthrift_types_fields

cdef extern from "thrift/compiler/test/fixtures/qualified/gen-py3/module2/types.h":
  pass





cdef extern from "thrift/compiler/test/fixtures/qualified/gen-cpp2/module2_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass ExceptionMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "thrift/compiler/test/fixtures/qualified/gen-cpp2/module2_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass StructMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "thrift/compiler/test/fixtures/qualified/gen-cpp2/module2_types_custom_protocol.h" namespace "::module2":

    cdef cppclass cStruct "::module2::Struct":
        cStruct() except +
        cStruct(const cStruct&) except +
        bint operator==(cStruct&)
        bint operator!=(cStruct&)
        bint operator<(cStruct&)
        bint operator>(cStruct&)
        bint operator<=(cStruct&)
        bint operator>=(cStruct&)
        __field_ref[_module0_types.cStruct] first_ref "first_ref" ()
        __field_ref[_module1_types.cStruct] second_ref "second_ref" ()


    cdef cppclass cBigStruct "::module2::BigStruct":
        cBigStruct() except +
        cBigStruct(const cBigStruct&) except +
        bint operator==(cBigStruct&)
        bint operator!=(cBigStruct&)
        bint operator<(cBigStruct&)
        bint operator>(cBigStruct&)
        bint operator<=(cBigStruct&)
        bint operator>=(cBigStruct&)
        __field_ref[cStruct] s_ref "s_ref" ()
        __field_ref[cint32_t] id_ref "id_ref" ()




cdef class Struct(thrift.py3.types.Struct):
    cdef shared_ptr[cStruct] _cpp_obj
    cdef _fbthrift_types_fields.__Struct_FieldsSetter _fields_setter
    cdef inline object first_impl(self)
    cdef inline object second_impl(self)
    cdef _module0_types.Struct __fbthrift_cached_first
    cdef _module1_types.Struct __fbthrift_cached_second

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cStruct])



cdef class BigStruct(thrift.py3.types.Struct):
    cdef shared_ptr[cBigStruct] _cpp_obj
    cdef _fbthrift_types_fields.__BigStruct_FieldsSetter _fields_setter
    cdef inline object s_impl(self)
    cdef inline object id_impl(self)
    cdef Struct __fbthrift_cached_s

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cBigStruct])



cdef extern from "thrift/compiler/test/fixtures/qualified/gen-cpp2/module2_constants.h" namespace "::module2":
    cdef cStruct cc2 "::module2::module2_constants::c2"()
    cdef cStruct cc3 "::module2::module2_constants::c3"()
    cdef cStruct cc4 "::module2::module2_constants::c4"()
