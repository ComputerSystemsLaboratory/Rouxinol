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


signed main(){
  int x,y,s;
  while(cin>>x>>y>>s,x){
    vector<pair<int,int>> m;
    for(int i=1;i<s;i++){
      for(int j=1;j<s;j++){
        int tmp=i*(100+x)/100+j*(100+x)/100;
        if(tmp==s)m.PB(MP(i,j));
      }
    }
    int ans=-1;
    for(auto t : m){
      int tmp=t.FR*(100+y)/100;
      tmp+=t.SC*(100+y)/100;
      ans=max(ans,tmp);
    }
    cout<<ans<<endl;
  }
  return 0;
}

