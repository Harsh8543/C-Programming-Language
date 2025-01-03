#include <stdio.h>
int main()
{
    int i, n, fact = 1, sum = 0;
    printf("enter the number");
    scanf("%d", &n);
    sum = 0;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
        sum = sum + fact;
    }
    printf("%d", sum);
}