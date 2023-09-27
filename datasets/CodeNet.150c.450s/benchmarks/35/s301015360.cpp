#include<stdio.h>

int main(void)
{
  int sum;
  int n[5000];
  int a=0,i,j,x=0,k;

  while(scanf("%d",&k) != EOF){
    if(k==0)
      break;

    for(i=0; i<k; i++){
      scanf("%d",&n[i]);
    }

    x=-10000000;
    for(i=0; i<k; i++){
      sum =0; 
      for(j=i; j<k; j++){
	sum=sum+n[j];
	if(x<sum)
	  x=sum;
      }
    }
    printf("%d\n",x);
  }

  return 0;
}