#include <iostream.h>
class point
{
public:
	point(int i=0, int j=0) 
	{ 
		x0=i;
		y0=j; 
	}
	virtual void set() = 0;
    virtual void draw() = 0;
protected:
    int x0, y0;
};
class line : public point
{
public:
	line(int i=0, int j=0, int m=0, int n=0):point(i, j)
    {
		x1=m; 
		y1=n;
	}
	void set() { cout<<"line::set() called.\n"; }
    void draw() { cout<<"line::draw() called.\n"; }
protected:
	int x1, y1;
};
class ellipse : public point
{
public:
	ellipse(int i=0, int j=0, int p=0, int q=0):point(i, j)
	{
		x2=p; 
		y2=q;
	}
	void set() { cout<<"ellipse::set() called.\n"; }
	void draw() { cout<<"ellipse::draw() called.\n"; }
protected:
    int x2, y2;
};
void drawobj(point *p)
{
	p->draw();
}
void setobj(point *p)
{
	p->set();
}
void main()
{
	line *lineobj = new line;
    ellipse *elliobj = new ellipse;
    drawobj(lineobj);//line::draw() called.
    drawobj(elliobj);//ellipse::draw() called.
    cout<<endl;
    setobj(lineobj);//line::set() called.
    setobj(elliobj);//ellipse::set() called.
    cout<<"\nRedraw the object...\n";
    drawobj(lineobj);//
    drawobj(elliobj);
}

