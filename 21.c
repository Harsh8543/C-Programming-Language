#include<stdio.h>
int main()
{
    int i, n,list[10],flag=0 , key;
    for(i=1;i<10;i++)
    {
        printf("enter the number\n");
        scanf("%d",&list[i]);
    }
    printf("enter the number which you want to search\n");
    scanf("%d",&key);
    for(i=1;i<10;i++)
    {
    if(key==list[i])
    {
        

        flag=1;
        break;
    }
    if(flag==1)
    {
    printf("number found is %d\n",key);
    }
    else
    printf("%d is not found",key);
    }
  return 0;
}