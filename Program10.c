#include<stdio.h>
void display(int Value1)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt<=Value1;iCnt ++)
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