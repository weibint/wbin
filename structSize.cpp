#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

typedef struct
{
	const char* uname;
	int number;
	long sn[2];
}CMDDEF;

typedef struct
{
    char* user[];
	int age;
	float score;
	CMDDEF cmddef[10];
}USER;

typedef struct
{
	int n1;
	int n2;
	int n3[10];
	int n4;
}INTLEN;

int main()
{
	char* uname;
	long sn;
	CMDDEF student;
	USER liming;
	INTLEN intlen;
	CMDDEF teachers[]=
	{
		{"wanglei",
		 1,
		 {12345,23456}
		},
		{"zhangyang",
		 2,
		 {34567,45678}
		},
		{"lifeng",
		 3,
		 {9876,32153}
		}
	};
	cout<<"size of teachers:"<<sizeof(teachers)<<endl;
	cout<<"size of CMDDEF:"<<sizeof(CMDDEF)<<endl;
	cout<<"element number of teachers:"<<(sizeof(teachers)/sizeof(CMDDEF))<<endl;
	/*
    cout<<student.number<<endl;
	cout<<sizeof(sn)<<endl;
	cout<<"INTLEN:"<<sizeof(INTLEN)<<endl;
	cout<<sizeof(uname)<<endl;
	cout<<sizeof(CMDDEF)<<endl;
	cout<<sizeof(USER)<<endl;

	cout<<"check the struct address:"<<endl;
	cout<<"USER ADDRESS:"<<&liming<<":"<<liming.user<<endl;
	cout<<"CMDDEF ADDRESS:"<<&student<<":"<<&(student.uname)<<endl;
	cout<<"INTLEN ADDRESS:"<<&intlen<<":"<<&(intlen.n1)<<endl;
    */
	return 0;
}
