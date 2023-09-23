#include<stdio.h>

int calc(int x,int y){
  int a,t,k =0;
  t = x+y;
  while(t){
    t = t/10;
    k += 1;
  }
  return k;
}
int main(void){
  int a,b;
  while(scanf("%d %d",&a,&b) != EOF){
    printf("%d\n",calc(a,b));
  }
}