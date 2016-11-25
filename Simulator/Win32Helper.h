#pragma once

#ifndef GUID_DEFINED
#define GUID_DEFINED

typedef struct _GUID {
	unsigned long  Data1;
	unsigned short Data2;
	unsigned short Data3;
	unsigned char  Data4[ 8 ];
} GUID;

#endif

typedef GUID CLSID;
typedef CLSID *LPCLSID;

typedef GUID IID;
extern const IID GUID_NULL;
#define CLSID_NULL          GUID_NULL

#define REFGUID const GUID &
#define REFCLSID const IID &
#define REFIID const IID &

typedef long LONG;
typedef LONG HRESULT;
#define _HRESULT_TYPEDEF_(_sc) ((HRESULT)_sc)

#define S_OK                                   ((HRESULT)0L)
#define E_FAIL                           _HRESULT_TYPEDEF_(0x80004005L)
#define E_NOINTERFACE                    _HRESULT_TYPEDEF_(0x80004002L)

#define SUCCEEDED(hr) (((HRESULT)(hr)) >= 0)
#define FAILED(hr) (((HRESULT)(hr)) < 0)

typedef 
	enum tagCLSCTX
{	
	CLSCTX_INPROC_SERVER	= 0x1,
	CLSCTX_INPROC_HANDLER	= 0x2,
	CLSCTX_LOCAL_SERVER	= 0x4,
	CLSCTX_INPROC_SERVER16	= 0x8,
	CLSCTX_REMOTE_SERVER	= 0x10,
	CLSCTX_INPROC_HANDLER16	= 0x20,
	CLSCTX_RESERVED1	= 0x40,
	CLSCTX_RESERVED2	= 0x80,
	CLSCTX_RESERVED3	= 0x100,
	CLSCTX_RESERVED4	= 0x200,
	CLSCTX_NO_CODE_DOWNLOAD	= 0x400,
	CLSCTX_RESERVED5	= 0x800,
	CLSCTX_NO_CUSTOM_MARSHAL	= 0x1000,
	CLSCTX_ENABLE_CODE_DOWNLOAD	= 0x2000,
	CLSCTX_NO_FAILURE_LOG	= 0x4000,
	CLSCTX_DISABLE_AAA	= 0x8000,
	CLSCTX_ENABLE_AAA	= 0x10000,
	CLSCTX_FROM_DEFAULT_CONTEXT	= 0x20000,
	CLSCTX_ACTIVATE_32_BIT_SERVER	= 0x40000,
	CLSCTX_ACTIVATE_64_BIT_SERVER	= 0x80000,
	CLSCTX_ENABLE_CLOAKING	= 0x100000,
	CLSCTX_PS_DLL	= ( int  )0x80000000
} 	CLSCTX;

typedef unsigned long       DWORD;
typedef void             *LPVOID;