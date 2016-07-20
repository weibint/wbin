#include <stdio.h>

void byteOrder()
{
	union
	{
		int vlaue;
		//short value0;
		char union_bytes[sizeof(int)];
	}test;
	//test.value0 =0x0304;
	test.vlaue = 0x01030402;//value的值覆盖value0到值。最后一个赋值会把前面的值覆盖掉.
	//test.value0 = 0x0304;
	printf("size of int:%d\n",sizeof(int));
	printf("union_bytes[0]:%d\t",test.union_bytes[0]);
	printf("union_bytes[3]:%d\n",test.union_bytes[3]);
	if(test.union_bytes[0] == 1 && test.union_bytes[3] == 2)
	{
		printf("big endian\n");
	}
	else if(test.union_bytes[0] == 2 && test.union_bytes[3] == 1)
	{
		printf("little endian\n");
	}
	else
	{
		printf("unknow...\n");
	}
}

int main()
{
	byteOrder();
	
	return 0;
}
