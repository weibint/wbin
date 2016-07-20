#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

struct Name{
	int arr1[10];
};

int main()
{

	Name na;
	for(int i=0;i<10;i++)
	{
		na.arr1[i]=i;
	}
	//cout<<sizeof(na)<<endl;

	for(int j=0;j<10;j++)
	{
		cout<<na.arr1[j]<<endl;
	}
	cout<<"sizeof arr1:"<<sizeof(na.arr1)/sizeof(int)<<endl;
	memset(na.arr1,0,sizeof(na.arr1));
    cout<<"after arr1 reset:"<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<na.arr1[i]<<endl;
	}
	return 0;
}
