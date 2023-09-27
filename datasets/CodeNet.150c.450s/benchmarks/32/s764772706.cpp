#include<stdio.h>
int main(){
  int m,nmi,nma,i,a[200],g[2];
  while(1){
    g[0]=0;
    scanf("%d%d%d",&m,&nmi,&nma);
    if(m==0&&nmi==0&&nma==0)break;
    for(i=0;i<m;i++){
      scanf("%d",&a[i]);
      if(i>=nmi&&nma>=i){ 
	if(a[i-1]-a[i]>=g[0]){
	  g[0]=a[i-1]-a[i];
	  g[1]=i+1;
	}
      }
    }
    printf("%d\n",g[1]-1);
  }
  return 0;
}
      