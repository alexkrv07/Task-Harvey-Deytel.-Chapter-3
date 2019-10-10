#include <stdio.h>

int main()
{
   int counter = 1, number, largest = 0;
   
   while (counter <= 10)
   {
      printf("Введите текущее число: ");
      scanf("%d", &number);

      if (number > largest)
         largest = number;

     counter++;
   }
   printf("Наибольшее число:  %d\n", largest);
}
