// Service.cpp : CService 的实现

#include "stdafx.h"
#include "Service.h"


// CService


STDMETHODIMP CService::Add(LONG n1, LONG n2, LONG* ret)
{
	// TODO: 在此添加实现代码
	if (ret) {
		*ret = n1 + n2;
	} 
	return S_OK;
}
