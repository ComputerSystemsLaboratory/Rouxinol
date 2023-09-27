#include<stdio.h>
int main( ){
  int n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    int a=i;
    if(i%3==0){
      printf(" %d",i);
    }else{
      while(a){
	if(a%10==3){
	  printf(" %d",i);
	  break;
	}
	a/=10;
      }
    }
  }
  printf("\n");
  return 0;
}