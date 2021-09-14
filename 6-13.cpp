//#define PI 3.1415926
#include <iostream.h>
void main()
{
	double radius,sr,a,ss;
#ifdef PI
	{
		cout<<"Please input radius:"<<endl;
		cin>>radius;
		sr=PI*radius*radius;
		cout<<"The circle area is:"<<"\t"<<sr<<endl;
	}
#else
	{
		cout<<"Please input a:"<<endl;
		cin>>a;
		ss=a*a;
		cout<<"The square area is:"<<"\t"<<ss<<endl;
	}
#endif
}



