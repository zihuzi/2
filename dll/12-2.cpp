#include<iostream.h>
class point
{
	int x,y;
public:
    point(int xx,int yy)
    { 
		x=xx;
		y=yy; 
	}
    double area()
    {  
		return 0.0;
	}
};
class circle:public point
{
	int r;
public:
	circle(int xx,int yy,int rr):point(xx,yy)
	{  
		r=rr; 
	}
	double area()
     { 
		return 3.1416*r*r; 
	}
};
void main()
{
	point pob(15,15);
	circle cob(20,20,10);
	cout<<"pob.area()=  "<<pob.area()<<endl;//0
	cout<<"cob.area()=  "<<cob.area()<<endl;//3.1416*10*10
	cout<<"cob.point::area()=  "<<cob.point::area()<<endl;//0
}
