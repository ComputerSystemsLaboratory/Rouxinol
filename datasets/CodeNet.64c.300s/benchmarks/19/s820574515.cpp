#include <bits/stdc++.h>
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
const int INF=1000000009;


signed main(){
  int n;
  while(cin>>n,n){
    vector<int> a(n+1);
    LOOP(i,1,n+1)cin>>a[i];
    LOOP(i,1,n+1)a[i+1]+=a[i];
    int ans=-INF;
    LOOP(i,1,n+1){
      LOOP(j,0,i){
        ans=max(ans,a[i]-a[j]);
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}

