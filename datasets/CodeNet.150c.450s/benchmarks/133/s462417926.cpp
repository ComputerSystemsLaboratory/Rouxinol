#include <bits/stdc++.h> 

using namespace std;
using ll=long long;
using ull=unsigned long long;
using pii=pair<int,int>;

#define INF LONG_MAX
#define MOD 1000000007
#define rng(a) a.begin(),a.end()
#define rrng(a) a.end(),a.begin()
#define endl "\n"
#define int ll

signed main(){
  ios::sync_with_stdio(false);
  cin.tie(0);

  int D;
  cin>>D;
  int N=26;
  vector<int>c(N);
  for(int i=0;i<N;i++)cin>>c[i];
  vector<vector<int>>s(D,vector<int>(N));
  for(int i=0;i<D;i++)for(int j=0;j<N;j++)cin>>s[i][j];
  vector<int>t(D);
  for(int i=0;i<D;i++)cin>>t[i];
  for(int i=0;i<D;i++)t[i]--;
  ll ans=0;
  vector<int>last(N,-1);
  for(int i=0;i<D;i++){
    ans+=s[i][t[i]];
    last[t[i]]=i;
    for(int j=0;j<N;j++){
      if(last[j]==-1)ans-=c[j]*(i+1);
      else ans-=c[j]*(i-last[j]);
    }
    cout<<ans<<endl;
  }

  return 0;
}
