// #include <stdio.h>

// int main() {

//     int a[3][3],i,j,b[3][3],c[3][3];
//     printf("enter the value for first matrix");
//  for(i=0;i<3;i++)
//  {
//      for(j=0;j<3;j++)
//      {
//          printf("\nenter the number for 2d array");
//          scanf("%d",&a[3][3]);
//      }
//  }
// printf("\nfirst matrix");
//  for(i=0;i<3;i++)
//  {
//  printf("\n");

//  for(j=0;j<3;j++)
//  {
//      printf("%d\t",a[3][3]);
//  }
 
//  }
//  printf("enter the value for second matrix");
//  for(i=0;i<3;i++)
//  {
//      for(j=0;j<3;j++)
//      {
//          printf("\nenter the number for 2d array");
//          scanf("%d",&b[3][3]);
//      }
//  }
//  printf("\nfirst matrix");
//  for(i=0;i<3;i++)
//  {
//  printf("\n");

//  for(j=0;j<3;j++)
//  {
//      printf("%d\t",a[3][3]);
//  }
//  }
//  printf("\nsecond matrix");
//  for(i=0;i<3;i++)
//  {
//  printf("\n");

//  for(j=0;j<3;j++)
//  {
//      printf("%d\t",b[3][3]);
//  }
//  }
// for(i=0;i<3;i++)
// {
//  printf("\n");
// for(j=0;j<3;j++)
// {

//     c[3][3]=a[3][3]+b[3][3];
// }
// }

// printf("addition of the matrix");
// for(i=0;i<3;i++);
// {
//     printf("\n");
//     for(j=0;j<3;j++)
//     {
//         printf("%d\t",c[3][3]);
//     }
// }
// return 0;

// }







#include <stdio.h>

int main()
{

    int a[3][3], i, j, b[3][3], c[3][3],row,column;
    printf("enter the number of row and column");
    scanf("%d%d",&row ,&column);
    printf("enter the value for first matrix");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\nenter the number for 2d array");
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the value for second matrix");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\nenter the number for 2d array");
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nfirst matrix");
    for (i = 0; i < 3; i++)
    {
        printf("\n");

        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
    }
    printf("\nsecond matrix");
    for (i = 0; i < 3; i++)
    {
       printf("\n");

        for (j = 0; j < 3; j++)
        {
            printf("%d\t", b[i][j]);
        }
    }
    printf("subtraction of the matrix");
    for (i = 0; i < 3; i++)
      {
        

        for (j = 0; j < 3; j++)
       {
            c[3][3] = a[3][3] - b[3][3];
           
       }
      }
       printf("\n subtraction of the matrix");
    for (i = 0; i < 3; i++)
    {
        printf("\n");

        for (j = 0; j < 3; j++)
        {
            // c[i][j] = a[i][j] - b[i][j];
            printf("%d\t", c[i][j]);
        }
    }
    
   return 0;
}