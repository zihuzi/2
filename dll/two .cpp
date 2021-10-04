#include <iostream.h>   
class base
{   
public:   
	virtual ~base(){};   
	virtual void func()   const   
	{   
		cout   <<"base   output!"<<endl;   
	}   
};   
class   derive1:public   base   
{
public:
	void   func()   const   
	{   
		cout   <<"derive1   output!"<<endl;  
	}   
};   
class   derive2   :public   derive1   
{   
public:   
	void   func()   const  
	{   
		cout   <<"derive2   output!"<<endl;  
	}   
};   
void   test(const   base   &   rBase)   
{   
	rBase.func();   
};   
void   main()   
{   
	base   bObj;     
	derive1   d1Obj;   
	derive2   d2Obj;   
	test(bObj);   	//test   base   object
	test(d1Obj);   //test   derive1   object 
	test(d2Obj);   //test   derive2   object
}
