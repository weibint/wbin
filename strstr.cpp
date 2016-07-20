#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char str[]="tanweibinshiyonglianlishanxiutanchengshi";
	char strMe[]="tanweibin";
	char strMother[]="shiyonglian";
	char strWife[]="lishanxiu";
	char strSon[]="tanchengshi";

	string s_str("tanweibinlishanxiu");
	string s_strMe("tanweibin");

	cout<<s_str.find(s_strMe)<<endl;

	char *pstrMe,*pstrMother,*pstrWife,*pstrSon;

	pstrMe=strstr(str,strMe);
	pstrWife=strstr(str,strWife);
	pstrMother=strstr(str,strMother);
	pstrSon=strstr(str,strSon);

	cout<<"me:"<<&pstrMe<<"("<<pstrMe<<")"<<endl;
	cout<<"Wife:"<<&pstrWife<<"("<<pstrWife<<")"<<endl;
	cout<<"Mother:"<<&pstrMother<<"("<<pstrMother<<")"<<endl;
	cout<<"Son:"<<&pstrSon<<"("<<pstrSon<<")"<<endl;

	return 0;
}
