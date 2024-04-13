#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<iomanip.h>
class machine{
private:
int mid, price;
char mname[30];
public:
machine(int id, int p, char name[30]){
mid = id;
price = p;
strcpy(mname,name);
}
void display(){
cout<<"|"<<setw(3)<<mid<<"|"<<setw(30)<<mname<<"|"<<setw(7)<<price<<"|"<<endl;
}
};
void main(){
clrscr();
machine a(101,92000,"Mach1");
machine b(102,65000,"Mach2");
machine c(103,97000,"Mach3");
machine d(104,43000,"Mach4");
a.display();
b.display();
c.display();
d.display();
getch();
}