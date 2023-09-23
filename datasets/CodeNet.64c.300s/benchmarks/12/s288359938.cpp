#include<stdio.h>
int main(){
  int a,result;
  while(1){
  scanf("%d",&a);

  if(1>a || a>100){
    continue;

  }else{
      break;
  }
  }
  result = a * a * a;

  printf("%d\n",result);

  return 0;
}