#include <stdio.h>
int main()
{
  int k[51],i,n,r,y[51],a,b,ka,j;
  while(1){
    scanf("%d %d",&n,&r);
    if(n==0&&r==0)break;
    for(i=0;i<n;i++){
      k[i]=i+1;
      y[i]=i+1;
    }
    for(i=0;i<r;i++){
      scanf("%d %d",&a,&b);
      ka=1;
      for(j=0;j<b;j++){
	y[n-a-b+ka]=k[n-a-b+ka];
	ka++;
      }
      //printf("%d %d %d %d %d",k[0],k[1],k[2],k[3],k[4]);//
      ka=1;
      for(j=0;j<a-1;j++){
	k[n-a-b+ka]=k[n-a+ka];
	ka++;
      }
      ka=1;
      for(j=0;j<b;j++){
	k[n-b-1+ka]=y[n-a-b+ka];
	ka++;
      }
    }
    printf("%d\n",k[n-1]);
  }
  return 0;
}