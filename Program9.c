#include<stdio.h>
int display()
{
    int iCnt = 0;
    for(iCnt = 1;iCnt<=5;iCnt ++)
    {
        printf("%d\n", iCnt);
    }
}
int main()
{
    display();
    return 0;
}