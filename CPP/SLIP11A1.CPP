#include<iostream.h>
#include<conio.h>

class myarray
{
public:
       int *arr,i,sum;
public:
	myarray(int n)
	{
	sum=0;
	arr=new int(n);
	for(i=0;i<n;i++)
	{
	cout<<"enter"<<i+1<<":";
	cin>>arr[i];
	sum=sum+arr[i];
	cout<<"the addition in "<<sum;
	}
	}
	~myarray()
	{
cout<<"distroyed";
	}

};

int main()
{
int a;
cout<<"enter the elements";
cin>>a;
myarray obj(a);
getch();
return 0;

}