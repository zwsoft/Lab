#include "stdafx.h"

#include <atlbase.h>
#include <atlcom.h>

#include "../ATLServer/Service.h"
#include "../ATLServer/ATLServer_i.c"

int _tmain(int argc, _TCHAR* argv[])
{
	HRESULT hr;
	hr = ::CoInitialize(0);
	if (FAILED(hr) )
		return 0;

	do {
		IService* service;
		hr = ::CoCreateInstance(CLSID_Service, NULL, CLSCTX_INPROC_SERVER, 
			IID_IService, (void**)&service);
		if (FAILED(hr) )
			break;

		long ret;
		hr = service->Add(10, 10, &ret);
		if (FAILED(hr) )
			break;

		cout << "COM return: " << ret << endl;
	} while (false);

	::CoUninitialize();
	return 0;
}