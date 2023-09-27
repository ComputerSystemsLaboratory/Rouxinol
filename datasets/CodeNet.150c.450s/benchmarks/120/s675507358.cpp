#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
int main(){
  int n,m,d[11][10010],ans,t,a;
  while(cin>>n>>m&&n&&m){
    rep(i,n)rep(j,m)cin>>d[i][j];
    ans=0;
    rep(i,1<<n){
      t=0;
      rep(j,m){
        a=0;
        rep(k,n)a+=(d[k][j]+!!(i&(1<<k)))%2;
        t+=max(a,n-a);
      }
      ans=max(ans,t);
    }
    cout<<ans<<endl;
  }
}