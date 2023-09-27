#include<stdio.h>
#define N 10000
#define q 500

int main(){
  int S[N];
  int T[q];
  int i,j,count=0,n,m;

  scanf("%d",&n);
  for(i=0; i<n; i++) scanf("%d",&S[i]);

  scanf("%d",&m);
  for(i=0; i<m; i++) scanf("%d",&T[i]);

  for(j=0;j<m;j++){
    for(i=0;i<n;i++){
      if(S[i]==T[j]) break;
    }
    if(i==n) count+=0;
    else count++;
  }
  

  printf("%d\n",count);
  return 0;
}