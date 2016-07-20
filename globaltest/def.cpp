#include <stdio.h>
#include <iostream>
#include "def.h"
using namespace std;

int g_age;
int g_total;
int g_rc;
int g_fun(void){
cout<<"g_fun has been called"<<endl;
return OK;
}

bool age_sumary(int g_age, int g_total){
if(g_total-g_age > 0 )
   {
     return true;
   }
else{return false;}
}
