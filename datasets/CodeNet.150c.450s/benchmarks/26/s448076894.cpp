#include <stdio.h>
int main() {
  int num1,num2;
  scanf("%d %d",&num1,&num2);
  if(num1<num2) {
    printf("a < b\n");
  } else if(num1>num2) {
    printf("a > b\n");
  } else {
    printf("a == b\n");
  }
  return 0;
}
