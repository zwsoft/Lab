// dllmain.h : 模块类的声明。

class CATLServerModule : public ATL::CAtlDllModuleT< CATLServerModule >
{
public :
	DECLARE_LIBID(LIBID_ATLServerLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ATLSERVER, "{6D5F0D56-B225-4DCF-89B5-3BB74AFC5C46}")
};

extern class CATLServerModule _AtlModule;
