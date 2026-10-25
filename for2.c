#include<stdio.h>
void display(int Value1)
{
    if(Value1<0)
        {
            Value1 = -Value1;
        }
    int iCnt = 0;
    for(iCnt = 2;iCnt<=Value1;iCnt = iCnt +2)//Advance
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