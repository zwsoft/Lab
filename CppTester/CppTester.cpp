// CppTester.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <Windows.h>
#include <iostream>
using namespace std;

class A {
public:
	virtual ~A() {
		cout << "A out.";
	}
};

class B {
public:
	 ~B() {
		cout << "B out";
	}
};

class C : public A, public B {
public:
	~C() {
		cout << "C out";
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	C* pC = new C();
	A* pA = dynamic_cast<A*>(pC);
	delete pA;

	return 0;
}

