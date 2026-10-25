#include<stdio.h>
void summation(int Value1)
{
    int sum = 0;
    int icnt = 0;
    for(icnt = 1;icnt<=Value1;icnt++)
    {
        sum = sum+icnt;
    }
    printf("summation = %d\n",sum);
    printf("value = %d\n",icnt);
}
int main()
{
    int iValue = 0;
    printf("Enter Number Of Your Choice\n");
    scanf("%d",&iValue);

    summation(iValue);

    return 0;
}
