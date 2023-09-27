#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int S[1000];
int top;
int pop();
void push(int);
int main(){

  int top=0;
  int a,b;
  char anos[1000];
  
  while(scanf("%s",anos)!=EOF){

      
   

    if(anos[0]=='+'){
      a=pop();
      b=pop();      
      push(a+b);
    }

    else if(anos[0]=='*'){
      a=pop();
      b=pop();
      push(a*b);
    }

    else if(anos[0]=='-'){
      b=pop();
      a=pop();
      push(a-b);
    }
    else {
      push(atoi(anos));
    }
  }


  printf("%d\n",pop());

  return 0;

}

int pop(){

  return S[top--];

}

void push(int x){

   top++;
   S[top]=x;

 }