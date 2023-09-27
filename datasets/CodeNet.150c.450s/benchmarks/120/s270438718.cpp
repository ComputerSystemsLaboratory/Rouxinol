#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
int main(){
  int n,m,d[11][10010];
  while(cin>>n>>m&&n&&m){
    rep(i,n)rep(j,m)cin>>d[i][j];
    int ans=0,t,a;
    for(int i=0;i<1<<n;i++,t=0){
      for(int j=0,a=0;j<m;j++,a=0){
        rep(k,n)
          if(i&(1<<k))a+=!d[k][j];
          else a+=d[k][j];
        t+=max(a,n-a);
      }
      ans=max(ans,t);
    }
    cout<<ans<<endl;
  }
}