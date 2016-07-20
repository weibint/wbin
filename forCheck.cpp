#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int i=0;
	int j=0;
	for(;;)
	{
		cout<<"check:"<<i<<endl;
		i++;
		if(i==1883023)
		{
			cout<<"\nend:"<<i<<"\n"<<endl;
			return i;
		} 
	}
	return 0;
}
