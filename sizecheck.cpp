#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
	int u16 = 0x10000;
    cout<<"u16:"<<u16<<endl;

	//char array size check
	/*
	int localCmds;
	const char *localCmd[]=
	{
	    "RE-A",
	    "show_card_role",
		"ose",
		"status_update",
		"tpa on C",
		"tpa off C",
		"tpa on D",
		"tpa off D",
		"tpa on A",
		"tpa off A",
		"tpa on B",
		"tpa off B"
	};
	cout<<sizeof(localCmd)/sizeof(char*)<<endl;

	localCmds = sizeof(localCmd)/sizeof(char*);
	for(int i=0;i<localCmds;i++)
	{
    	cout<<*(localCmd+i)<<endl;
		cout<<localCmd+i<<endl;
	}
	*/

	return 0;
}
