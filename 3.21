/*Программа для расчета заработной платы сотрудников: до 40 часов - одинарная, после 40 часов двойная*/

#include <stdio.h>

int main()
{
   float tarif;
   int hours;

   printf("Введите № отработанных часов ( -1, если ввод окончен): ");
   scanf("%d", &hours);

   while (hours != -1)
   {
      printf("Введите почасовой тариф работника ($ 00.00): ");
      scanf("%f", &tarif);

      if (hours > 40)
         printf("Зарплата составляет $%.2f\n\n", tarif * hours + tarif * (hours - 40) );

      else
         printf("Зарплата составляет $%.2f\n\n", tarif * hours);   

       printf("Введите № отработанных часов ( -1, если ввод окончен): ");
       scanf("%d", &hours);
   }
   
}
