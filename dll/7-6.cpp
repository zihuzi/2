#include<iostream.h>
#include<iomanip.h>
void main()
{
	 int a[10],i;
     for(i=0;i<=9;i++)
		 a[i]=i;
        for(i=9;i>=0;i--)
			cout<<setw(4)<<a[i];
		cout<<endl;
}
