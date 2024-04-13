#include<iostream.h>
#include<conio.h>
#include<string.h>

class student{
public:
	int roll;
	char name[30];
public:
	void setdata()
	{       roll=0;
	cout<<"enter name"<<endl;
		cin>>name;
		cout<<"enter rollno";
		cin>>roll;


	}
	void getdata()
	{
		cout<<"enter rollno"<<roll;
		cout<<"enter name"<<endl;cin>>name;
	}
};

class theory:virtual public student
{
public:
	int m1,m2,m3,m4;
public:
	void settheory()
	{
		cout<<"Enter net marks";cin>>m1;
		cout<<"Enter cpp marks";cin>>m2;
		cout<<"Enter php marks";cin>>m3;
		cout<<"Enter os marks";cin>>m4;
	}
};

class practical:virtual public student
{
	public:
	int p1,p2;
	public:
		void setparc()
		{
			cout<<"enter cpp practical marks";cin>>p1;
			cout<<"enter php practical marks";cin>>p2;

		}
};

class result:public theory,public practical
{
public:
	int tmarks,perc;
	char grade[30];
public:
	void getresult()
	{
		tmarks=m1+m2+m3+m4+p1+p2;
		perc=(tmarks/6);
		if(perc>=90)
		{
		    strcpy( grade,"distinction");
		}
		else if(perc>40)
		{
		       strcpy( grade,"pass"); ;
		}
		else
		{
			strcpy( grade,"fail");;
		}
		cout<<endl<<"result"<<endl;
		getdata();
		cout<<"total marks"<<tmarks<<endl;
		cout<<"percentage"<<perc<<endl;
		cout<<"grade"<<grade<<endl;

	}
};

int main(){
    result stud;
    int ch;
    clrscr();
    while(1){
	cout<<endl<<"-----MENU-----"<<endl<<endl;
	cout<<"1.Accept Student Information"<<endl;
	cout<<"2.Display Student Information"<<endl;
	cout<<"3.Result"<<endl;
	cout<<"4.Exit"<<endl;

	cin>>ch;
	switch(ch)
	{
		case 1:
		stud.getdata();
		stud.settheory();
		stud.setparc();
		break;
		case 2:
		stud.getresult();
		break;
		case 3:
		stud.getresult();
		break;
		case 4:
		return 0;
	}
}
}