#include <stdio.h>
int main()
{
    int i, num, x, sum, p;

    for (i = 1; i <= 1000; i++)
    {
        sum = 0;
        num = i;
        p = num;
        while (num > 0)
        {
            x = num % 10;
            num = num / 10;
            sum = sum + x * x * x;
        }
        if (sum == p)
        {
            printf("%d\n", p);
        }
    }
    return 0;
}