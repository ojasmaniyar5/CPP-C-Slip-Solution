#include<iostream.h>
#include<conio.h>

class square
{
	friend class rectangle;
	int side;
	public:
	square(int s)
	{
		side=s;
	}
	
};

class rectangle
{

int l;
int b;
public:
	int getarea()
	{
		return l*b;
	}
	void shape(square a)
	{
		l=a.side;
		b=a.side;
	}

};

int main()
{
	square square(5);
	rectangle rectangle;
	clrscr();
	rectangle.shape(square);
	cout<<"rectangle"<<rectangle.getarea();
	getch();
	return 0;
}