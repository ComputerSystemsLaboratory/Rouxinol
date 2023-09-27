#include<stdio.h>
#include<math.h>
#include<algorithm>
#define MAX (int)1e+6
using namespace std;

int main(void){
  int i,j,n;
  int a[181],b[46];
  int dp1[MAX],dp2[MAX];

  b[0] = 0;
  j = 1;
  for(i=0;i<181;i++){
    a[i] = i * (i+1) * (i+2) / 6;
    if(a[i]&1)b[j++] = a[i];
  }

  for(i=0;i<MAX;i++)dp1[i] = dp2[i] = 1000000;

  for(i=0;i<MAX;i++){
    for(j=0;j<181;j++){
      if(i>a[j])dp1[i] = min(dp1[i],dp1[i-a[j]]+1);
      else if(i==a[j])dp1[i]=1;
      else break;
    }
  }
  
  for(i=0;i<MAX;i++){
    for(j=0;j<46;j++){
      if(i>b[j])dp2[i] = min(dp2[i],dp2[i-b[j]]+1);
      else if(i==b[j])dp2[i]=1;
      else break;
    }
  }

  while(scanf("%d",&n) && n)printf("%d %d\n",dp1[n],dp2[n]);
  return 0;
}