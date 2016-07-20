#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	  bool reaChild = false;
	  bool isMtChild = true;
	  char driver='A';
	  const char* cmdString = "show_inf2_staus RE-B";
	  const char* pStart = cmdString;
	  if(isMtChild)
		  {
			  cmdString = strstr(cmdString, "RE-B");
			  if(cmdString != NULL)
			  {
				  printf("show_inf2_status RE-B is running on child RE\n");
			  }
			  else
			  {
				  reaChild = true;
				  printf("show_inf2_status RE-A is runing on child RE\n");
			  }
		  }
	  else
	  {
		  cmdString = pStart;
		  cmdString = strstr(cmdString, "RE-A");
		  if(cmdString != NULL)
		  {
			   printf("show_inf2_status RE-A is runing on mother RE\n");
		  }
	  }
	  cmdString = pStart;
	  cout<<"isMtChild:"<<isMtChild<<endl;
	  cout<<"cmdString:"<<cmdString<<endl;
	  cout<<"reaChild:"<<reaChild<<endl;
	  return 1;
}
