#include<iostream.h>
#include<conio.h>

class person{
public:
	char name[30];
	char addr[30];
	float salary;
	float taxamt;

public:
	person()
	{
		cout<<"Enter the name"<<endl;cin>>name;
		cout<<"Enter the address"<<endl;cin>>addr;
		cout<<"Enter salary"<<endl;cin>>salary;
		if(salary<=20000)
		{
			taxamt=(20000*(0));
		}
		else if(salary>20000 & salary<= 40000)
		{
			taxamt=(20000*(0.5));
		}
		else
		{
			taxamt=(20000*(0.10));
		}
	}
	void display()
	{
		cout<<" name"<<name<<endl;
		cout<<"address"<<addr<<endl;
		cout<<" salary"<<salary<<endl;
		cout<<"taxamt"<<taxamt<<endl;
	}
};
int main()
{
	person p;
	p.display();
	getch();
	return 0;

}
