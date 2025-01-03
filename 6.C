#include<stdio.h>
int main()
{
    // m1=maths marks
    // m2=science marks
    // m3= m1+m2
    int m1,m2,m3;
    printf("enter your marks m1");
    scanf("%d",&m1);
    printf("you have entered %d as you m1 marks\n",m1);
    printf("enter your marks m2");
    scanf("%d\n",&m2);
    printf("you have entered %d as you m2 marks\n",m2);
    printf("enter your marks m3");
    scanf("%d",&m3);
    printf("you have entered %d as your m3 marks\n",m3);
    if(m1>=25)
    {
        printf("you gets pass in maaths and got the gift of rupees 15");

    }
    else if(m2>=30)
    {
        printf("you gets pass in science and got gift of rupees of 15");

    }
    else if(m1+m2>=55)
    {
        printf("you gets pass in both and got the gift of rupees of 45");
    }

    else{
        printf("you can not get anything");
    }
    
}

