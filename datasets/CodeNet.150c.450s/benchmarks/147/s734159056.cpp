#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); ++i)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define fi first
#define se second
#define INF 1000000009
#define LLINF 1000000000000000009LL
using ll = long long;

int main(){
  int n;
  cin>>n;
  vector<int>ans(n+1);
  int m=(int)sqrt(double(n))+1;
  rep(i,m){
    rep(j,m){
      rep(k,m){
        int x=i+1,y=j+1,z=k+1;
        int s=x*x+y*y+z*z+x*y+y*z+z*x;
        if(s>n)continue;
        ans[s]++;
      }
    }
  }
  rep(i,n){
    cout<<ans[i+1]<<endl;
  }
  return(0);
}