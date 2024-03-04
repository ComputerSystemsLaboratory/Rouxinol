#include<stdio.h>
int keta(int a,int b);
int main(void){
  int a,b;

  while(scanf("%d %d",&a,&b) != EOF){
    printf("%d\n",keta(a,b));
  }
  return 0;
}
int keta(int a,int b){
  int wa,sum,count=0;

  sum=a+b;
  for(wa=1;sum/wa!=0;wa*=10){
    if(sum/wa!=0)
      count++;
  }
  return count;
}