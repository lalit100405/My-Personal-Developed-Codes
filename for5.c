#include<stdio.h>
void summation()
{
    int sum = 0;
    int icnt = 0;
    for(icnt = 1;icnt<=5;icnt++)
    {
        sum = sum+icnt;
    }
    printf("%d",sum);
}
int main()
{
    summation();
    return 0;
}