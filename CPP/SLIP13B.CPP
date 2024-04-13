#include<iostream.h>
#include<conio.h>

class cuboid 
{
private:
	float l,br,h;
public:
	void setvalue(float a,float b,float c )
	{
		l=a;
		br=b;
		h=c;
	}

	void getvalue()
	{
		cout<<endl<<"cuboid data"<<endl;
		cout<<"length"<<l<<endl;
		cout<<"breadth"<<br<<endl;
		cout<<"height"<<h<<endl;
	}
	inline float volume()
	{
		return(l*br*h);
	}
	inline float area()
	{
		return(2*(l*br)+(br*h)+(l+h));
	}
};

void main()
{
	float l,b,h;
	clrscr();
	cout<<"enter length";cin>>l;
	cout<<"enter breath";cin>>b;
	cout<<"enter height";cin>>h;

	cuboid obj;
	obj.setvalue(l,b,h);
	obj.getvalue();
	cout<<endl<<"volume="<<obj.volume();
	cout<<endl<<"surface area="<<obj.area();
	getch();
}