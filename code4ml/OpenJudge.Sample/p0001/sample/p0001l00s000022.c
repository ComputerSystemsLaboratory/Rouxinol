#include <stdio.h>

//#define N 1000000

int main(){
  int a,b,c,count;

  while(scanf("%d %d",&a,&b)!=EOF){
    c=a+b;
    count=0;
    while(1){
      count++;
      if(c/10==0)break;

      c=c/10;
    }

    printf("%d\n",count);
  }

  return 0;
}