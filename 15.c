#include<stdio.h>
int main()
{
    int n;
    print("enter the number:");
    scanf("%d",n);

    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;

    }
    print("final factorial is %d",fact);
    return 0;
}