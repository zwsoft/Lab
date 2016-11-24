// Service.h : CService ������

#pragma once
#include "resource.h"       // ������



#include "ATLServer_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE ƽ̨(�粻�ṩ��ȫ DCOM ֧�ֵ� Windows Mobile ƽ̨)���޷���ȷ֧�ֵ��߳� COM ���󡣶��� _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA ��ǿ�� ATL ֧�ִ������߳� COM ����ʵ�ֲ�����ʹ���䵥�߳� COM ����ʵ�֡�rgs �ļ��е��߳�ģ���ѱ�����Ϊ��Free����ԭ���Ǹ�ģ���Ƿ� DCOM Windows CE ƽ̨֧�ֵ�Ψһ�߳�ģ�͡�"
#endif

using namespace ATL;


// CService

class ATL_NO_VTABLE CService :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CService, &CLSID_Service>,
	public IDispatchImpl<IService, &IID_IService, &LIBID_ATLServerLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CService()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_SERVICE)


BEGIN_COM_MAP(CService)
	COM_INTERFACE_ENTRY(IService)
	COM_INTERFACE_ENTRY(IDispatch)
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
};

#ifndef CONSOLE
OBJECT_ENTRY_AUTO(__uuidof(Service), CService)
#endif