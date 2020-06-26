#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cimport cython as __cython
from cpython.bytes cimport PyBytes_AsStringAndSize
from cpython.object cimport PyTypeObject, Py_LT, Py_LE, Py_EQ, Py_NE, Py_GT, Py_GE
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr, make_unique
from libcpp.string cimport string
from libcpp cimport bool as cbool
from libcpp.iterator cimport inserter as cinserter
from cpython cimport bool as pbool
from cython.operator cimport dereference as deref, preincrement as inc, address as ptr_address
import thrift.py3.types
cimport thrift.py3.types
cimport thrift.py3.exceptions
from thrift.py3.types cimport (
    translate_cpp_enum_to_python,
    SetMetaClass as __SetMetaClass,
    constant_shared_ptr,
    default_inst,
    NOTSET as __NOTSET,
)
cimport thrift.py3.std_libcpp as std_libcpp
cimport thrift.py3.serializer as serializer
from thrift.py3.serializer import deserialize, serialize
import folly.iobuf as __iobuf
from folly.optional cimport cOptional

import sys
import itertools
from collections.abc import Sequence, Set, Mapping, Iterable
import warnings
import weakref as __weakref
import builtins as _builtins

cimport hsmodule.types_reflection as _types_reflection


@__cython.auto_pickle(False)
cdef class HsFoo(thrift.py3.types.Struct):

    def __init__(
        HsFoo self, *,
        MyInt=None
    ):
        if MyInt is not None:
            if not isinstance(MyInt, int):
                raise TypeError(f'MyInt is not a { int !r}.')
            MyInt = <cint64_t> MyInt

        self._cpp_obj = move(HsFoo._make_instance(
          NULL,
          NULL,
          MyInt,
        ))

    def __call__(
        HsFoo self,
        MyInt=__NOTSET
    ):
        ___NOTSET = __NOTSET  # Cheaper for larger structs
        cdef bint[1] __isNOTSET  # so make_instance is typed

        changes = False
        if MyInt is ___NOTSET:
            __isNOTSET[0] = True
            MyInt = None
        else:
            __isNOTSET[0] = False
            changes = True


        if not changes:
            return self

        if MyInt is not None:
            if not isinstance(MyInt, int):
                raise TypeError(f'MyInt is not a { int !r}.')
            MyInt = <cint64_t> MyInt

        inst = <HsFoo>HsFoo.__new__(HsFoo)
        inst._cpp_obj = move(HsFoo._make_instance(
          self._cpp_obj.get(),
          __isNOTSET,
          MyInt,
        ))
        return inst

    @staticmethod
    cdef unique_ptr[cHsFoo] _make_instance(
        cHsFoo* base_instance,
        bint* __isNOTSET,
        object MyInt 
    ) except *:
        cdef unique_ptr[cHsFoo] c_inst
        if base_instance:
            c_inst = make_unique[cHsFoo](deref(base_instance))
        else:
            c_inst = make_unique[cHsFoo]()

        if base_instance:
            # Convert None's to default value. (or unset)
            if not __isNOTSET[0] and MyInt is None:
                deref(c_inst).MyInt = default_inst[cHsFoo]().MyInt
                deref(c_inst).__isset.MyInt = False
                pass

        if MyInt is not None:
            deref(c_inst).MyInt = MyInt
            deref(c_inst).__isset.MyInt = True
        # in C++ you don't have to call move(), but this doesn't translate
        # into a C++ return statement, so you do here
        return move_unique(c_inst)

    def __iter__(self):
        yield 'MyInt', self.MyInt

    def __bool__(self):
        return True

    @staticmethod
    cdef create(shared_ptr[cHsFoo] cpp_obj):
        inst = <HsFoo>HsFoo.__new__(HsFoo)
        inst._cpp_obj = move_shared(cpp_obj)
        return inst

    @property
    def MyInt(self):

        return deref(self._cpp_obj).MyInt


    def __hash__(HsFoo self):
        if not self.__hash:
            self.__hash = hash((
            self.MyInt,
            ))
        return self.__hash

    def __repr__(HsFoo self):
        return f'HsFoo(MyInt={repr(self.MyInt)})'
    def __copy__(HsFoo self):
        cdef shared_ptr[cHsFoo] cpp_obj = make_shared[cHsFoo](
            deref(self._cpp_obj)
        )
        return HsFoo.create(move_shared(cpp_obj))

    def __richcmp__(self, other, op):
        cdef int cop = op
        if not (
                isinstance(self, HsFoo) and
                isinstance(other, HsFoo)):
            if cop == Py_EQ:  # different types are never equal
                return False
            elif cop == Py_NE:  # different types are always notequal
                return True
            else:
                return NotImplemented

        cdef cHsFoo* cself = (<HsFoo>self)._cpp_obj.get()
        cdef cHsFoo* cother = (<HsFoo>other)._cpp_obj.get()
        if cop == Py_EQ:
            return deref(cself) == deref(cother)
        elif cop == Py_NE:
            return deref(cself) != deref(cother)
        elif cop == Py_LT:
            return deref(cself) < deref(cother)
        elif cop == Py_LE:
            return deref(cself) <= deref(cother)
        elif cop == Py_GT:
            return deref(cself) > deref(cother)
        elif cop == Py_GE:
            return deref(cself) >= deref(cother)
        else:
            return NotImplemented

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__HsFoo()

    cdef __iobuf.IOBuf _serialize(HsFoo self, __Protocol proto):
        cdef __iobuf.cIOBufQueue queue = __iobuf.cIOBufQueue(__iobuf.cacheChainLength())
        cdef cHsFoo* cpp_obj = self._cpp_obj.get()
        if proto == __Protocol.COMPACT:
            with nogil:
                serializer.CompactSerialize[cHsFoo](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.BINARY:
            with nogil:
                serializer.BinarySerialize[cHsFoo](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.JSON:
            with nogil:
                serializer.JSONSerialize[cHsFoo](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.COMPACT_JSON:
            with nogil:
                serializer.CompactJSONSerialize[cHsFoo](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        return __iobuf.from_unique_ptr(queue.move())

    cdef cuint32_t _deserialize(HsFoo self, const __iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cHsFoo]()
        cdef cHsFoo* cpp_obj = self._cpp_obj.get()
        if proto == __Protocol.COMPACT:
            with nogil:
                needed = serializer.CompactDeserialize[cHsFoo](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.BINARY:
            with nogil:
                needed = serializer.BinaryDeserialize[cHsFoo](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.JSON:
            with nogil:
                needed = serializer.JSONDeserialize[cHsFoo](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.COMPACT_JSON:
            with nogil:
                needed = serializer.CompactJSONDeserialize[cHsFoo](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        return needed

    def __reduce__(self):
        return (deserialize, (HsFoo, serialize(self)))


