#include <stdio.h>

int main()
{
    int a[3][3], i, j, sum1 = 0, sum2 = 0,n;
    // printf("enter the number of rows and column");
    // scanf("%d%d",&n,&n);
    for (i = 0; i <3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\nenter the number for 2d array\n");
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n2d array element are");
    for (i = 0; i < 3; i++)
    {
        printf("\n");

        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
    }
  
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] == a[j][i])
            {
                sum1 = sum1 + a[i][j];
                
            }
        }
    }
     printf("\n%d", sum1);
   
    for (i = 0; i <3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i+j == 2)
            {
                sum2 = sum2 + a[i][j];
                
            }
        }
    }
   printf("\n%d", sum2);
    return 0;
}
