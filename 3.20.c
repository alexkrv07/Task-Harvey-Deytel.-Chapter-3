#include <stdio.h>

int main()
{
   int days;
   float principal, rate;

   printf("Введите основную сумму ссуды ( -1, если ввод закончен)");
   scanf("%f", &principal);

   while (principal != -1)
   {
      printf("Введите процентную ставку:");
      scanf("%f", &rate);
      printf("Введите срок ссуды в днях: ");
      scanf("%d", &days);
      printf("Выплаты по процентам составляют: $%.2f\n\n", principal * rate * days / 365 );
      printf("Введите основную сумму ссуды ( -1, если ввод закончен)");
      scanf("%f", &principal);
   }

}
