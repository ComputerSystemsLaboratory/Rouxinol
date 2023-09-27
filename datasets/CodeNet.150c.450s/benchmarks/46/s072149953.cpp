#include<stdio.h>
int main(){
  int n,x,kumi;
  while(1){
    kumi=0;
    scanf("%d %d",&n,&x);
    if(n==0&&x==0)break;
    for(int a=1;a<=n;a++){
      for(int b=1;b<=n;b++){
	if(a==b)continue;
	for(int c=1;c<=n;c++){
	  if(b==c||a==c)continue;
	  if(a+b+c==x)kumi++;
	}
      }
    }
    printf("%d\n",kumi/6);
  }
  return 0;
}