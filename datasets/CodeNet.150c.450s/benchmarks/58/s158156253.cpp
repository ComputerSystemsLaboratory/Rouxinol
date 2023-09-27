#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void push(int);
int pop(void);

int instack[200],stacknum=0;

int main(){
  int a,b;
  char s[200];

  while(1){
    if(scanf("%s",s)==EOF)break;
    switch(s[0]){
    case '+':
      a = pop();
      b = pop();
      push(a + b);
      break;
    case '-':
      b = pop();
      a = pop();
      push(a - b);
      break;
    case '*':
      a = pop();
      b = pop();
      push(a * b);
      break;
    default:
      push(atoi(s));
      break;
    }

  }

  printf("%d\n",pop());
  return 0;
}

void push(int num){
  instack[stacknum] = num;
  stacknum++;
}

int pop(void){
  return instack[--stacknum];

}