#include<iostream.h>
#include<conio.h>
class distance
{
private:
	int m;
	float cm;
public:
	void get()
	{
		cout<<"enter the meter";cin>>m;
		cout<<"enter the centemeter";cin>>cm;
	}
	void put()
	{
		cout<<"meter is"<<m<<endl;
		cout<<"centemeter"<<cm<<endl;
	}
	distance larger(distance d1,distance d2)
	{
		if(d1.m>d2.m)
		return d1;
	else if(d2.m>d1.m)
		return d2;
	else
	{
		if(d1.cm>d2.cm)
			return d1;
		else
			return d2;
	}
	}
};

int main(){
    distance a,b,c;
    cout<<"First Distance = ";
    a.get();
    cout<<"Second Distance = ";
    b.get();
    cout<<"Larger of Both = ";
 c.larger(a,b);
 
c.put();
    getch();
    return 0;
}	
