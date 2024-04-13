#include<iostream.h>
#include<conio.h>

class string{
private:
	char str[50];
public:
	string()
	{
		cout<<"enter the string:"; cin>>str;
	}
	void display()
	{
		cout<<"current string"<<str<<endl;
		}
	void replace(char c1,char c2);
};

void string::replace(char c1,char c2='x')
{

	for(int i=0;i<sizeof(str);i++)
	{
		if(str[i]==c1)
			str[i]=c2;
	}
}

int main()
{
	char c;
	string s;
       s.display();
	cout<<"enter character to replace";cin>>c;
	s.replace(c);
	s.display();
	getch();
	return 0;
}
