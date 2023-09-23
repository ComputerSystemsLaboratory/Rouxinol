#include <stdio.h>
int main(){
  int a,b,c;
  char op;
  
  while(1){
    scanf("%d %c %d", &a,&op,&b);
    if(op=='?'){
      break;
    }   
    if(op=='+'){
      c=a+b;
      printf("%d\n",c);
    }
    if(op=='-'){
      c=a-b;
      printf("%d\n",c);
    }
    if(op=='*'){
      c=a*b;
      printf("%d\n",c);
    }
    if(op=='/'){
      c=a/b;
      printf("%d\n",c);
    }
  }
  return 0;
}