#include<iostream.h>
#include<conio.h>
#define pi 3.14

inline float area(int r)
{
return(pi*r*r);
}
inline float circum(int r)
{
return(2*pi*r);
}
inline int dia(int r)
{
return(2*r);
}

void main()
{
 int r;
 clrscr();
 cout<<"enter radius";cin>>r;
 cout<<"area:"<<area(r)<<endl;
 cout<<"circum"<<circum(r)<<endl;
 cout<<"diameter"<<dia(r);
 getch();
 }