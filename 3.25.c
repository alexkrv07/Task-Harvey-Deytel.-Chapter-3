#include <stdio.h>

int main()
{
   int a = 1;
   
   printf("N\t10*N\t100*N\t1000*N\n\n");   

   while (a <= 10)
   {
      printf("%d\t%d\t%d\t%d\n", a, 10 * a, 100 * a, 1000 * a);
      a++;    
   }
}
