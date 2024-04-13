#include<iostream.h>
#include<conio.h>

class student
{
private:
    int sid, sclass;
    char sname[30];
public:
    void getstudent()
    {
        cout << "enter the id"; cin >> sid;
        cout << "enter name"; cin >> sname;
        cout << "enter the class"; cin >> sclass;
    }
    void putstudent()
    {
        cout << "enter the id" << sid << endl;
        cout << "enter name" << sname << endl;
        cout << "enter the class" << sclass << endl;
    }
};

class competition
{
private:
    int cid;
    char cname[20];
public:
    void getcomp()
    {
        cout << "enter the c id"; cin >> cid;
        cout << "enter c name"; cin >> cname;
    }
    void putcomp()
    {
        cout << "enter the c id" << cid << endl;
        cout << "enter c name" << cname;
    }
};

class studcomp : public student, public competition
{
public:
    int rank;
public:
    void accept()
    {
        cout << "enter the rank"; cin >> rank;
        getstudent();
        getcomp();
    }
    void display()
    {
        cout << "the rank is " << rank;
	putstudent();
	putcomp();
    }
};

int main()
{
    studcomp a[30];
    int n, ch;
    char cont;
    cout << "accept" << endl;
    cout << "display" << endl;
    cout << "ascending" << endl;
    do {
        cout << "enter the choice";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "home many record you want to enter";
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                a[i].accept();
            }
            break;
        case 2:
            cout << "the data is";
	    for (i= 0; i < n; i++)
	    {
		a[i].display();
	    }
	    break;
	case 3:
	    for(i=0;i<n;i++)
	    {
	    a[i].display();
	    }
	    case 4:
	    return 0;
	    break;
	}
    } while (ch !=4);
    return 0;
}
