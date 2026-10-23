#include<iostream>
using namespace std;

class Lallu
{
public:
	int a;
	int b;
	int c;

	Lallu()
	{
		cout<<"inside default constructor"<<endl;
		a = 0;
		b = 0;
		c = 0;

	}

	Lallu(int x,int y)
	{

		if(x<0)
		{
			x = -x;
		}
	
		if(y<0)
		{
			y = -y;
		}

		a = x;
		b = y;
		c = a+b;

	}
};
int main()
{
	int d;
	int e;


	cout<<"enter first number"<<endl;
	cin>>d;


	cout<<"enter second number"<<endl;
	cin>>e;

	Lallu obj(d,e);
	
	cout<<"Addition c ="<<obj.c<<endl;
	

	return 0; 

}