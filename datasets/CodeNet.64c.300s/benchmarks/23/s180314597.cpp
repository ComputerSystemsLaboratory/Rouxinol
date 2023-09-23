#include<stdio.h>
  
int a;
int b;
int menseki;
int shu;
  
int main(){
scanf("%d %d", &a, &b);
menseki = a * b;
shu = a * 2 + b * 2;
printf("%d %d\n", menseki, shu);
return 0;
}