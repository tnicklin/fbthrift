#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libcpp.memory cimport shared_ptr

cimport module.types as _fbthrift_ctypes


cdef shared_ptr[_fbthrift_ctypes.cMixin1] Mixin1_convert_to_cpp(object inst) except*
cdef object Mixin1_from_cpp(const shared_ptr[_fbthrift_ctypes.cMixin1]& c_struct)

cdef shared_ptr[_fbthrift_ctypes.cMixin2] Mixin2_convert_to_cpp(object inst) except*
cdef object Mixin2_from_cpp(const shared_ptr[_fbthrift_ctypes.cMixin2]& c_struct)

cdef shared_ptr[_fbthrift_ctypes.cMixin3Base] Mixin3Base_convert_to_cpp(object inst) except*
cdef object Mixin3Base_from_cpp(const shared_ptr[_fbthrift_ctypes.cMixin3Base]& c_struct)

cdef shared_ptr[_fbthrift_ctypes.cFoo] Foo_convert_to_cpp(object inst) except*
cdef object Foo_from_cpp(const shared_ptr[_fbthrift_ctypes.cFoo]& c_struct)

