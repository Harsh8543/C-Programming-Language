// LOOPS IN C
#include <stdio.h>
int main()
{
  int num, index = 0;
  printf("Enter a number\n");
  scanf("%d\n", &num);

  do
  {
    printf("%d", index);
    index = index + 1;
  } while (index < num);

  return 0;
}

// int i=0;
// do{
//   i=i+1;
//   printf("%d\n",i);

// }while (i<10);
