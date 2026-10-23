#include<iostream>
using namespace std;
class Base
{
    public:
    Base()
    {
        cout<<"inside base constructor"<<endl;
    }
     virtual ~Base()
    {
        cout<<"inside base destructor"<<endl;
    }
};
class Derived:public Base
 
{public:
    Derived()
    {
        cout<<"inside derived constructor"<<endl;
    }
     ~Derived()
    {
        cout<<"inside derived destructor"<<endl;
    }
};
int main()
{
    Base*bp=new Derived();
    delete bp;
   //Derived dobj;
   //Derived*dp=new Derived();
   //delete dp;
    return 0;
}