#include<stdio.h>

int main() {

   int a[20] = {0};
   int box[2001][21] = {0};
   int m[200] = {0};
   int n, q, i, j, swap;

   scanf("%d", &n);

   for(i = 0; i < n; i++){
      scanf("%d", &a[i]);
   }

      scanf("%d", &q);

   for(i = 0; i < q; i++){
      scanf("%d", &m[i]);
   }


   for(i = 0; i < n; i++){
      for(j = 1; j <= 2000; j++){

         if(j - a[i] >= 0 && (box[j - a[i]][i] + a[i] ) >= box[j][i]){
            box[j][i+1] = box[j - a[i]][i] + a[i];
         } else {
            box[j][i+1] = box[j][i];
         }


      }
   }


   for(i = 0; i < q; i++){
      if(box[m[i]][n] == m[i]){
         printf("yes\n");
      } else {
         printf("no\n");
      }
   }

   return 0;
}