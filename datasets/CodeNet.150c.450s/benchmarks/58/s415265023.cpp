#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 200

long stack[MAX_LENGTH];
int top = 0;

int isFull() {
  if (top == 199) {
    // printf("満タンです。\n");
    return 1;
  } else {
    // printf("満タンではありません。\n");
    return 0;
  }
}

int isEmpty() {
  if (top == 0) {
    // printf("空です。\n");
    return 1;
  } else {
    // printf("空ではありません。\n");
    return 0;
  }
}

void push(long x) {
  if (!isFull()){
    stack[top + 1] = x;
    top++;
    // printf("%ldをプッシュしました。\n", x);
  } else {
    // printf("プッシュできません。\n");
  }
}

long pop() {
  if (!isEmpty()){
    top--;
    // printf("%ldをポップしました。\n", stack[top + 1]);
    return stack[top + 1];
  } else{
    // printf("ポップできません。\n");
  }
}

int main(void) {
  char temp[10];
  int i, a, b;

  while(scanf("%s", temp) != EOF) {

    if (temp[0] == '+') {
      a = pop();
      b = pop();
      push(a + b);
      // printf("+が入力されました。\n");
    } else if (temp[0] == '-') {
      a = pop();
      b = pop();
      push(b - a);
      // printf("-が入力されました。\n");
    } else if (temp[0] =='*') {
      a = pop();
      b = pop();
      // printf("*が入力されました。\n");
      push(a * b);
    } else if (temp[0] == EOF){
      // printf("終了です。\n");
      break;
    } else {
      push(atol(temp));
      // printf("整数%ldが入力されました。\n", atol(temp));
    }
  }

  printf("%ld\n", pop());

  return 0;
}