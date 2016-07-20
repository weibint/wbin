#include <stdio.h>
#include <iostream>

using namespace std;

int fn1(int i, int j=1)
{
	i=i+5;
	return i;
}

int main()
{
	int i=10;
	int m=0;
	m = fn1(i);
	cout<<m<<endl;
	return 0;
}
