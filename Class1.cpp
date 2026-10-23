#include<iostream>
using namespace std;
class Base
{
    public:
    int x;
    int y;
    Base()
    {
        cout<<"inside Base constructor"<<endl;
    }
    virtual~Base()=0;
};
Base::~Base()
{
    cout<<"Inside Base Destructor"<<endl;
}
class Derived: public Base
{
    public:
    int a;
    int b;
    Derived()
    {
        cout<<"inside derived constructor"<<endl;
    }
    ~Derived()
    {
        cout<<"Inside Derived Destructor"<<endl;
     }
};

int main()
{
    Base*bp=new Derived();
    delete bp;
    return 0;
}