#include<stdio.h>

int main(void)
{
  int i,num[100],a,j;

  scanf("%d",&a);

  for(i=0;i<a;i++){
    scanf("%d",&num[i]);
  }
  for(j=a-1;j>=0;j--){
    if(j>0&&j<=a-1){
      printf("%d ",num[j]);
    }
    else{
      printf("%d\n",num[0]);
    }
  }
  return 0;
}