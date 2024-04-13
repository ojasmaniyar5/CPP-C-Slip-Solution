
#include<iostream.h>
#include<conio.h>

class myarray{
private:
	int *arr,i,sum;

public:
	myarray(int n){
		sum=0;
		arr=new int(n);
		for(i=0;i<n;i++)
		{
			cout<<"enter"<<i+1<<":";
			cin>>arr[i];
			sum=sum+arr[i];
			cout<<"the addition is"<<sum<<endl;
		}
	}

	~myarray(){
		cout<<"distroyed";
	}
};

void main(){
	int v;
	clrscr();
	cout<<"enter the element:";
	cin>>v;

	myarray obj(v);
	getch();

}