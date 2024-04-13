#include<iostream.h>
#include<iomanip.h>
#include<conio.h>

class MyMatrix{
    private:
        int m[3][3];
    public:
       MyMatrix();
    MyMatrix operator - (MyMatrix obj);
     void display();
};
MyMatrix::MyMatrix(){
            cout<<"Enter Values: "<<endl;
            for(int i=0;i<3;i++)
                for(int j=0;j<3;j++){
                    cout<<"Enter "<<i<<","<<j<<" : ";
                    cin>>m[i][j];
                }
	}
MyMatrix MyMatrix::operator - (MyMatrix obj){  //1st return type  2nd scopre resolution
            for(int i=0;i<3;i++)
                for(int j=0;j<3;j++){
                    obj.m[i][j]=m[i][j]-obj.m[i][j];
                }
            return obj;
        }
 void MyMatrix::display(){
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout<<setw(4)<<m[i][j];
                }
                cout<<endl;
            }
        }

int main(){
    clrscr();
    MyMatrix a=MyMatrix();
    MyMatrix b=MyMatrix();
    cout<<endl<<"Matrix A : "<<endl;
    a.display();
    cout<<endl<<"Matrix B : "<<endl;
    b.display();
    cout<<endl<<"Matrix Sub : "<<endl;
    (a-b).display();

getch();
    return 0;
}