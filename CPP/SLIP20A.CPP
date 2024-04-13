#include<iostream.h>
#include<conio.h>
class number
{
private:
	int integer;
public:
	number()
	{
		cout<<"enter the integer";cin>>integer;
	}
	int getint()
	{
		return integer;
	}

	int operator ++()
	{
		int z=integer;
		return z++;
	}
	int operator ++(int x)
	{
		int z=integer;
		return ++z;
	}
};

int main()
{
	number x;
	clrscr();
	x.getint();
       cout<<	x++  <<endl;
       cout<<	++x;
       getch();
	return 0;
}