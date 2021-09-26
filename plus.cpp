#define flag 1
#include <iostream.h>
void main()
{
#if flag
	{
		double radius,sr;
		cout<<"Please input radius:"<<endl;
		cin>>radius;
		sr=3.1415926*radius*radius;
		cout<<"The circle area is:"<<"\t"<<sr<<endl;
	}
#else
	{
		double a,ss;
		cout<<"Please input a:"<<endl;
		cin>>a;
		ss=a*a;
		cout<<"The square area is:"<<"\t"<<ss<<endl;
	}
#endif
}
