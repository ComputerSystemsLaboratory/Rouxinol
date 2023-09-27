#include <stdio.h>

int F(int, int [], int);

int main()
{
  int sum=0, i, mid, l, r, n, k, w[1000000];

  scanf("%d%d", &n, &k);

  for(i=0; i<n; i++)
    scanf("%d", &w[i]);

  w[n]=-1;
  l=0;
  r=2000000000;

  while(l<r){
    mid=(l+r)/2;
    sum=F(mid,w,k);
    if(sum==n && F(mid-1,w,k)!=sum)break;
    if(sum<n){
      l=mid+1;
    }
    else if(sum==n &&F(mid-1,w,k)==sum){
      r=mid;
    }
  }

  printf("%d\n",mid);

  return 0;
  
}

int F(int P, int w[], int k){
  int i, sum=0, a=0;
  for(i=0; i<k; i++){
    if(w[a]<=P){
      while(sum+w[a]<=P && w[a]!=-1){
    sum+=w[a];
    a++;
      }
    }
    sum=0;
  }
  return a;
}