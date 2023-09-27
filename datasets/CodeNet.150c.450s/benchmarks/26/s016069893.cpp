#include<stdio.h>

int main(void){
  int a,b;

  scanf("%d%d",&a,&b);
  puts(a==b?"a == b":a<b?"a < b":"a > b");
}