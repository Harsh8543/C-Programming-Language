#include <stdio.h>
int main()
{

    // do while loop
    // variable decleration

    //     do{

    //         printf("");

    //     }while(condition);

    // int n;
    // do {
    //     printf("enter number:");
    //     scanf("%d",&n);
    //     printf("%d\n",n);

    //     if( n % 2 != 0){
    //         break;
    //     }
    // }while(1);
    // printf("thank you");

    int n;
    do
    {
        printf("enter number:");
        scanf("%d", &n);
        printf("%d\n", n);

        if (n % 2 == 0)
        {
            break;
        }
    } while (1);
    printf("thank you");

    // while loop

    // syntax:
    // first declare the variable------(decleration)
    // then,
    // while(condition){--------termination
    // now,printf("");
    // upgradation
    // }

    // int i = 0;
    // while (i < 11)
    // {
    //     printf("%d\n", i);
    //     i = i + 1;
    // }
    return 0;
}