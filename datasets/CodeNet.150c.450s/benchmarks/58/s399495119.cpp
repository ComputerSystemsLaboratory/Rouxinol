#include <stdio.h>
#include <stdlib.h>

int pop(int *s, int *top);
void push(int *s, int *top, int op);

int main(int argc, char const *argv[])
{
  int top=0, s[101],op1,op2;
  char ch[1000000];

  while(scanf("%s", ch) != EOF) {
    if(ch[0]=='+') {
      op1 = pop(s, &top);
      op2 = pop(s, &top);
      push(s, &top, op1 + op2);
    } else if(ch[0]=='-') {
      op1 = pop(s, &top);
      op2 = pop(s, &top);
      push(s, &top, op2 - op1);
    } else if(ch[0]=='/') {
      op1 = pop(s, &top);
      op2 = pop(s, &top);
      push(s, &top, op2 / op1);
    } else if(ch[0]=='*') {
      op1 = pop(s, &top);
      op2 = pop(s, &top);
      push(s, &top, op1 * op2);
    } else {
      push(s, &top, atoi(ch));
    }
  }
  printf("%d\n", s[1]);
  return 0;
}

int pop(int *s, int *top) {
  (*top)--;
  return s[*top+1];
}

void push(int *s, int *top, int op) {
  s[*top+1] = op;
  (*top)++;
}