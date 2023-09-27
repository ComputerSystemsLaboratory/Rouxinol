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
  int n,m;
  while(cin>>n>>m,n){
    vector<pair<int,int>> pr;
    REP(i,n){
      int d,p;
      cin>>d>>p;
      pr.PB(MP(p,d));
    }
    sort(ALL(pr));
    int i;
    for(i=n-1;i>=0;i--){
      if(m-pr[i].SC<0){
        int tmp=pr[i].SC-m;
        pr[i].SC=tmp;
        break;
      }
      m-=pr[i].SC;
    }
    //i--;
    int ans=0;
    for(;i>=0;i--){
      ans+=pr[i].FR*pr[i].SC;
    }
    cout<<ans<<endl;
  }
  return 0;
}

