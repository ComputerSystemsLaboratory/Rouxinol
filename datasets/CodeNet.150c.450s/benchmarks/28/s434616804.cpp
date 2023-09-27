#include<stdio.h>
#define MAX 100000
typedef long long ll;
int n,k;
ll T[MAX];
int check(ll P){
  int i,j=0;
  ll s;
  for(i=0;i<k;i++){
    s=0;
    while(s+T[j]<=P){
      s+=T[j];
      j++;
      if(j==n)return n;
    }
  }
  return j;
}
int solve(){
  ll left=0;
  ll right=100000*10000;
  ll mid;
  while(right-left>1){
    mid=(right+left)/2;
    int v=check(mid);
    if(v>=n)right=mid;
    else left=mid;
  }
  return right;
}
int main(){
  int i;
  ll ans;
  scanf("%d%d",&n,&k);
  for(i=0;i<n;i++)scanf("%d",&T[i]);
  ans=solve();
  printf("%lld\n",ans);
}