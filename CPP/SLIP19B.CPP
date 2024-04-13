#include<iostream.h>
#include<conio.h>

class media{
public:
	virtual void display()=0;
};

class newspaper:public media
{
private:
	char nname[20],neditor[20];
	int price,nop;
public:
	void getnewspaper()
	{
		cout<<"enter the name of newspaper";cin>>nname;
		cout<<"enter the editor of newspaper";cin>>neditor;
		cout<<"enter the price of newspaper";cin>>price;
		cout<<"enter the no of paper in newspaper";cin>>nop;
		
	}

	void display()
	{
		cout<<"name of newspaper"<<nname<<endl;
		cout<<"editor of newspaper"<<neditor<<endl;
		cout<<"price of newspaper"<<price<<endl;
		cout<<"no of paper in newspaper"<<nop;

	}
};

class magzine:public media
{
private:
	char mname[20],meditor[20];
	int mprice;
public:
	void getmagzine()
	{
		cout<<"enter the name of magzine";cin>>mname;
		cout<<"enter the editor of magzine";cin>>meditor;
		cout<<"enter the price of magzine";cin>>mprice;		
	}

	void display()
	{
		cout<<"name of magzine"<<mname<<endl;
		cout<<"editor of magzine"<<meditor<<endl;
		cout<<"price of magzine"<<mprice<<endl;


	}
};

int main(){
    newspaper n;
    magzine m;
    clrscr();
   n.getnewspaper();
    cout<<endl<<"newspaper Details:";
    n.display();
    cout<<endl;
    m.getmagzine();
    cout<<endl<<"magzine Details:";
    m.display();
    return 0;
}

