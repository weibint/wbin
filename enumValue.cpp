#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	enum extIfLedStartupStages
	{
		EXT_LED_ST_INIT,
		EXT_LED_ST_BUSY,
		EXT_LED_ST_STEADY,
		EXT_LED_ST_FINISHED,
		EXT_LED_ST_END
	};
	int cal[] = 
	{
		EXT_LED_ST_INIT,
		EXT_LED_ST_BUSY,
		EXT_LED_ST_STEADY,
		EXT_LED_ST_FINISHED,
		EXT_LED_ST_END
	};

	extIfLedStartupStages extIfSS;
	extIfSS = EXT_LED_ST_INIT;

	int calNum = sizeof(cal)/sizeof(int);
	cout<<"extIfLedStartupStages:"<<extIfSS<<endl;

	for(int i=0; i<calNum; i++)
	{
		cout<<cal[i]<<endl;
		if(cal[i] == EXT_LED_ST_END)
		{
			cout<<"EXT_STARTUP_ST_END:"<<cal[i]<<endl;
		}
	}

	return 0;
}
