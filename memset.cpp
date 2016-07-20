#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;

int main(){

int *mem_check= new int[4];
cout<<"before memset"<<endl;
for(int i=0;i<4;i++)
{
  *mem_check=i;
  cout<<*mem_check<<endl;
  cout<<mem_check<<endl;
  mem_check++;
}
memset(mem_check,256,4*sizeof(int));
mem_check--;
cout<<"after memset"<<endl;
for(int i=0;i<4;i++){
cout<<*mem_check<<endl;
cout<<mem_check<<endl;
mem_check--;
}
return 0;
}
