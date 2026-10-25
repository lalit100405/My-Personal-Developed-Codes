#include<stdio.h>
int summation(int Value1)
{
    int sum = 0;
    int icnt = 0;
    for(icnt = 1;icnt<=Value1;icnt++)
    {
        sum = sum+icnt;
    }
     return sum;
    
 
}
int main()
{
    int iValue = 0;
    int Result = 0;
    printf("Enter Number Of Your Choice\n");
    scanf("%d",&iValue);

   Result = summation(iValue);
   printf("summation = %d\n",Result);

    return 0;
}
