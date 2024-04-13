#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class time{
private:
	int hr,min,sec;
public:
	time()
	{
		cout<<"enter the hours"<<endl;cin>>hr;
		cout<<"enter the minutes"<<endl;cin>>min;
		cout<<"enter the second"<<endl;cin>>sec;
	}
	void format()
	{
		cout<<setw(2)<<setfill('0')<<hr<<":"<<setw(2)<<setfill('0')<<min<<":"<<setw(2)<<setfill('0')<<sec;
	}
	int totime()
	{
		return ((hr*60*60)+(min*60)+sec);
	}

	void diff(time a,time b)
	{
		int x=a.totime();
		int y=b.totime();
		int diff=(x>y)?(x-y):(y-x);

		int s=diff%60;
		diff=diff/60;
		int m=diff%60;
		diff=diff/60;
		int h=diff%60;
		cout<<"difference are";
		cout<<setw(2)<<setfill('0')<<h<<":"<<setw(2)<<setfill('0')<<m<<":"<<setw(2)<<setfill('0')<<s;
	}
};

int main()
{
time a,b;
cout<<"first time";
a.format();
cout<<"second time";
b.format();
a.diff(a,b);
getch();
return 0;
}
