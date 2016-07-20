#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
  int arr[2][3]={0,1,2,3,4,5};
  cout<<"the arr value is:"<<arr<<endl;
  cout<<"the arr[0] value is:"<<arr[0]<<endl;
  cout<<"the arr[1] value is:"<<arr[1]<<endl;

  cout<<"the &arr[0][0] value is:"<<&arr[0][0]<<endl;
  cout<<"the &arr[0][1] value is:"<<&arr[0][1]<<endl;
  cout<<"the &arr[1][0] value is:"<<&arr[1][0]<<endl;

  cout<<"the length of arr is:"<<sizeof(arr)<<endl; 
  cout<<"the length of int is:"<<sizeof(int)<<endl;

  return 0;
}
