#include <stdio.h>
int main(){
  int flag,temp,sumn,summ,i,j,n,m,ren,rem,nc[101],mc[101];
  while(1){
    sumn=0;
    summ=0;
    ren=100;
    rem=100;
    flag=0;
    scanf("%d%d",&n,&m);
    if(n==0&&m==0) break;
 
    for(i=1;i<=n;i++){
      scanf("%d",&nc[i]);
      sumn+=nc[i];
    }
    for(i=1;i<=m;i++){
      scanf("%d",&mc[i]);
      summ+=mc[i];
    }
     
    for(i=1;i<=n;i++){
      for(j=1;j<=m;j++){
    if(sumn-nc[i]+mc[j]==summ-mc[j]+nc[i]&&nc[i]+mc[j]<ren+rem){    
          ren=nc[i];
          rem=mc[j];
      temp=nc[i];
      nc[i]=mc[j];
      mc[j]=temp;
      flag=1;
    }
      }
    }
 
    if(flag==1) printf("%d %d\n",ren,rem);
    else printf("-1\n");
 
  }
 
  return 0;
}