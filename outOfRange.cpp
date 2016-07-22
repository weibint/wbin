#include <stdio.h>
#include <iostream>
#include <unistd.h>
#include <ctime>

using namespace std;

void Delay(int time)
{
	clock_t now = clock();
	while(clock()-now < time);
}

int main()
{
	unsigned char test = 0;
	int i =0;
	while(1)
	{
		test = (unsigned char)i;
		i++;
		cout<<(int)test<<"||"<<i<<endl;
		//Delay(2000);
		//sleep(1);
	}

	return 0;
}
