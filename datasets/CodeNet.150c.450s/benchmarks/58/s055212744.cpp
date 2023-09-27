#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

void initialize();
int isEmpty();
int isFull();
void  push(int x);
int pop();

int top;
int S[1000];

int main()
{
  int i,n,ans,n1,n2,n3;
  char c[1000];

  initialize();

  while(1){
    if(scanf("%s",c)==EOF) break;

    if(c[0]=='+' || c[0]=='-' ||c[0]=='*'){
      n1 = pop();
      n2 = pop();
      if(c[0]=='+') n3 = n1 + n2;
      if(c[0]=='-') n3 = n2 - n1;
      if(c[0]=='*') n3 = n1 * n2;
      push(n3);
    }
      else{
	n = atoi(c);
	push(n);
      }
    }

    printf("%d\n",pop());
    return 0;
  }

  void initialize(){
    top = 0;
  }

  int isEmpty(){
    return top == 0;
  }

  int isFull(){
    return top >= MAX - 1;
  }

  void  push(int x){
    if (isFull()) fprintf(stderr,"overflow\n");
    top++;
    S[top] = x;
  }

  int pop(){
    if (isEmpty()) fprintf(stderr,"underflow\n");
    top--;
    return S[top+1];
  }