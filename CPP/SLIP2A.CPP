#include<iostream.h>
#include<conio.h>
#define pi 3.14


float cv(int r,int h)
{
	return (pi*r*r*(h/3));
}
float vol(int r,int h)
{
  return (pi*r*r*h);
}

float vol(int r)
{
	return((4/3)*pi*r*r*r);
}

int main()
{
  int r,h,ch;
  clrscr();
  while(1)
  {
  cout<<"cylinder"<<endl;
  cout<<"cone"<<endl;
  cout<<"sphere"<<endl;
  cout<<"exit"<<endl;
  cout<<"enter the choise";
  cin>>ch;
  switch(ch)
  {
  case 1:
  cout<<"enter the radius";cin>>r;
  cout<<"enter height";cin>>h;
  cout<<"volume of cylinder"<<vol(r,h)<<endl;
  break;
    case 2:
  cout<<"enter the radius";cin>>r;
  cout<<"enter height";cin>>h;
  cout<<"volume of cylinder"<<cv(r,h)<<endl;
  break;
    case 3:
  cout<<"enter the radius";cin>>r;
  cout<<"volume of cylinder"<<vol(r)<<endl;
  break;
  case 0:
  return 0;
  break;
}
}
getch();
return 0;
}