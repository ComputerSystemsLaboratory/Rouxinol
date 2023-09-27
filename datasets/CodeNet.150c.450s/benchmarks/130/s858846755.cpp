
#include <stdio.h>
int main(void)
{
   int xgyou,xretu;
   int yretu;
   static int x[101][101];
   static int y[101][101];
   int i,j;
   int k;
   long long sum;
   sum = 0;
   scanf("%d",&xgyou);
   scanf("%d",&xretu);
   for (i = 1; i <= xgyou; i++){
      for (j = 1; j <= xretu; j++){
         scanf("%d",&x[i][j]);
      }
   }

   for (i = 1; i <= xretu; i++){
      scanf("%d",&y[i][0]);

   }
   for (i = 1;i <= xgyou; i++){
      for (k = 1;k <= xretu; k++){
         sum += x[i][k]*y[k][0];
      }
      printf("%lld",sum);
      sum = 0;
      printf("\n");
   }


   return 0;
}