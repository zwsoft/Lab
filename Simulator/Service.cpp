// Service.cpp : CService µÄÊµÏÖ

#include "stdafx.h"
#include "Service.h"


// CService

STDMETHODIMP CService::Add(LONG n1, LONG n2, LONG* ret)
{
	if (ret) {
		*ret = n1 + n2;
	} 
	return S_OK;
}

STDMETHODIMP CService::Multiply(LONG n1, LONG n2, LONG* ret)
{
	if (ret) {
		*ret = n1 * n2;
	} 
	return S_OK;
}