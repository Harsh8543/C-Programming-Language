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
      for (j = i + 1; j < 6; j++)
      {
         if (list[i] > list[j])
         {
            temp = list[i];
            list[i] = list[j];
            list[j] = temp;
         }
      }
   }
   printf("enter the shorted list");
   for (i = 0; i < 6; i++)
   {
      printf("\n%d", list[i]);
   }
   return 0;
}