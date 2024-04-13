#include<iostream.h>
#include<conio.h>
class fraction
{
private:
	int num,denum;
public:
	fraction(){}
	fraction(int x,int y)
	{
		num=x;
		denum=y;
	}
	void display()
	{
		cout<<num<<"/"<<denum<<endl;
	}

	fraction operator+(fraction obj)
	{
obj.num=num*obj.denum+denum*obj.num;
obj.denum=denum*obj.denum;
obj.num=obj.num%obj.denum;
return obj;
	}
};

int main()
{
	fraction a(1,1),b(2,2),c;
	cout<<"first fraction";

	a.display();
	cout<<"second fraction";
	b.display();
	cout<<"sum";
	c=a+b;
	c.display();
	getch();
	return 0;
}