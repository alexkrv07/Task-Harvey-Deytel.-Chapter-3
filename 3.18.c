/*Разработать программу на С которая определяет превысил ли тот или иной покупатель свой лимит*/

#include <stdio.h>

int main()
{
   int number;    /*Номер счета*/
   float balans, spends, credit, maxCredit;   /*Начальный баланс, расходы за месяц, кредит, допустимый кредит*/

   printf("Введите номер счета  (-1, если ввод закончен): ");
   scanf("%d", &number);

   while (number != -1)
   {
      printf("Введите начальный баланс: ");
      scanf("%f", &balans);
      printf("Введите общую сумму расходов: ");
      scanf("%f", &spends);
      printf("Введите сумму кредита: ");
      scanf("%f", &credit);
      printf("Введите предельный размер кредита: ");
      scanf("%f", &maxCredit);
      
      balans = balans + spends - credit;

      if (balans > maxCredit)
      {
         printf("Счет: %d\n", number);
         printf("Предельный размер кредита: %.2f\n", maxCredit);
         printf("Баланс: %.2f\n", balans);
         printf("Предельный размер кредита превышен\n");
      }

      printf("Введите номер счета  (-1, если ввод закончен): ");
      scanf("%d", &number);
   }

}
