#include <stdio.h>

int main()
{

    int a[3][3], i, j, row, column;
    printf("enter the number of rows and number of column");
    scanf("%d%d", &row, &column);
     printf("enter the value for first matrix");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\nenter the number for 2d array");
            scanf("%d", &a[i][j]);
        }
    }
    // printf("\n the original matrix");
    //  for (i = 0; i < 3; i++)
    // {
    //     printf("\n");
    //     for (j = 0; j < 3; j++)
    //     {
    //         printf("%d\t",a[i][j]);
            
    //     }
    // }
    printf("transpose of the matrix\n");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[j][i]);
        }
    }
return 0;
}
