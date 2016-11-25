#include "stdafx.h"

#include <iostream>

#include "Service.h"

using namespace std;

int main(int argc, char** argv)
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