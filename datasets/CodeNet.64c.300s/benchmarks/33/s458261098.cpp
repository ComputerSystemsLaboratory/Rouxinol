#include<stdio.h>
     
int main(void){
  int a,b;
  char str[16];
  char op;
     
  scanf("%d%s%d",&a,str,&b);
  op=str[0];
  while(op!='?'){
    printf("%d\n",op=='+'?a+b:op=='-'?a-b:op=='*'?a*b:a/b);
    scanf("%d%s%d",&a,str,&b);
    op=str[0];
  }
  return 0;
}