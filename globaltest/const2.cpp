#include <stdio.h>
#include <iostream>
//#include "const.h"

using namespace std;
//int gi=10;
extern int gi;

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
cout<<gi<<endl;
return 0;
}
