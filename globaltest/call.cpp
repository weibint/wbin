#include <stdio.h>
#include <iostream>
#include "def.h"

using namespace std;

int main(){
bool ageFlag = false;
cout<<"please input your age!"<<endl;
cin>>g_age;
cout<<"please input your total!"<<endl;
cin>>g_total;
g_rc=g_fun();
cout<<"g_rc value is:"<<g_rc<<endl;
ageFlag = age_sumary(g_age,g_total);
if(true == ageFlag)
  {cout<<"you are approved!"<<endl;}
else
  {cout<<"sorry, you are refused!"<<endl;}
return 0;
}
