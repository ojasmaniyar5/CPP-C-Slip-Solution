#include<iostream.h>
#include<conio.h>

class number
{
private:
	static int cnt;
public:
	void display()
	{
		cnt++;
		cout<<endl<<"display has been called"<<cnt<<"times"<<endl;
	}
	
};

int number::cnt=0;

int main()
{           clrscr();
	number a;
	number b;

	a.display();
	a.display();
	a.display();
	b.display();
	b.display();
	b.display();
	getch();
	return 0;
}