/*3.39*/  
/*Написать программу cчытывающую целое число и определяющее, сколько в этом числе цифр 7*/

#include <stdio.h>

int main()
{
   int number, sign, count = 0;

   printf("Введите целое число: ");
   scanf("%d", &number); 

   while (number != 0)
   {
      sign = number % 10;
      if (sign == 7)
         count++;
      number /= 10;
   }  
   printf("Во введнном числе %d цифр 7\n", count);
}
