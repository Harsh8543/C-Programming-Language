// BINARY SEARCH
#include<stdio.h>
int main()
{
    int i,flag,n,beg=0,end,mid,list[10],key;
    for(i=1;i<10;i++)
    {
    printf("enter the number");
    scanf("%d",list[i]);
    }
    printf("enter the number which you want to search");
    scanf("%d",key);
    end=n-1;
    while(beg<=end)
    {
        mid=(beg+end)/2;
    }
    if(key==list[mid])
    {
        printf("%d",list[i]);
    }
}
