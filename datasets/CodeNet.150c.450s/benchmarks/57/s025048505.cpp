#include <stdio.h>
int main(){
  int a,b;
  char op;
  for(;;){
    scanf(" %d %c %d",&a,&op,&b);
    if(op=='?'){
      return 0;
    } else if(op=='+'){
      printf("%d\n",a+b);
    } else if(op=='-'){
      printf("%d\n",a-b);
    } else if(op=='*'){
      printf("%ld\n",a*b);
    } else if(op=='/'){
      printf("%d\n",a/b);
    }
  }
}