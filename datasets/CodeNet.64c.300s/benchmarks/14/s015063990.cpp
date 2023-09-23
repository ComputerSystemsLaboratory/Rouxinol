#include<stdio.h>
int main() {
  int num, num2;
  
  scanf("%d %d", &num, &num2);
  if(num < num2) printf("a < b\n");
  else if(num > num2) printf("a > b\n");
  else printf("a == b\n");

  return 0;
} 