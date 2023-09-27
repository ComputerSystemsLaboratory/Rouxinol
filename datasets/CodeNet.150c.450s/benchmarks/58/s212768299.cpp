#include<stdio.h>
#include<stdlib.h>

#define N 100

void push(int);
int pop(void);
int S[N],top;

int main(){
  char A[N];
  int k,a,b;

  top=0;

  while(scanf("%s",A)!=EOF){

    if(atoi(A)!=0){
      k=atoi(A);
      push(k);
    }

    else{
      a=pop();
      b=pop();
      if(A[0]=='+')push(a+b);
      else if(A[0]=='-')push(b-a);
      else if(A[0]=='*')push(a*b);
    }
    
  }


  printf("%d\n",S[top]);

  return 0;
}

int pop(void){
  int x;
  x=S[top];
  top--;
  return x;
}

void push(int a){
  top++;
  S[top]=a;
}