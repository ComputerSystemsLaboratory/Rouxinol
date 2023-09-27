#include<bits/stdc++.h>
#define REP(i,n) for(int i=0;i<n;i++)
#define LOOP(i,x,n) for(int i=x;i<n;i++)
#define ALL(v) (v).begin(),(v).end()
#define PB push_back
#define MP make_pair
#define FR first
#define SC second
#define int long long

using namespace std;
const int MOD=1000000007;
const int INF=9000000009;
const double eps=1e-10;

signed main(){
  int n;
  while(cin>>n,n){
    vector<int> a(n+100);
    REP(i,n){
      int x;cin>>x;
      a[i+1]=a[i]+x;
    }
    int ans=-INF;
    REP(i,n+1)LOOP(j,i+1,n+1)ans=max(ans,a[j]-a[i]);
    cout<<ans<<endl;
  }
  return 0;
}

