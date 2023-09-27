#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <functional>


int main (){


  int m,nmin,nmax,ans,diff;
  int point[200];
  while(1){
    scanf("%d %d %d",&m,&nmin,&nmax);
    if(m == 0 && nmin == 0 && nmax == 0) break;
    for(int i = 0;i < m;i++){
      scanf("%d",&point[i]);
    }
    //std::sort(point,point+m,std::greater<int>());
    //ans = nmin;
    ans = 0;
    diff = 0;
    for(int ss = nmin;ss <= nmax;ss++){
      if(point[ss-1] - point[ss] >= diff){
        diff = point[ss-1] - point[ss];
        ans = ss;
      }
    }
    printf("%d\n",ans);
  }
  return 0;
}