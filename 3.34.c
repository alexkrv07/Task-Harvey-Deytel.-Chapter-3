/*Ввести сторону квадрата от 1 до 20 и вівести полый квадрат на экран*/

#include <stdio.h>

int main()
{
   int sizeMax = 0, sizeH = 1, sizeV = 1;
   
   while (sizeMax  < 1 )
   {
     
         printf ("Введите сторону квадрата от 1 до 20:");
         scanf("%d", &sizeMax);
      
   }
   while (sizeV <= sizeMax)
   {
      while (sizeH <= sizeMax)
      {
         
         if (sizeV == 1)
         {
            printf ("*");
         }
         else if ( sizeV == sizeMax)
         {
            printf ("*");   
         }
         else if (sizeH == 1)
         {
            printf ("*");
         }
         else if ( sizeH == sizeMax)
         {
            printf ("*");   
         }
         else 
         {
            printf (" ");
         }
 
         sizeH++;
      }
      printf("\n");
      sizeH = 1;
      sizeV++;   
   }   
}
