// Service.cpp : CService ��ʵ��

#include "stdafx.h"
#include "Service.h"


// CService


STDMETHODIMP CService::Add(LONG n1, LONG n2, LONG* ret)
{
	// TODO: �ڴ����ʵ�ִ���
	if (ret) {
		*ret = n1 + n2;
	} 
	return S_OK;
}
