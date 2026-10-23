#include<iostream>
using namespace std;
class Demo
{
  public:
  int x;
  int y;
  int z;

  Demo()
  {
    cout<<"inside default constructor"<<endl;
  }
  
  Demo(int a,int b)
  {
    int iCnt =  a;

    for(iCnt = a; iCnt<=b; iCnt++)
    {
        cout<<iCnt<<endl;
    }
  }
 };

 int main()
 {
    int y = 0;
    int z = 0;

    cout<<"Enter a Number of Starting Point"<<endl;
    cin>>y;

    cout<<"Enter a Number of Ending Point"<<endl;
    cin>>z;

    Demo obj(y,z) ;
   
    return 0;

}
