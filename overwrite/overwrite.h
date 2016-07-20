
typedef unsigned int          U32;
typedef unsigned short int    U16;
typedef unsigned char         U8;
typedef int                   S32;
typedef short int             S16;
typedef signed       char     S8;

class CscdFpBase
{
	public:
		CscdFpBase(void);
		virtual ~CscdFpBase(void);
		virtual void initialize(void);
		virtual void combineStatus();
	    virtual U16 combineFpSupervisionBasic(int, int);
	    U8 mFpIndex;
		U8 mState;
};

class CscdFpTrx: public CscdFpBase
{
	public:
		static CscdFpTrx* getInstance(void);
		U16 combineFpSupervisionBasic(int, int);
    private:
		CscdFpTrx();
		virtual ~CscdFpTrx();
		void initialize(void);
		static  CscdFpTrx *sInstance;
		static  CscdFpTrx *mInstance;
};

class CscdFpRrx: public CscdFpBase
{
	public:
		U16 combineFpSupervisionBasic(int, int);
};


