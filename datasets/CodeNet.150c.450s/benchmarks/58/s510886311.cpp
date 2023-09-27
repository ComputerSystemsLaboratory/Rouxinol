#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void push(int);
int pop(void);
int isEmpty(void);
int isFull(void);

int top=0,S[1000];

int main(){
  int x,a,b;
  char s[1000];
  while(scanf("%s",s)!=EOF){
    if ( s[0] == '+' ){
      a=pop();
      b=pop();
      push(a+b);
    } else if ( s[0] == '-' ){
      a=pop();
      b=pop();
      push(b-a);
    } else if ( s[0] == '*' ){
      a=pop();
      b=pop();
      push(a*b);
    } else {
      x = atoi(s);
      push(x);
    }
  }
  printf("%d\n",S[top]);
  return 0;
}

  



void push(int x){
  if(isFull()==1){
    top++;
    S[top]=x;
  }
 
}
int pop(){
  if(isEmpty()==1){
    top--;
    return S[top+1];
  }
 
  
}

int isEmpty(){
  if(top==0){
    return 0;
  }
  else{
    return 1;
  }

}
int isFull(){
  if(top>999){
    return 0;
  }
  else return 1;
}