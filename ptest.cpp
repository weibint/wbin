#include <stdio.h>
#include <iostream>

using namespace std;

void fun1(int a)
{
	a+=a;
	cout<<a<<endl;
}

void fun2(int* b)
{
	(*b)+=*b;
	cout<<"*b:"<<*b<<endl;
}

void fun3(int& c)
{
	c+=c;
	cout<<"c address:"<<&c<<endl;
}

int main()
{
	int x = 5;
	int z = 6;
	int& y=x;

    void* vp = &x;

	fun1(x);
	cout<<"no-pointer x:"<<x<<endl;

	fun2(&y);
	cout<<"&y:"<<y<<endl;

	fun3(x);
	cout<<"refenerce:"<<x<<endl;
	cout<<"x address:"<<&x<<endl;

	*((int*)vp) = 30;

	cout<<"x="<<x<<endl;

	return 0;
}
