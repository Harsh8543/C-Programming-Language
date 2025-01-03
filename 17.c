#include<stdio.h>
int main()
{
    int i,j;
    // for(i=1;i<=5;i++)
    // {
    //     for(j=1;j<=i;j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    //     }
    

    // return 0;


    for(i=1;i<=5;i++)
    {
        for(j=5;j>1;j--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
      printf("\n");

    }
}
