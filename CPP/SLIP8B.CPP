#include<iostream.h>
#include<conio.h>
#include<string.h>

class person{
private:
	long long mobile_no;
	int age,len;
	char *person_name,*city;
public:
	void set(long long m,int a,const char *p,const char *c)
	{
		mobile_no=m;
		age=a;

		len=strlen(p);
		person_name=new char[len+1];
		strcpy(person_name,p);

		len=strlen(c);
		city=new char[len+1];
		strcpy(city,c);
	}

	void getdata()
	{
		cout<<endl<<"name="<<person_name;
		cout<<endl<<"mobile="<<mobile_no;
		cout<<endl<<"age="<<age;
		cout<<endl<<"city="<<city;
	}
	int search(long long m)
	{
		if(m==mobile_no)
			return 1;
		return 0;
	}

	int search(const char *p)
	{
		if(strcmp(p,person_name)==0)
			return 1;
		return 0;

	}

	int city1(char *c)
	{
		if(strcmp(c,city)==0)
			return 1;
		return 0;
	}
};

int main()
{
	person p[10];
	p[0].set(1111111111,23,"hi","pune");
	p[1].set(1111122222,24,"he","une");
	p[2].set(1111133333,33,"hr","pun");

	long long mob;
	int i;
	int ans=0;
	cout<<endl<<"enter the mobile no to search";
	cin>>mob;
	for(i=0;i<3;i++)
	{
		if(p[i].search(mob))
		{
		p[i].getdata();
		ans=1;
	}
	}

	ans=0;
	char name[30];
	cout<<endl<<"enter the name to search";
	cin>>name;
	for(i=0;i<3;i++)
	{
		if (p[i].search(name))
		{
		p[i].getdata();
		ans=1;
	}
}

	ans=0;
	cout<<endl<<"city";
	cin>>name;
	for(i=0;i<3;i++)
	{
		if(p[i].city1(name))
		{
		p[i].getdata();
		ans=1;
	}
}
	getch();
	return 0;
}