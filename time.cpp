#include <stdio.h>
#include <iostream>
#include <cstring>
#include <time.h>

using namespace std;
typedef unsigned int U32;
int main()
{

    U32 YrMthDay = 1;
	time_t now;
	time(&now);
	tm* t=localtime(&now);
	printf("%d-%02d-%02d-%02d:%02d:%02d\n",
			t->tm_year + 1900, 
			t->tm_mon + 1,
			t->tm_mday,
			t->tm_hour,
			t->tm_min,
			t->tm_sec);

	YrMthDay = YrMthDay |
		((0x2-0x30)<<28) |
		((0x0-0x30)<<24) |
		((0x1-0x30)<<20) |
		((0xa-0x30)<<16) |
		((0x0-0x30)<<12) |
		((0x4-0x30)<<8) |
		((0x1-0x30)<<4) |
		(0x4-0x30);
	cout<<YrMthDay<<endl;

 /*
   printf("%1x\n",((2-0x30)<<28)|((9-0x30)<<24)|((7-0x30)<<20)|((0-0x30)<<16)|((0-0x30)<<12)|((1-0x30)<<8)|((0-0x30)<<4)|(1-0x30));

   for(;;)
   { 
	   time_t now_time = time(NULL);
	   cout<<now_time<<endl;
   }
*
	struct tm *timenow;
	char strtemp[255];

	time(&now);
	timenow = localtime(&now);
	cout<<asctime(timenow)<<endl;
	*/
	return 0;
}
