#include <stdio.h>

int main()
{
   int counter = 1, number, largest = 0, subLargest = 0;
   
   while (counter <= 10)
   {
      printf("Введите текущее число: ");
      scanf("%d", &number);

      if (number > largest)
      {
         subLargest = largest;
         largest = number;
      }
      else if (number > subLargest)
         subLargest = number;

     counter++;
   }
   printf("Наибольшее число:  %d\n", largest);
   printf("Следующее за ним наибольшее число:  %d\n", subLargest);   
}
