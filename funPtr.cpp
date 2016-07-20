#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

void fun1()
{
	cout<<"fun1 is called"<<endl;
}

int fun2(int a)
{
	cout<<"fun2 is called"<<endl;
	return a*a;
}

bool fun3(int b)
{
	cout<<"fun3 is called, and the cal result:"<<(b+b)<<endl;
	return true;
}

void* fun4()
{
	cout<<"fun4 is called"<<endl;
}

void fun5()
{
	cout<<"fun5"<<endl;
}

void fun6()
{
	cout<<"fun6"<<endl;
}

void fun7()
{
	cout<<"fun7"<<endl;
}

int main()
{
	int x=10;
	int sum;
	bool isOK = false;
	/*
	void (*pfun1)();
	int (*pfun2)(int);
	bool (*pfun3)(int);
	void* (*pfun4)();

	pfun1 = fun1;
	pfun2 = fun2;
	pfun3 = fun3;
	pfun4 = fun4;

	pfun1();
	sum = pfun2(x);
	isOK = pfun3(x);
	pfun4();

	cout<<"isOK:"<<isOK<<endl;
	cout<<"a*a:"<<sum<<endl;

	*/
	return 0;
}
