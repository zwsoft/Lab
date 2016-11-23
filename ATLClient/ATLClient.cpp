// ATLClient.cpp : WinMain µÄÊµÏÖ


#include "stdafx.h"
#include "resource.h"
#include "ATLClient_i.h"



class CATLClientModule : public ATL::CAtlExeModuleT< CATLClientModule >
	{
public :
	DECLARE_LIBID(LIBID_ATLClientLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ATLCLIENT, "{2BE8BB87-7B27-43DD-9F88-C40AEEA9121A}")
	};

CATLClientModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, 
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

