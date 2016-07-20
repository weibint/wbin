#include <stdio.h>
#include <iostream>

using namespace std;

class A{
//	A(){cout<<"A()"<<endl;}
    int x;
	public:

	  static A *st(void);
      virtual int fun(int x);
};

class B:public A{
 
	int y;
	public:
		int fun(int x, int y);

};
void tt();

int A::fun(int x){
return (x*x+1000);
}

int B::fun(int x,int y)
{
	return (x*100+y*10);
}

int yy()
{
   tt();
   A a;
   return a.fun(3);
}

int zz()
{
	B b;
	return b.fun(3,2);
}
int main()
{
 // int getResult=0;
 cout<<yy()<<endl;
 cout<<zz()<<endl;
  return 0;
}
