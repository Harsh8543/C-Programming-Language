// SUM OF ELEMENTS
#include <stdio.h>

int main()
{
    int a[3][3], i, j, sum = 0;
    for (i = 0; i < 3; i++)
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
            sum = sum + a[i][j];
        }
    }
    printf("\n%d", sum);
}