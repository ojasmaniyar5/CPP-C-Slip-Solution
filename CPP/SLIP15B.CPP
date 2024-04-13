#include<iostream.h>
#include<conio.h>
#include<string.h>
class seller
{
	public:
	char sname[30],pname[30];
	int sqty,tqty,month,commission;
public:
seller(){}
	void setdata(char saname[30],char prname[30],int saqty,int toqty,int mon)
	{
				strcpy(sname,saname);
				strcpy(pname,prname);
				tqty=toqty;
				month=mon;
				sqty=saqty;

				if(sqty>tqty)
					commission=25+10;

				else if(sqty=tqty)
					commission=10;
				else
					commission=0;
}
	void display()
	{
		cout<<"seller name"<<sname<<endl;
		cout<<"product name"<<pname<<endl;
		cout<<"sale quality"<<sqty<<endl;
		cout<<"taret qty"<<tqty<<endl;
		cout<<"month"<<month<<endl;
		cout<<"commission"<<commission;
	}
};

int main()
{
	seller s[3];
	s[0].setdata("hi","hello",10,8,4);
	s[1].setdata("i","hel",13,15,6);
	s[2].setdata("h","llo",21,25,4);
	for(int i=0;i<3;i++)
	{
		s[i].display();
	}
	getch();
	return 0;
}