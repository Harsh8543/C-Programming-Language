#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, x, f = 1, sum;
    printf("enter the number");
    scanf("%d", &n);
    printf("enter the value of x");
    scanf("%d", &x);
    sum = 1;
    for (i = 1; i <= n - 1; i++)
    {
        if (i % 2 != 0)
        {
            f = f * i;
            sum = sum - pow(x, i) / f;
            
        }

        else
        {
            f = f * i;
            sum = sum + pow(x, i) / f;
           
        }
    }
    printf("sum of series is %d",sum);
    return 0;
}
