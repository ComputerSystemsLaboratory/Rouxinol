#include<stdio.h>

int n,m,res;
char op;

int main() {
 while(true){
  scanf("%d %c %d",&n,&op,&m);
  if(op=='?')break;
  switch(op){
   case '+': res=n+m;break;
   case '-': res=n-m;break;
   case '*': res=n*m;break;
   case '/': res=n/m;break;
  }
  printf("%d\n",res);
 }
 return 0;
}