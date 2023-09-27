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
const int INF=1000000009;

signed main(){
  int n;
  while(cin>>n,n){
    vector<int> x(n);
    REP(i,n)cin>>x[i];
    sort(ALL(x));
    int ans=INF;
    REP(i,x.size()-1){
      ans=min(ans,x[i+1]-x[i]);
    }
    cout<<ans<<endl;
  }
  return 0;
}

