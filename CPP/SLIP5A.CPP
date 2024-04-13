#include<iostream.h>
#include<conio.h>

class point
{
	int x,y;
public:
	point()
	{
		x=0;
		y=0;
	}
	void setpoint(int a,int b)
	{
		x=a;
		y=b;
	}
      		int getx(void)
				{
					return x;
				}
      		int gety(void)
				{
					return y;
				}

	void showpoint()
	{
		cout<<"a"<<x<<endl;
		cout<<"b"<<y<<endl;
	}
};

int main()
{       clrscr();
	point p1;
	p1.setpoint(5,6);
	p1.showpoint();
	cout<<"p1"<<p1.getx()<<","<<"p2"<<p1.gety()<<endl;
	getch();
	return 0;
}