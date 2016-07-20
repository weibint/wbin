#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

int main()
{
	char sentence[]="This is#a sentence with#7 tokens";
	char sentenceBase[]="Thissfwo";
	int* sentence2;
	int i = 0;
	cout<<sizeof(int)<<endl;
	string str=string(sentence);
	cout<<str<<":"<<sizeof(sentence)<<endl;
	/*
	while(1)
	{
		sentence2=(int*)malloc(sizeof(sentenceBase)+sizeof(sentence2));
		cout<<"sentence2 length:"<<i<<"->"<<sizeof(*sentence2)<<endl;
	    i=i*10000;
		free(sentence2);
	}
	bool flag = false;
	if(sentence2==NULL)
	{
		return 1;
	}
   
	
	flag = strncpy(sentence2,sentence,sizeof(sentence));
	flag = strncpy(sentence,sentence2,sizeof(sentence));
	cout<<"sentence length:"<<sizeof(sentence)<<endl;
	cout<<"sentenceBase length:"<<sizeof(sentenceBase)<<endl;
	cout<<"sentence2 length:"<<sizeof(sentence2)<<endl;
	cout<<"sentence2:"<<sentence2<<endl;

	cout<<"flag:"<<flag<<endl;

	cout<<"The string to be tokenized is:\n"<<sentence<<"\n\nThe tokens are:\n\n"<<endl;

	char *tokenPtr=strtok(sentence,"#");
	cout<<"\n tokenPtr length:"<<strlen(tokenPtr)<<endl;
	while(tokenPtr!=NULL)
	{
		cout<<tokenPtr<<endl;
		tokenPtr=strtok(NULL,"#");
	}
	cout<<"\nAfter strtok, sentence="<<tokenPtr<<endl;
    
	*/
	return 0;
}
