#include<iostream>
using namespace std;
class Demo
{
    public:

    int L1 = 0;
    int L2 = 0;
    int L3 = 0;
    int L4 = 0;

    Demo()
    {
         cout<<"Inside Default Constructor"<<endl;
         L1 = 0;
         L2 = 0;

    }
    Demo(int x, int y)
  {
      cout<<"Inside Parameterised Constructor"<<endl;
      L1 = x;
      L2 = y;

  }
 void gun()
  {
    cout<<"Inside gun Constructor"<<endl;
   L3 = L1 + L2;
   cout<<L3<<endl;

 }
 void fun()
 {
    cout<<"Inside fun Constructor"<<endl;
    L4 = L1*L2;
    cout<<L4<<endl;
}
~ Demo()
{
    cout<<"Inside Demo Destructor"<<endl;
} 



};
int main()
{
    Demo obj(10,20);
    Demo obj1(20,30);
    Demo obj3;//Fakt samjnya sathi lihila yacha kahi 'Use' nahi.
    obj.gun();
    obj1.gun();
    obj.fun();
    obj1.fun();

    return 0;
}
