#include <stdio.h>
int main()
{
  int a,b,c,sum,n,sumx,cou=0;
  while(1){
    scanf("%d %d",&n,&sumx);
    if(n==0&&sumx==0){
      break;
    }
    for(a=1;a<=n;a++){
      for(b=a+1;b<=n;b++){
	for(c=b+1;c<=n;c++){
	  sum=a+b+c;
	  if(sum==sumx&&a!=b&&b!=c&&c!=a){
	    cou=cou+1;
	  }
	}
      }
    }
    printf("%d\n",cou);
    cou=0;
  }
  return 0;
}