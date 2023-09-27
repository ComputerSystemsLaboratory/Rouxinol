#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)

int main(){
  int n,m;
  while(cin>>n>>m){
    if(n==0&&m==0)break;
    int data[11][10010];
    rep(i,n)rep(j,m)cin>>data[i][j];
    
    int ans=0;
    rep(i,1<<n){
      int t=0;
      rep(j,m){
        int a=0;
        rep(k,n)
          if((i&(1<<k))!=0)a+=!data[k][j];
          else a+=data[k][j];
        t+=max(a,n-a);
      }
      ans=max(ans,t);
    }
    cout<<ans<<endl;
  }
}