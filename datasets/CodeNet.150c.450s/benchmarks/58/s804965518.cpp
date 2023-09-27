#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 199

int top,S[MAX];
void initialize(void);
void push(int);
int pop(void);
int isEmpty(void);
int isFull(void);

int main(){

  int a,b,i;
  char s[MAX];
  
  while(scanf("%s",s)!=EOF){
    if(s[0]=='+'){
      a=pop();
      b=pop();
      push(a+b);
    }
    else if(s[0]=='-'){
      a=pop();
      b=pop();
      push(b-a);
    }
    else if(s[0]=='*'){
      a=pop();
      b=pop();
      push(a*b);
    }
    else push(atoi(s));
  }
  printf("%d\n",pop());
  return 0;
}




 
void initialize(void){
  top=0;
}

int isEmpty(void){
  return top==0;
}

int isFull(void){
  return top>=MAX-1;
}

void push(int x){
  if(isFull())
    printf("overflow\n");
  top++;
  S[top]=x;
}


int pop(void){
  if(isEmpty())
    printf("underflow\n");
  top--;
  return S[top+1];
}