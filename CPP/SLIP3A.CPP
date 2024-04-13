#include<iostream.h>
#include<conio.h>
void swap(int &a,int &b)
{
int c=a;
a=b;
b=c;
}
void main()
{
int a,b;
cout<<"enter 1st num:";cin>>a;
cout<<"enter 2nd num:";cin>>b;
swap(a,b);
cout<<"number after swaping"<<a<<"and"<<b<<endl;
getch();
}