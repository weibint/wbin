#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

typedef struct{

	int i,j,k;
}CHECKPOINT;

int main()
{
	char c;
    CHECKPOINT checkpoint[10];
	cout<<sizeof(c)<<endl;

	for(int i=0;i<10;i++)
	{
		checkpoint[i].i=i+1;
		checkpoint[i].j=i+2;
		checkpoint[i].k=i+3;
	}

	for(int i=0;i<10;i++)
	{
		cout<<checkpoint[i].i<<endl;
		cout<<checkpoint[i].j<<endl;
		cout<<checkpoint[i].k<<"\n"<<endl;
	}

	return 0;
}
