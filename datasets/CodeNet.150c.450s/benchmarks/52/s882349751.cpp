#include <stdio.h>

int main(void) {

  int car;
  int cars[10];

  int top=0;

  while(scanf("%d",&car)!=EOF) {

    if(car==0) {
      
      top--;
      printf("%d\n",cars[top]);

    }
      
    else {
      
      cars[top]=car;
      top++;

    }

  }

  return 0;

}