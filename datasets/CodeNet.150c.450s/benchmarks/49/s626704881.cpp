#include <bits/stdc++.h>
#define int long long
#define double long double
#define INF 1e18
using namespace std;
signed main() {
  int N;
  while (cin>>N,N!=0){
    int ma = 0, mi = INF;
    int ans=0;
    for(int i=0;i<N;i++){
      int t;cin>>t;
      ma=max(ma,t);
      mi=min(mi,t);
      ans+=t;
    }
    ans-=ma+mi;
    N-=2;
    ans/=N;
    cout<<ans<<endl;
  }
}


