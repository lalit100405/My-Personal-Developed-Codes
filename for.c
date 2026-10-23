#include<stdio.h>
int display(long int lalit)
{
  
    int i = 0;

    for(i = 1; i<=lalit ; i++)
{
    printf("%d\n",i);
}

}
int main()
{
    int no =0;

    printf("enter number of your choice\n");
    scanf("%d",&no);

     display(no);
   
    return 0;



}