#include <stdio.h>

int main(void)
{
  int stack[10];
  int stack_size = 0;
  int car;
  while(scanf("%d", &car) != EOF){
    if(car==0){
      printf("%d\n", stack[--stack_size]);
    }else{
      stack[stack_size++] = car;
    }
  }

  return 0;
}