#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void push(int*, int, int*);
int pop(int*, int*);

int main(){
  int i, x;
  int a, b;
  char s[100];
  int  stk[200];
  int top = 0;

  while( scanf("%s", s) != EOF ){

    if( s[0] == '+' || s[0] == '-' || s[0] == '*'){
      b = pop(stk, &top);
      a = pop(stk, &top);
    }
    if ( s[0] == '+' ){
      x = a + b;
    } else if ( s[0] == '-' ){
      x = a - b;
    } else if ( s[0] == '*' ){
      x = a * b;
    } else {
      x = atoi(s);
    }
    push( stk, x, &top);
  }

  printf("%d\n" ,pop(stk,&top));
  return 0;
}

void push(int* s_p, int x, int* t_p){
  *t_p = *t_p +1;
  s_p[(*t_p)] = x;
  return;
}

int pop(int* s_p, int* t_p){
  *t_p = *t_p -1;
  return s_p[((*t_p)+1)];
}