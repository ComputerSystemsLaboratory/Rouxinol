#include<stdio.h>
int main(){
  int a,b,sum,c;
  while(scanf("%d %d",&a,&b)!=EOF){
    sum=a+b;
    c=0;
    while(sum!=0){
      sum=sum/10;
      c++;
    }
    printf("%d\n",c);
  }
  return(0);
}