#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
  int a,b,i,sum;
  while(scanf("%d%d",&a,&b)!=EOF){
    i=0;
    sum=a+b;
    do{
      sum=sum/10;
      i++;
    }while(sum>0);
    printf("%d\n",i);
  }
  
  
  return 0;
}