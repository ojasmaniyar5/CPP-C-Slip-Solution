#include<iostream.h>
#include<conio.h>

class product
{
private:
	int pid,qty,price;
	char pname[30];
	static int cnt;
public:
	void accept()
	{
		cout<<"enter the id";cin>>pid;
		cout<<"enter the name";cin>>pname;
		cout<<"enter the qty";cin>>qty;
		cout<<"enter the price";cin>>price;
		cnt++;
	}
	void display()
	{
		cout<<"enter the id"<<endl;cin>>pid;
		cout<<"enter the name"<<endl;cin>>pname;
		cout<<"enter the qty"<<endl;cin>>qty;
		cout<<"enter the price"<<endl;cin>>price;
	}
	static void count()
	{
		cout<<"the count is"<<cnt;
	}
};

int product::cnt;

int main()
{   product p[10];
	int i,n;
	clrscr();
	cout<<"enter the numbers of product";
	cin>>n;
	for(i=0;i<n;i++)
	{
		p[i].accept();
	}
	for(i=0;i<n;i++)
	{
		p[i].display();
	}
	p[n].count();
	getch();
	return 0;
	}








































































