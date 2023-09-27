#include <stdio.h>
#include <stdlib.h>

int main(void){
  char input[200][10];
  int op[100];
  int opLast = 0;
  int n = 0;
  int i;

  while(scanf("%s", input[n]) != EOF){
    n++;
  }
  for(i = 0; i < n; i++){
    if(input[i][0] >= '0' && input[i][0] <= '9'){
      op[opLast] = atoi(input[i]);
      opLast++;
    }else {
      if(input[i][0] == '+'){

        op[opLast-2] = op[opLast-2] + op[opLast-1];
        opLast--;
      }else if(input[i][0] == '-'){
        op[opLast-2] = op[opLast-2] - op[opLast-1];
        opLast--;
      }else if(input[i][0] == '*'){
        op[opLast-2] = op[opLast-2] * op[opLast-1];
        opLast--;
      }
    }
  }

  printf("%d\n", op[opLast-1]);

  return 0;
}