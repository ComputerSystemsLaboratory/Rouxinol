#include <stdio.h>
int main(){
  int n,i,j,res,counter=0;

  while(1){
    res=0;
    counter=0;

    scanf("%d", &n);
    if(n==0)break;
    for(i=1;i<=1000;i++){
      res=0;
      if(i>n/2+10)break;
      res+=i;
      if(res>=n)break;
      for(j=i+1;j<=1000;j++){
	res+=j;
	if(res==n){
	  counter++;
	}
	if(res>=n){
	  break;
	}
      }
    }
    printf("%d\n",counter);
  }
  return 0;
}