#include <stdio.h>
#include <iostream>

using namespace std;

void printBit(const unsigned char val)
{
	for(int i=7;i>=0;i--)
	{
		if(val&(1<<i))
		  cout<<"1";
		else
		  cout<<"0";
	}
}

int main()
{
	unsigned char uch;
	cout<<"please input the number:";
	cin>>uch;

	printBit(uch);
	cout<<"\n"<<endl;

	for(int j=7;j>=0;j--)
	{
		1<<j;
		int check = j;
		cout<<check<<endl;
	}

	return 0;
}
