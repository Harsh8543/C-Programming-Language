#include<stdio.h>
int main()
{
    int i,n,a[10],flag=0;
    for(i=0;i<10;i++){
        printf("enter the number\n");
        scanf("%d\n",a[10]);
        printf("%d\n",a[i]);
    }
    printf("enter the number which you want to search");
    scanf("%d\n",&n);
    for(i=0;i<10;i++){
        if(a[i]==n){
            flag==1;
            break;
        }
        if(flag==1){
            printf("the number is found");
        }
        else{
            printf("the number is not found");
        }
    }
}
