#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int i,j;
	i=((0&1)^1);
    const char* ch1="unkonw";
	const char* ch2="abc";
	const char* ch3="abcd";
	const char* ch4="edf";
	const char* ch=((ch2==ch3)?ch1:ch4);
	cout<<ch<<endl;

	cout<<"0&1:"<<(0&1)<<endl;
	cout<<"0&0:"<<(0&0)<<endl;
	cout<<"1&1:"<<(1&1)<<endl;
	cout<<"0^1:"<<(0^1)<<endl;
	cout<<"0^0:"<<(0^0)<<endl;
	cout<<"1^1:"<<(1^1)<<endl;

	cout<<"5&3:"<<(5&3)<<endl;
	cout<<"5^3:"<<(5^3)<<endl;


	cout<<"***************"<<endl;
	cout<<"5%2:"<<5%2<<endl;
	cout<<"5/3:"<<(5.0/3)<<endl;

	return 0;
}
