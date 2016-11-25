#pragma once

#include "Win32Helper.h"
#include "IdHelper.h"

// ATL namespace
namespace ATL {}

// ATL macro
#define ATL_NO_VTABLE

#define STDMETHODCALLTYPE

#define  DECLARE_REGISTRY_RESOURCEID(IDR_XXX)

#define BEGIN_COM_MAP(C)
#define	COM_INTERFACE_ENTRY(I)
#define	COM_INTERFACE_ENTRY2(IDispatch, I)
#define END_COM_MAP()

#define DECLARE_PROTECT_FINAL_CONSTRUCT()

#define STDMETHOD(FUNC_NAME) HRESULT FUNC_NAME
#define STDMETHODIMP HRESULT

// ATL class
class CComSingleThreadModel {

};

class IUnknown {
public:
	virtual ~IUnknown() {}
};
class IDispatch : public IUnknown
{
};

// ATL data type
typedef /* [unique] */ IUnknown *LPUNKNOWN;

// ATL template class
template <class T>
class CComObjectRootEx {

};

template <class T, const CLSID* pclsid = &CLSID_NULL>
class CComCoClass
{

};

// ATL function
HRESULT CoInitialize(void* pvReserved);
void CoUninitialize();
HRESULT CoCreateInstance(REFCLSID rclsid, 
	 LPUNKNOWN pUnkOuter,
	 DWORD dwClsContext, 
	 REFIID riid, 
	 LPVOID* ppv);

// ZW
bool IsEqualGUID(REFGUID rguid1, REFGUID rguid2);

