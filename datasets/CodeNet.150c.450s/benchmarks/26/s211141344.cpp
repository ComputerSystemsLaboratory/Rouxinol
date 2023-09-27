#include<stdio.h>
int main(){
  int c,a,b;
  scanf("%d%d",&a,&b);
  if(a<b){
    printf("a < b\n");
  }
  else if(a>b){
    printf("a > b\n");
  }
  else if(a==b){
    printf("a == b\n");
  }
  return 0;
}