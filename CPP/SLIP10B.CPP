#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

char v[30];
class city
{
private:
	int code,pop;
	char cname[30];
public:
	void getdata()
	{
		cout<<endl<<"enter city code";cin>>code;
		cout<<"enter city name";cin>>cname;
		cout<<"enter population";cin>>pop;

	}

	int getpop()
	{
		return pop;
	}

	void display()
	{
		cout<<endl<<"code="<<code;
		cout<<endl<<"name="<<cname;
		cout<<endl<<"population="<<pop;

	}
	void check()
	{
		if(cname==v)
		display();
	}
};

void asc(city &x,city &y)
{
	city temp;
	if(x.getpop()>y.getpop())
	{
		temp=x;
		x=y;
		y=temp;
	}
}

int main()
{
	int n=0,i,c;
	cout<<endl<<"Enter number of city:";
	cin>>n;
	city arr[30];
	for(i=0;i<n;i++)
	{
		arr[i].getdata();
	}
	for(i=0;i<n;i++)
	{
		asc(arr[i], arr[i+1]);
	}
	for(i=0;i<n;i++)
	{
		arr[i].display();
	}
	cout<<"enter the name to search";
	cin>>v;
	for(i=0;i<n;i++)
	{
		arr[i].check();
	}
	getch();
	return 0;
}