#include<stdio.h>
int main(void)
{
  int i,n,x;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    x=i;
    if((x%3)==0 )printf(" %d",i);
    else
      while(x){
        if( x%10==3){
          printf(" %d",i);
          break;
        }
        x=x/10;
      }
  }
    printf("\n");

  return 0;
}