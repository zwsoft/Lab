#include "stdafx.h"
#include "ComHelper.h"

#include <cstring>

#include "Service.h"

inline bool IsEqualGUID(REFGUID rguid1, REFGUID rguid2)
{ 
	return !memcmp(&rguid1, &rguid2, sizeof(GUID)); 
} 

HRESULT CoInitialize(void* pvReserved) {
	return S_OK;
}

void CoUninitialize() {}

HRESULT CoCreateInstance(REFCLSID rclsid, 
	LPUNKNOWN pUnkOuter,
	DWORD dwClsContext, 
	REFIID riid, 
	LPVOID* ppv) 
{
	if (!ppv)
		return E_FAIL;

	IUnknown* pUnk = NULL;
	if (IsEqualGUID(CLSID_Service, rclsid) ) {
		pUnk = (IUnknown*)new CService();
	}

	if (!pUnk)
		return E_FAIL;

	*ppv = NULL;
	if (IsEqualGUID(IID_IService, riid) ) {
		if (dynamic_cast<IService*>(pUnk) ) {
			*ppv = dynamic_cast<IService*>(pUnk);
		}
	}
	else if (IsEqualGUID(IID_IService2, riid) ) {
		if (dynamic_cast<IService2*>(pUnk) ) {
			*ppv = dynamic_cast<IService2*>(pUnk);
		}
	}

	if (!*ppv) {
		delete pUnk;
		return E_FAIL;
	}
	return S_OK;
}
