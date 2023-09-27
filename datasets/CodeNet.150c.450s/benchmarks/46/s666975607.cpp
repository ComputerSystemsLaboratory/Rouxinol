#include<stdio.h>
int main(){
  int i,j,k,n,x;
  int a;

  while(1){
    scanf("%d %d",&n,&x);

    if(n==0&&x==0)break;
    (a=0);
    for(i=1;i<=n;i++){
      for(j=2;j<=n;j++){
	for(k=3;k<=n;k++){
	  if(i+j+k==x){
	    (a++);
	    if(i>=j||j>=k||i==k){
	      (a--);
	    }
	  }
	}
      }
    }
    printf("%d\n",a);
  }
  return 0;
}