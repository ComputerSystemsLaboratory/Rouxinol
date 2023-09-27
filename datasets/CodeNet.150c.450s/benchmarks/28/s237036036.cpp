#include <cstdio>
#include <iostream>
#define MAX 100000
using namespace std;
typedef signed int llong;
int n,k;
llong T[MAX];
int check(llong P){
  int i=0;
  for(int j=0;j<k;j++){
    llong s=0;
    while(s+T[i]<=P){
      s+=T[i++];
      if(i==n)return n;
    }
  }
  return i;
}
int solve(){
  llong left=0;
  llong right=100000*10000;
  llong mid;
  while(right-left>1){
    mid=(left+right)/2;
    int v=check(mid);
    if(v>=n)right=mid;
    else left=mid;
  }
  return right;
}
int main(){
  scanf("%d %d",&n,&k);
  for(int i=0;i<n;i++)scanf("%d",&T[i]);
  llong ans=solve();
  printf("%d\n",ans);
  return 0;
}