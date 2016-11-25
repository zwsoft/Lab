// Service.h : CService µÄÉùÃ÷

#pragma once

#ifdef ZW_COM_WRAPPER
#include "ServiceHelper.h"
#else
#include "resource.h"       // Ö÷·ûºÅ
#include "ATLServer_i.h"
#endif


using namespace ATL;


// CService

class ATL_NO_VTABLE CService :
	public CComObjectRootEx<CComSingleThreadModel>,
#ifndef ZW_COM_WRAPPER
	public CComCoClass<CService, &CLSID_Service>,
	public IDispatchImpl<IService, &IID_IService, &LIBID_ATLServerLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
	,public IDispatchImpl<IService2>
#else
	public IService,
	public IService2
#endif
{
public:
	CService()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_SERVICE)


BEGIN_COM_MAP(CService)
	COM_INTERFACE_ENTRY(IService)
	COM_INTERFACE_ENTRY(IService2)
	COM_INTERFACE_ENTRY2(IDispatch, IService)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:

	STDMETHOD(Add)(LONG n1, LONG n2, LONG* ret);
	STDMETHOD(Multiply)(LONG n1, LONG n2, LONG* ret);
};

#ifndef ZW_COM_WRAPPER
OBJECT_ENTRY_AUTO(__uuidof(Service), CService)
#endif