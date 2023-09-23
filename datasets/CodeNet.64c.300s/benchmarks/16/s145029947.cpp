#include <stdio.h>

int main(void){
  int rt[200000],r,n,max,rtmin[200000],i,j;

  scanf("%d",&n);
  for(i=1;i<=n;++i){
    scanf("%d",&rt[i]);
    rtmin[i]=rtmin[i-1];
    if(i==1) rtmin[i]=rt[i];
    else if(rtmin[i]>rt[i]) rtmin[i]=rt[i];
  }
  
  max=rt[2]-rt[1];
  for(i=1;i<n;++i){
    if(rt[i+1]-rtmin[i]>max){
      max=rt[i+1]-rtmin[i];
    }
  }
  printf("%d\n",max);

  return 0;
}

