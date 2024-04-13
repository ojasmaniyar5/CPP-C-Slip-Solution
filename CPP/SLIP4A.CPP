#include<iostream.h>
#include<conio.h>

class worker{
public:
	char name[50];
	int hr,payrate,salary;
public:
	worker()
	{
		cout<<"enter the name of worker:"<<endl;
		cin>>name;
		cout<<"enter the number of hours worked";
		cin>>hr;
	}

	void tsalary()
	{
		payrate=100;
		salary=hr*payrate;

		cout<<endl<<"total hours worked="<<hr;
		cout<<endl<<"payable="<<payrate;
		cout<<endl<<"salary of worker is"<<salary;


	}
};

void main()
{
	worker w;
	w.tsalary();
	getch();
}