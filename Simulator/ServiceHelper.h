#pragma once

#include "ComHelper.h"

class IService : public virtual IUnknown
{
public:
	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
		/* [in] */ LONG n1,
		/* [in] */ LONG n2,
		/* [retval][out] */ LONG *ret) = 0;

};

class IService2 : public virtual IUnknown
{
public:
	virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Multiply( 
		/* [in] */ LONG n1,
		/* [in] */ LONG n2,
		/* [retval][out] */ LONG *ret) = 0;

};