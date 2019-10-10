#include <stdio.h>

int main()
{
   int number, base = 1, sign = 0, nubmerDecimal = 0, control = 0;

   printf("Введите целое число, содержащее только 0 или 1: ");
   scanf("%d", &number); 

   while (number != 0)
   {
      sign = number % 10;
      
      if (sign == 0)
      {
         nubmerDecimal += sign * base;
         base *= 2; 
         number /= 10;
      }
      else if ( sign == 1)
      {
         nubmerDecimal += sign * base;
         base *= 2; 
         number /= 10;
      }
      else
      {
         control = -1;
         number = 0;
      }
   }  

   if (control == 0)
      printf("Десятичный эквивалент введенного двоичного числа: %d\n", nubmerDecimal);
   else
      printf("Вы ввели не десятичное число\n");   
}
