#include<stdio.h>
int main(void){
   int h[100], fst, snd, trd, n, i;
   for(i = 0; i < 10; i++){
      scanf("%d", &h[i]);
   }
   fst = h[0];
   snd = h[0];
   trd = h[0];
   for(i = 0; i < 10; i++){
      if(fst <= h[i]){
         trd = snd;
         snd = fst;
         fst = h[i];
      }else if(snd <= h[i]){
         trd = snd;
         snd = h[i];
      }else if(trd <= h[i]){
         trd = h[i];
      }
   }
   printf("%d\n%d\n%d\n", fst, snd, trd);
   return 0;
}