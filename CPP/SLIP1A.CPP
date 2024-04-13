#include<iostream.h>
#include<conio.h>
inline int max(int a,int b)
       {
	return (a>b)?a:b;
	}
	void main()
	{
	int x,y;
	cout<<"enter x"; cin>>x;
	cout<<"enter y"; cin>>y;
	int z=max(x,y);
	(z==x)?cout<<y:cout<<x;
	cout<<"is min"<<z<<"is max";
	getch();
	}