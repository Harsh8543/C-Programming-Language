#include<stdio.h>
int main()
{
    char a[50],b[20],c[60];
    int i,j;
    printf("enter the first string");
    gets(a);
    printf("enter the second string");
    gets(b);
    for(i=0;a[i]!='\0';i++)
    {
        c[i]=a[i];
    }
    for(j=0;b[j]!='\0';j++,i++){
        c[i]=b[j];
    }
    
    c[i]!='\0';
    printf("\n concatenate string=%s",c);
    return 0;
}