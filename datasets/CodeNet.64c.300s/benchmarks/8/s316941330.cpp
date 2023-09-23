#include<stdio.h>
int main(){
  int n,i,m,j;
  scanf("%d",&n);
  for(i=1;i<=n;i++) {
    m=i*10;   
    if(i%3==0)printf(" %d",i);    
    else if(i%10==3)printf(" %d",i);
    else if(i/10%10==3)printf(" %d",i);
    else if(i/100%10==3)printf(" %d",i);
    else if(i/1000%10==3)printf(" %d",i);
 }
  printf("\n");
  return 0;
}