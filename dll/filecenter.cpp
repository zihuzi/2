#include <iostream.h>
class animal
{
public:
	void sleep()
	{
		cout<<"animal sleep"<<endl;
	}
    void breathe()
	{
		cout<<"animal breathe"<<endl;
	}
};
class fish:public animal
{
public:
	void breathe()
	{
		cout<<"fish bubble"<<endl;
	}
};
void main()
{
	fish fh;
	animal *pAn=&fh;
	pAn->breathe();
}

