#include <stdio.h>
#include <iostream>
#include <cstring>
#include "overwrite.h"

using namespace std;

CscdFpTrx* CscdFpTrx::sInstance = NULL;

CscdFpBase::CscdFpBase(void)
{
		initialize();
}

CscdFpBase::~CscdFpBase(void)
{

}

void CscdFpBase::initialize(void)
{
		mState = 0;
}

U16 CscdFpBase::combineFpSupervisionBasic(int i, int j)
{
	//cout<<"Base(i+j):"<<(i+j)<<endl;
	cout<<"NULL"<<endl;
}

U16 CscdFpTrx::combineFpSupervisionBasic(int i, int j)
{
	cout<<"Trx(i*j):"<<(i*j)<<endl;
}

U16 CscdFpRrx::combineFpSupervisionBasic(int i, int j)
{
	cout<<"Rrx(i-j):"<<(i-j)<<endl;
}

void CscdFpBase::combineStatus()
{
	//combineFpSupervisionBasic(2,3);
}

CscdFpTrx::CscdFpTrx()
{
	initialize();
}
CscdFpTrx::~CscdFpTrx()
{
}

void CscdFpTrx::initialize()
{
	mState = 0;
	mFpIndex = 1;
}

CscdFpTrx* CscdFpTrx::getInstance()
{
	if(sInstance == NULL)
	{
		sInstance = new CscdFpTrx();
	}
	return sInstance;
}
int main()
{
	CscdFpBase* base;
	base = new CscdFpRrx;
	base->combineFpSupervisionBasic(3,2);
    //CscdFpTrx::getInstance()->combineStatus();
	//CscdFpTrx* mInstance = new CscdFpTrx();//CscdFpTrx() is one private func.
	//mInstance->combineStatus();//
	return 0;
}
