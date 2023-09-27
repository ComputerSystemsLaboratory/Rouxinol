#include<stdio.h>

int main(){
  int n,x,i,j,k;

  while(1){
    int m=0;
    scanf("%d %d",&n,&x);

    if(n==0&&x==0)break;

    for(i=1;i<=n-2;i++)
      for(j=2;j<=n-1;j++)
	for(k=3;k<=n;k++)
	  if(i!=j&&i!=k&&k!=j)
	    if(i<j&&j<k)
	      if(x==i+j+k)
		m++;

    printf("%d\n",m);

  }
  return 0;
}