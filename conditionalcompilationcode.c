#include<stdio.h>
#define a 30
#define b 20
int main()
{
    int res;
    #if(a>b)
    res=a+b;
    
    printf("%d",res);
    
    #elif(a==b)
    res=a-b;
    printf("%d",res);
    #else
    res=a*b;
    printf("%d",res);
 return 0;
}
