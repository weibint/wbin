#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
   char str[]="chinese simple!";
   char *p=str;
  // int str[]={0,1,2,3,4,5,6,7,8,9};
 //  int *p=str;
   for(int i=0;i<sizeof(str);i++)
      {
        cout<<str[i]<<endl;
      }
   cout<<"befor ++*p++ :"<<endl;
   cout<<"str is value:\n"<<str<<endl;
   printf("str is value:%x\n",str);
   cout<<"&str value:\n"<<&str<<endl;
   cout<<"p is value:\n"<<p<<endl;
   cout<<"*p is value:\n"<<*p<<endl;
   cout<<"&p is value:\n"<<&p<<endl;

   cout<<"*p is value:"<<*p<<endl;
   ++*p++;
   cout<<"after ++*p++:"<<endl;
   cout<<"p is value:"<<p<<endl;
   cout<<"*p is value:"<<*p<<endl;
   
   p++;
   cout<<"another p++:"<<*p<<endl;
   cout<<"p is value:"<<p<<endl;  
}
