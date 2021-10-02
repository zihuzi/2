#include <iostream.h>
#include <stdio.h>
#include   <string.h> 
typedef char string80[80]; 
class Date
{
public:
	Date() {}
	Date(int y, int m, int d) 
	{ 
		SetDate(y, m, d); 
	}
	void SetDate(int y, int m, int d)
	{
		Year = y;
		Month = m;
		Day = d;
	} 
	string80& GetStringDate(string80 &Date)
	{
		sprintf(Date, "%d/%d/%d", Year, Month, Day);
		return Date;
	}
protected: 
	int Year, Month, Day; 
}; 
class Time 
{
public: 
	Time() {} 
	Time(int h, int m, int s) 
	{ 
		SetTime(h, m, s); 
	} 
	void SetTime(int h, int m, int s)
	{ 
		Hours = h; 
		Minutes = m; 
		Seconds = s; 
	}
	string80& GetStringTime(string80 &Time)
	{
		sprintf(Time, "%d:%d:%d", Hours, Minutes, Seconds);
		return Time;
	} 
protected:
	int Hours, Minutes, Seconds;
};
class TimeDate:public Date, public Time
{
public:
	TimeDate():Date() {} 
	TimeDate(int y, int mo, int d, int h, int mi, int s):Date(y,mo,d), Time(h,mi,s) {} 
	string80& GetStringDT(string80 &DTstr) 
	{ 
		sprintf(DTstr, "%d/%d/%d;%d:%d:%d", Year, Month, Day, Hours, Minutes, Seconds); 
		return DTstr;
	} 
}; 
void main() 
{ 
	TimeDate date1, date2(2008, 6, 5, 10, 15, 05); 
	string80 DemoStr; 
	date1.SetDate(2008, 9, 10); 
	date1.SetTime(19, 07, 30); 
	cout<<"The date1 date and time is:"<<date1.GetStringDT(DemoStr)<<endl;
	cout<<"The date1 date is:"<<date1.GetStringDate(DemoStr)<<endl;
	cout<<"The date1 time is:"<<date1.GetStringTime(DemoStr)<<endl;
	cout<<"The date2 date and time is:"<<date2.GetStringDT(DemoStr)<<endl;
} 
