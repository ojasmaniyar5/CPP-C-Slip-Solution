#include<iostream.h>

class MyMatrix{
    private:
        int mat[3][3];
    public:
        MyMatrix(){
            cout<<"Enter values : "<<endl;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout<<"Enter "<<i<<","<<j<<" : ";
                    cin>>mat[i][j];
                }
            }
        }
        void display(){
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout<<" "<<mat[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        void operator - (){
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout<<" "<<mat[j][i]<<" ";
                }
                cout<<endl;
            }
        }
        void operator ++(){
	    for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    mat[i][j]++;
                }
            }
        }
};

int main(){
    MyMatrix a;

    cout<<"Matrix:"<<endl;
    a.display();

    cout<<"Transpose : "<<endl;
    -a;

    cout<<"Incremented Matrix: "<<endl;
    ++a;
    a.display();

    return 0;
}