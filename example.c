#include<stdio.h>
void display(int Value1,int Value2)
{
    int iCnt = Value1;
    for(iCnt = Value1;iCnt<=Value2;iCnt ++)
    {
        printf("%d\n",iCnt);
    }
}
int main()
{
    int no = 0;
    int no1 = 0;
    printf("Enter Number Of Your Starting Point\n");
    scanf("%d",&no);

    printf("Enter Number Of Your Ending Point\n");
    scanf("%d",&no1);

    display(no,no1);
    return 0;
}