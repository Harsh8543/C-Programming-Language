#include<stdio.h>

// print the sum of first n natural number

int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);

    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }

    printf("sum is %d\n",sum);



    // REVERSE

    for(int i=n;i>=1;i--){
        printf("%d\n",i);
    }



//    REVERSE NUMBER AND SUM OF N NATURAL NUMBER BOTH COMBINE IN FOR LOOP


    int n;
    printf("enter number:");
    scanf("%d",&n);

    int sum = 0;
    for(int i=1, j=n; i<=n && j>=1;i++,j--) {
        sum=sum+i;
        print("%d\n",j);
     }


    // TABLE OF THE NUMBER
 int n;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=1; i<=10;i++) {
        printf("%d\n",n*i);
    }
    return 0;






    }


