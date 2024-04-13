#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

class account{
public:
	int ano;
	char atype[30];
	float bal;
public:
	void getdata()
	{
		cout<<"enter acc.no";cin>>ano;
		cout<<"enter accntype"<<endl;cin>>atype;
		cout<<"enter balance"<<endl;cin>>bal;

	}
	void display()
	{
		cout<<ano<<endl<<atype<<endl<<bal;

	}
};

int main()
{
	int i,n;
account *a=new account[4];
delete[] a;
	cout<<"enter the numbers of account"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		a[i].getdata();
	}
	for(i=0;i<n;i++)
	{
		a[i].display();
	}
	getch();
	return 0;
}