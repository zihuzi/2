#include <iostream.h> 
class Vehicle 
{
public:
	Vehicle(float speed,int total)
	{ 
		Vehicle::speed = speed; 
		Vehicle::total = total; 
	} 
	virtual void ShowMember()=0;//纯虚函数的定义
protected: 
	float speed; 
	int total; 
}; 
class Car:public Vehicle 
{ 
public: 
	Car(int aird,float speed,int total):Vehicle(speed,total) 
	{ 
		Car::aird = aird; 
	} 
	virtual void ShowMember()//派生类成员函数重载 
	{ 
		cout<<"the speed is : "<<speed<<endl;
		cout<<"the total is : "<<total<<endl;
		cout<<"the aird is : "<<aird<<endl; 
	} 
protected: 
	int aird; 
}; 
void main() 
{ 
	//Vehicle a(100,4);//错误,抽象类不能创建对象 
	Car b(250,150,4); 
	b.ShowMember(); 
}


