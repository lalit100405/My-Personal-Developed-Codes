#include <stdio.h>
int multiplication(int Bhand1,int Bhand2)
{
	return Bhand1*Bhand2;
}
int main()
{
int a = 0;
int b = 0;
int Result = 0;

printf("Enter First Number");
scanf("%d",&a);

printf("Enter Second Number");
scanf("%d",&b);

Result = multiplication(a,b);
printf("Multplication=>%d",Result);

return 0;
}
