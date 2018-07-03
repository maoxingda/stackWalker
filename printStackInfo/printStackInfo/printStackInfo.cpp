// printStackInfo.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "StackWalker.h"

void f1()
{
	StackWalker sw;
	sw.start();
}

void f2()
{
	f1();
}

void f3()
{
	f2();
}

int _tmain(int argc, _TCHAR* argv[])
{
	f3();

	getchar();

	return 0;
}

