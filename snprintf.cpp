#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char buf[50]="";
	char src1[10]="hello %s";
	char src2[10]="world %s";
	char src3[20]="Are you ok?";
	int len=snprintf(buf,sizeof(buf),"%s\\%-20s\\%s\n",src1,src2,src3);

	printf("buf=%s\n",buf);

	return 0;
}
