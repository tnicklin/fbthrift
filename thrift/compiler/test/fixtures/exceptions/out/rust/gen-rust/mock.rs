// @generated by Thrift for thrift/compiler/test/fixtures/exceptions/src/module.thrift
// This file is probably not the place you want to edit!

#![allow(non_camel_case_types, non_snake_case, non_upper_case_globals, unused_crate_dependencies)]

pub use ::::mock::Raiser;

pub fn new<'mock, Client>() -> Client::Mock<'mock>
where
    Client: ?::std::marker::Sized + DynClient,
{
    Client::mock()
}

pub trait DynClient {
    type Mock<'mock>;
    fn mock<'mock>() -> Self::Mock<'mock>;
}

impl crate::DynClient for dyn ::::Raiser {
    type Mock<'mock> = ::::mock::Raiser::<'mock>;
    fn mock<'mock>() -> Self::Mock<'mock> {
        <dyn ::::Raiser>::mock()
    }
}
