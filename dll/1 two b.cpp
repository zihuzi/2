#include<iostream.h>
class base
{
private:
	int x,y;
public:
	base(int xx=0,int yy=0)
	{ 
		x=xx;
		y=yy; 
	}
	virtual  void disp()
	{ 
		cout<<"base: "<<x<<"    "<<y<<endl; 
	}
};   
class base1:public base
{
private:
	int z;
public:
	base1(int xx,int yy,int zz):base(xx,yy)
	{ 
		z=zz; 
	}
	void disp()
	{ 
		cout<<"base1:"<<z<<endl; 
	}
};   
void main()
{
	base obj(3,4),*objp;//x=3,y=4
	base1 obj1(1,2,3);//z=3,x=
	objp=&obj;
	objp->disp();//base:x,y
	objp=&obj1;
	objp->disp();//base1:3
}
