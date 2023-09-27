#include<stdio.h>
int main(){
 int a,b;
 scanf("%d%d",&a,&b);
 if (a < b) {
  printf("a < b\n");
  return 0;}
 else {
  if (a == b) {
   printf("a == b\n");
   return 0;}
  else {
   printf("a > b\n");
   return 0;}
 }
 return 0;
}
