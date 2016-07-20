#include <stdio.h>

class human
{
human();
~human();
private:
int age =18;
int high=180;
int weitgh=70;
};

int main()
{
  int i=100;
 printf("the value of i is:%d\n",i);
 printf("the value of i's address is:%x\n",&i);
 cout<<&i<<endl;
 return 0;
}
