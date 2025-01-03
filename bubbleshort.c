#include <stdio.h>
int main()
{
   int i, j, list[] = {10, 6, 14, 9, 17, 20}, temp;

   for (i = 0; i < 6; i++)
   {
      printf(" %d", list[i]);
   }
   for (i = 0; i < 5; i++)
   {
      for (j = 0; j < 6 - i - 1; j++)
      {
         if (list[j] > list[j + 1])
         {
            temp = list[j];
            list[j] = list[j + 1];
            list[j + 1] = temp;
         }
      }
   }
   printf("enter the sorted list");
   for (i = 0; i < 6; i++)
   {
      printf("\n%d", list[i]);
   }
}
