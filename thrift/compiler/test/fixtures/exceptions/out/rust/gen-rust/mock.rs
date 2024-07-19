// @generated by Thrift for thrift/compiler/test/fixtures/exceptions/src/module.thrift
// This file is probably not the place you want to edit!

//! Mock definitions for `module`.
//!
//! Client mocks. For every service, a struct TheService that implements
//! client::TheService.
//!
//! As an example of the generated API, for the following thrift service in
//! example.thrift:
//!
//! ```thrift
//! service MyService {
//!     FunctionResponse myFunction(
//!         1: FunctionRequest request,
//!     ) throws {
//!         1: StorageException s,
//!         2: NotFoundException n,
//!     ),
//!
//!     // other functions
//! }
//! ```
//!
//! we would end up with this mock object in an `example_mocks` crate:
//!
//! ```
//! # const _: &str = stringify! {
//! impl example_clients::MyService for MyService<'mock> {...}
//!
//! pub struct MyService<'mock> {
//!     pub myFunction: myFunction<'mock>,
//!     // ...
//! }
//!
//! impl myFunction<'mock> {
//!     // directly return the given success response
//!     pub fn ret(&self, value: FunctionResponse);
//!
//!     // invoke closure to compute success response
//!     pub fn mock(
//!         &self,
//!         mock: impl FnMut(FunctionRequest) -> FunctionResponse + Send + Sync + 'mock,
//!     );
//!
//!     // invoke closure to compute response
//!     pub fn mock_result(
//!         &self,
//!         mock: impl FnMut(FunctionRequest) -> Result<FunctionResponse, example_services::errors::MyFunctionExn> + Send + Sync + 'mock,
//!     );
//!
//!     // return one of the function's declared exceptions
//!     pub fn throw<E>(&self, exception: E)
//!     where
//!         E: Clone + Into<example_services::errors::MyFunctionExn> + Send + Sync + 'mock;
//! }
//! # };
//! ```
//!
//! The intended usage from a test would be:
//!
//! ```
//! # const _: &str = stringify! {
//! use std::sync::Arc;
//! use example_clients::MyService;
//!
//! #[tokio::test]
//! async fn test_my_client() {
//!     let mock = Arc::new(example_mocks::new::<dyn MyService>());
//!
//!     // directly return a success response
//!     let resp = FunctionResponse {...};
//!     mock.myFunction.ret(resp);
//!
//!     // or give a closure to compute the success response
//!     mock.myFunction.mock(|request| FunctionResponse {...});
//!
//!     // or throw one of the function's exceptions
//!     mock.myFunction.throw(StorageException::ItFailed);
//!
//!     // or compute a Result (useful if your exceptions aren't Clone)
//!     mock.myFunction.mock_result(|request| Err(...));
//!
//!     let out = do_the_thing(mock).await.unwrap();
//!     assert!(out.what_i_expected());
//! }
//!
//! async fn do_the_thing(
//!     client: Arc<dyn MyService + Send + Sync + 'static>,
//! ) -> Out {...}
//! # };
//! ```

#![recursion_limit = "100000000"]
#![allow(non_camel_case_types, non_snake_case, non_upper_case_globals, unused_crate_dependencies, unused_imports, clippy::all)]

pub(crate) use :: as types;
pub(crate) use :: as client;
pub(crate) use ::::errors;

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

pub struct Raiser<'mock> {
    pub doBland: r#impl::raiser::doBland<'mock>,
    pub doRaise: r#impl::raiser::doRaise<'mock>,
    pub get200: r#impl::raiser::get200<'mock>,
    pub get500: r#impl::raiser::get500<'mock>,
    _marker: ::std::marker::PhantomData<&'mock ()>,
}

impl crate::DynClient for dyn ::::Raiser {
    type Mock<'mock> = Raiser<'mock>;
    fn mock<'mock>() -> Self::Mock<'mock> {
        Raiser {
            doBland: r#impl::raiser::doBland::unimplemented(),
            doRaise: r#impl::raiser::doRaise::unimplemented(),
            get200: r#impl::raiser::get200::unimplemented(),
            get500: r#impl::raiser::get500::unimplemented(),
            _marker: ::std::marker::PhantomData,
        }
    }
}

impl<'mock> ::::Raiser for Raiser<'mock> {
    fn doBland(
        &self,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::raiser::DoBlandError>> {
        let mut closure = self.doBland.closure.lock().unwrap();
        let closure: &mut dyn ::std::ops::FnMut() -> _ = &mut **closure;
        ::std::boxed::Box::pin(::futures::future::ready(closure()))
    }
    fn doRaise(
        &self,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::raiser::DoRaiseError>> {
        let mut closure = self.doRaise.closure.lock().unwrap();
        let closure: &mut dyn ::std::ops::FnMut() -> _ = &mut **closure;
        ::std::boxed::Box::pin(::futures::future::ready(closure()))
    }
    fn get200(
        &self,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<::std::string::String, crate::errors::raiser::Get200Error>> {
        let mut closure = self.get200.closure.lock().unwrap();
        let closure: &mut dyn ::std::ops::FnMut() -> _ = &mut **closure;
        ::std::boxed::Box::pin(::futures::future::ready(closure()))
    }
    fn get500(
        &self,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<::std::string::String, crate::errors::raiser::Get500Error>> {
        let mut closure = self.get500.closure.lock().unwrap();
        let closure: &mut dyn ::std::ops::FnMut() -> _ = &mut **closure;
        ::std::boxed::Box::pin(::futures::future::ready(closure()))
    }
}

impl<'mock, T> ::::RaiserExt<T> for Raiser<'mock>
where
    T: ::fbthrift::Transport,
{    fn doBland_with_rpc_opts(
        &self,
        _rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::raiser::DoBlandError>> {
        <Self as ::::Raiser>::doBland(
            self,
        )
    }
    fn doRaise_with_rpc_opts(
        &self,
        _rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::raiser::DoRaiseError>> {
        <Self as ::::Raiser>::doRaise(
            self,
        )
    }
    fn get200_with_rpc_opts(
        &self,
        _rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<::std::string::String, crate::errors::raiser::Get200Error>> {
        <Self as ::::Raiser>::get200(
            self,
        )
    }
    fn get500_with_rpc_opts(
        &self,
        _rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<::std::string::String, crate::errors::raiser::Get500Error>> {
        <Self as ::::Raiser>::get500(
            self,
        )
    }

    fn transport(&self) -> &T {
        ::fbthrift::help::GetTransport::transport(self)
    }
}

impl<'mock, T> ::fbthrift::help::GetTransport<T> for Raiser<'mock>
where
    T: ::fbthrift::Transport,
{
    fn transport(&self) -> &T {
        unimplemented!("RaiserExt::transport is not implemented for mock client")
    }
}

pub mod r#impl {
    pub mod raiser {

        pub struct doBland<'mock> {
            pub(crate) closure: ::std::sync::Mutex<::std::boxed::Box<
                dyn ::std::ops::FnMut() -> ::std::result::Result<
                    (),
                    ::::errors::raiser::DoBlandError,
                > + ::std::marker::Send + ::std::marker::Sync + 'mock,
            >>,
        }

        #[allow(clippy::redundant_closure)]
        impl<'mock> doBland<'mock> {
            pub(crate) fn unimplemented() -> Self {
                Self {
                    closure: ::std::sync::Mutex::new(::std::boxed::Box::new(|| panic!(
                        "{}::{} is not mocked",
                        "Raiser",
                        "doBland",
                    ))),
                }
            }

            pub fn ret(&self, value: ()) {
                self.mock(move || value.clone());
            }

            pub fn mock(&self, mut mock: impl ::std::ops::FnMut() -> () + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move || ::std::result::Result::Ok(mock()));
            }

            pub fn mock_result(&self, mut mock: impl ::std::ops::FnMut() -> ::std::result::Result<(), ::::errors::raiser::DoBlandError> + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move || mock());
            }

            pub fn throw<E>(&self, exception: E)
            where
                E: ::std::convert::Into<::::errors::raiser::DoBlandError>,
                E: ::std::clone::Clone + ::std::marker::Send + ::std::marker::Sync + 'mock,
            {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move || ::std::result::Result::Err(exception.clone().into()));
            }
        }

        pub struct doRaise<'mock> {
            pub(crate) closure: ::std::sync::Mutex<::std::boxed::Box<
                dyn ::std::ops::FnMut() -> ::std::result::Result<
                    (),
                    ::::errors::raiser::DoRaiseError,
                > + ::std::marker::Send + ::std::marker::Sync + 'mock,
            >>,
        }

        #[allow(clippy::redundant_closure)]
        impl<'mock> doRaise<'mock> {
            pub(crate) fn unimplemented() -> Self {
                Self {
                    closure: ::std::sync::Mutex::new(::std::boxed::Box::new(|| panic!(
                        "{}::{} is not mocked",
                        "Raiser",
                        "doRaise",
                    ))),
                }
            }

            pub fn ret(&self, value: ()) {
                self.mock(move || value.clone());
            }

            pub fn mock(&self, mut mock: impl ::std::ops::FnMut() -> () + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move || ::std::result::Result::Ok(mock()));
            }

            pub fn mock_result(&self, mut mock: impl ::std::ops::FnMut() -> ::std::result::Result<(), ::::errors::raiser::DoRaiseError> + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move || mock());
            }

            pub fn throw<E>(&self, exception: E)
            where
                E: ::std::convert::Into<::::errors::raiser::DoRaiseError>,
                E: ::std::clone::Clone + ::std::marker::Send + ::std::marker::Sync + 'mock,
            {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move || ::std::result::Result::Err(exception.clone().into()));
            }
        }

        pub struct get200<'mock> {
            pub(crate) closure: ::std::sync::Mutex<::std::boxed::Box<
                dyn ::std::ops::FnMut() -> ::std::result::Result<
                    ::std::string::String,
                    ::::errors::raiser::Get200Error,
                > + ::std::marker::Send + ::std::marker::Sync + 'mock,
            >>,
        }

        #[allow(clippy::redundant_closure)]
        impl<'mock> get200<'mock> {
            pub(crate) fn unimplemented() -> Self {
                Self {
                    closure: ::std::sync::Mutex::new(::std::boxed::Box::new(|| panic!(
                        "{}::{} is not mocked",
                        "Raiser",
                        "get200",
                    ))),
                }
            }

            pub fn ret(&self, value: ::std::string::String) {
                self.mock(move || value.clone());
            }

            pub fn mock(&self, mut mock: impl ::std::ops::FnMut() -> ::std::string::String + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move || ::std::result::Result::Ok(mock()));
            }

            pub fn mock_result(&self, mut mock: impl ::std::ops::FnMut() -> ::std::result::Result<::std::string::String, ::::errors::raiser::Get200Error> + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move || mock());
            }

            pub fn throw<E>(&self, exception: E)
            where
                E: ::std::convert::Into<::::errors::raiser::Get200Error>,
                E: ::std::clone::Clone + ::std::marker::Send + ::std::marker::Sync + 'mock,
            {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move || ::std::result::Result::Err(exception.clone().into()));
            }
        }

        pub struct get500<'mock> {
            pub(crate) closure: ::std::sync::Mutex<::std::boxed::Box<
                dyn ::std::ops::FnMut() -> ::std::result::Result<
                    ::std::string::String,
                    ::::errors::raiser::Get500Error,
                > + ::std::marker::Send + ::std::marker::Sync + 'mock,
            >>,
        }

        #[allow(clippy::redundant_closure)]
        impl<'mock> get500<'mock> {
            pub(crate) fn unimplemented() -> Self {
                Self {
                    closure: ::std::sync::Mutex::new(::std::boxed::Box::new(|| panic!(
                        "{}::{} is not mocked",
                        "Raiser",
                        "get500",
                    ))),
                }
            }

            pub fn ret(&self, value: ::std::string::String) {
                self.mock(move || value.clone());
            }

            pub fn mock(&self, mut mock: impl ::std::ops::FnMut() -> ::std::string::String + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move || ::std::result::Result::Ok(mock()));
            }

            pub fn mock_result(&self, mut mock: impl ::std::ops::FnMut() -> ::std::result::Result<::std::string::String, ::::errors::raiser::Get500Error> + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move || mock());
            }

            pub fn throw<E>(&self, exception: E)
            where
                E: ::std::convert::Into<::::errors::raiser::Get500Error>,
                E: ::std::clone::Clone + ::std::marker::Send + ::std::marker::Sync + 'mock,
            {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move || ::std::result::Result::Err(exception.clone().into()));
            }
        }
    }
}
