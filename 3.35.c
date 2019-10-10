/*Ввести пятизначное число и определить является ли оно палиндромом*/

#include <stdio.h>

int main()
{
   int x, x1, x2, x3, x4, rest;
   printf("Введите пятизначное целое число: ");
   scanf("%d", &x);
   rest = x / 10;
   x1 = x % 10;
   x2 = rest % 10;
   rest = rest / 10;
   x3 = rest % 10;
   rest = rest / 10;
   x4 = rest % 10;
   rest = rest / 10;

   if (x1 == rest)
   {
      if (x2 == x4)
         printf("Введенное число является палиндромом\n");
      else
         printf("Введенное число не является палиндромом\n");
   }
   else
     printf("Введенное число не является палиндромом\n");
}
