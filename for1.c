#include<stdio.h>
int display(long int lalit)
{
  
    int i = 0;

    for(i = 1; i<=lalit ; i++)
    return i;

}
int main()
{
    int no =0;
    int result = 0;
    printf("enter number of your choice\n");
    scanf("%d",&no);

     result = display(no);
    printf("%d",result);
    return 0;



}