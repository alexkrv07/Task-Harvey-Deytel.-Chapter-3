#include <stdio.h>

int main()
{
   int miles, count = 0, sumMiles = 0;
   float gallons = -1, sumGallons = 0;

   printf("Введите расход бензина (-1 если ввод окончен): ");
   scanf("%f", &gallons);

   while (gallons != -1)
   {
      printf("Введите пройденный путь: ");
      scanf("%d", &miles);
      printf("Для этой заправки получено миль/галлон:  %f\n", (float) miles / gallons);
      sumMiles += miles;
      sumGallons += gallons;
      printf("Введите расход бензина (-1 если ввод окончен): ");
      scanf("%f", &gallons);
      count++;
   }
   
   if (count != 0)
      printf("Среднее число миль / галлон: %f\n", (float) sumMiles / sumGallons);

   else
      printf("Вы не ввели ни одного значения\n");  

   return 0;
}
