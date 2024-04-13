#include<iostream.h>
#include<conio.h>

class person{
	char name[20];
	char addr[30];
	float salary;
	float taxamt;

public:
	person(){
		cout<<"enter the name";cin>>name;
		cout<<"enter the address";cin>>addr;
		cout<<"enter the salary";cin>>salary;
		if(salary <= 20000)
		{
			taxamt=(salary*(0));
		}
		else if (salary>20000 & salary<=40000)
		{
			taxamt=(salary*(0.5));
		}
		else if (salary>40000)
		{
			taxamt=(salary*(0.10));
		}
	}

	void display(){
		cout<<"name"<<name<<endl;
		cout<<"address"<<addr<<endl;
		cout<<"salary"<<salary<<endl;
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