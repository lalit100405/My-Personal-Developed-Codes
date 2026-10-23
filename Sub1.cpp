#include<iostream>
using namespace std;

//* Programmer Name : Lalit Bari
//* Code Purpose : In any case variable should be positive and addition should be positive.


class Demo
{
    public:
    int a;
    int b;
    int c;
    int d;
    
    Demo()// default constructor
    {
        cout<<"inside Demo Constructor"<<endl;
        a = 0;
        b = 0;
        c = 0;
        d = 0;

    }

    Demo(int x,int y)//paramterised constructor
    {
        cout<<"inside Parameterised Constructor"<<endl;
        a = x;// assigned X value to a.

        if(a<0)// a is positive in any case.
        {
            a = -a;
        }

        if(x<0)// x is positive in any case.
        {
            x = -x;
        }

        b = y;// assigned Y value to b.


        if(b<0)// b is positive in any case.
        {
            b = -b;
        }
        
         if(y<0)// y is positive in any case.
        {
            y = -y;
        }

        c = a+b;// addition of assigned values.
        d = x+y;// addition of parametered values.

        if(c=d)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }


    }
    ~Demo()// Counstructor
    {
        cout<<"inside Demo Destructor"<<endl;
    }
};
int main()
{
    Demo obj;// making Object.
    Demo obj1(-10,-20);// making second Object and passing negative (-) values.

    cout<<obj.a<<endl;
    cout<<obj.b<<endl;
    cout<<obj.c<<endl;
    cout<<obj1.a<<endl;
    cout<<obj1.b<<endl;
    cout<<obj1.c<<endl;
    cout<<obj1.c<<endl;

    cout<<sizeof(obj1)<<endl;

    return 0;
}