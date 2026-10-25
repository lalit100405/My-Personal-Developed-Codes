#include<stdio.h>
void display(int Value1)
{
    if(Value1<0)
        {
             printf("Enter Positive Number Kindly\n");
             return;
        }
    int iCnt = 0;
    for(iCnt = 1;iCnt<=Value1;iCnt++)//Advance
    {
        
        printf("%d\n",iCnt);
    }
}
int main()
{
    int no = 0;
    printf("Enter Number Of Your Choice\n");
    scanf("%d",&no);

    display(no);
    return 0;
}