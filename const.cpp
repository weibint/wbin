#include <stdio.h>
#include <iostream>

using namespace std;
int gi=10;

void fun1(void){
static int li =20;
gi=li++;
}

int main(){
	const int steps=7;
	const int &rsteps=steps;
//fun1();
//fun1();
    for(int i=0;i<steps;i++)
	{
		fun1();
 //... 
    }
	cout<<"static gi:"<<gi<<endl;
	cout<<"input one int:"<<endl;
	int setInt1[100];
    int setInt2[100];
	int setInt3[100];
	int setInt4[100];
	int setInt5[100];
	int setInt6[100];
	int *getInt;

	for(int i=0;i<sizeof(setInt1)/sizeof(int);i++)
	{
		setInt1[i] = i+1;
		setInt2[i] = i+2;
		setInt3[i] = i+3;
		setInt4[i] = i+4;
		setInt5[i] = i+5;
		setInt6[i] = i+6;
	}
	getInt = setInt1;
	cout<<"&getInt:"<<&getInt<<"::"<<getInt<<"::"<<*getInt<<endl;
	getInt = setInt2;
	cout<<"&getInt+100:"<<&getInt<<"::"<<getInt<<"::"<<*getInt<<endl;
	getInt = setInt3;
	cout<<"&getInt+200:"<<&getInt<<"::"<<getInt<<"::"<<*getInt<<endl;
	getInt = setInt4;
	cout<<"&getInt+300:"<<&getInt<<"::"<<getInt<<"::"<<*getInt<<endl;
	getInt = setInt5;
	cout<<"&getInt+400:"<<&getInt<<"::"<<getInt<<"::"<<*getInt<<endl;
	getInt = setInt6;
	cout<<"&getInt+400:"<<&getInt<<"::"<<getInt<<"::"<<*getInt<<endl;

	cout<<"setInt1[0]:"<<setInt1[0]<<endl;
	cout<<"setInt2[0]:"<<setInt2[0]<<endl;
	cout<<"setInt3[0]:"<<setInt3[0]<<endl;
	cout<<"setInt4[0]:"<<setInt4[0]<<endl;
	cout<<"setInt5[0]:"<<setInt5[0]<<endl;
	cout<<"setInt6[0]:"<<setInt6[0]<<endl;
	cout<<"setInt[99]:"<<setInt1[99]<<endl;
	cout<<"getInt+99:"<<*(getInt+99)<<endl;
	return 0;
}
