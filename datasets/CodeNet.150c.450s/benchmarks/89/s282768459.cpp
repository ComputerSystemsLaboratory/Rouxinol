#include<stdio.h>
#define mil 1000000
int main(void){
  int prim[mil],i,j,n,a,b,count;

  for(i=0;i<mil;i++)prim[i]=0;
  prim[0]=prim[1]=1;  

  for(i=2;i*i<mil;i++)
    if(prim[i]==0)
      for(j=2*i;j<mil;j+=i)
	prim[j]=1;

  while(scanf("%d %d %d",&a,&b,&n),a,b,n){

    count=0;
    for(;;){
      if(prim[a]==0){
	count++;
	if(count==n)break;
      }
      a+=b;
    }
    printf("%d\n",a);
  }
  return 0;
}