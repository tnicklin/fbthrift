#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import folly.iobuf as _fbthrift_iobuf
import thrift.py3.types
import thrift.py3.exceptions
from thrift.py3.types import __NotSet, NOTSET
import typing as _typing
from typing_extensions import Final

import sys
import itertools
import apache.thrift.type.id.types as _apache_thrift_type_id_types
import apache.thrift.type.standard.types as _apache_thrift_type_standard_types


__property__ = property


class GeneratePatch(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        pass

    def __init__(
        self, 
    ) -> None: ...

    def __call__(
        self, 
    ) -> GeneratePatch: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['GeneratePatch'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'GeneratePatch') -> bool: ...
    def __gt__(self, other: 'GeneratePatch') -> bool: ...
    def __le__(self, other: 'GeneratePatch') -> bool: ...
    def __ge__(self, other: 'GeneratePatch') -> bool: ...

    def _to_python(self) -> "apache.thrift.op.patch.thrift_types.GeneratePatch": ...   # type: ignore
    def _to_py3(self) -> GeneratePatch: ...
    def _to_py_deprecated(self) -> "thrift.lib.thrift.patch.ttypes.GeneratePatch": ...   # type: ignore

class GeneratePatchNew(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        pass

    def __init__(
        self, 
    ) -> None: ...

    def __call__(
        self, 
    ) -> GeneratePatchNew: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['GeneratePatchNew'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'GeneratePatchNew') -> bool: ...
    def __gt__(self, other: 'GeneratePatchNew') -> bool: ...
    def __le__(self, other: 'GeneratePatchNew') -> bool: ...
    def __ge__(self, other: 'GeneratePatchNew') -> bool: ...

    def _to_python(self) -> "apache.thrift.op.patch.thrift_types.GeneratePatchNew": ...   # type: ignore
    def _to_py3(self) -> GeneratePatchNew: ...
    def _to_py_deprecated(self) -> "thrift.lib.thrift.patch.ttypes.GeneratePatchNew": ...   # type: ignore

class AssignOnlyPatch(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        pass

    def __init__(
        self, 
    ) -> None: ...

    def __call__(
        self, 
    ) -> AssignOnlyPatch: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['AssignOnlyPatch'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'AssignOnlyPatch') -> bool: ...
    def __gt__(self, other: 'AssignOnlyPatch') -> bool: ...
    def __le__(self, other: 'AssignOnlyPatch') -> bool: ...
    def __ge__(self, other: 'AssignOnlyPatch') -> bool: ...

    def _to_python(self) -> "apache.thrift.op.patch.thrift_types.AssignOnlyPatch": ...   # type: ignore
    def _to_py3(self) -> AssignOnlyPatch: ...
    def _to_py_deprecated(self) -> "thrift.lib.thrift.patch.ttypes.AssignOnlyPatch": ...   # type: ignore

FieldId = int
