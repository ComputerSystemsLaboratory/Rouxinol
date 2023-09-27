#include<stdio.h>

int main(){
   int tate,yoko,shuu,menseki;
   scanf("%d %d", &tate, &yoko);
   menseki = tate * yoko;
   shuu = tate * 2 + yoko * 2;
   printf("%d %d\n", menseki, shuu);

   return 0;
}