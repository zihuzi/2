#include<iostream.h>
#define CIR(r) r*r
#define TEST 
void main()
{
	int x=2;
	int y=3;
	int z;
	z=CIR(x+y);	//z=(x+y)*(x+y)
	cout<<"CIR(x+y)=  "<<z<<endl;
	#ifdef TEST
	cout<<"x=  "<<x<<"\t"<<"y=  "<<y<<endl;
	#endif
	cout<<"z=  "<<z<<endl;
}
