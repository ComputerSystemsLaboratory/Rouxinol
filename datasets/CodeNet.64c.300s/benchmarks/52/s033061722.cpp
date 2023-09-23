#include <bits/stdc++.h>
  
using namespace std;
  
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef complex<double> P;
typedef pair<int,int> pii;
#define REP(i,n) for(ll i=0;i<n;++i)
#define REPR(i,n) for(ll i=1;i<n;++i)
#define FOR(i,a,b) for(ll i=a;i<b;++i)
  
#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define DEBUG_VEC(v) cout<<#v<<":";REP(i,v.size())cout<<" "<<v[i];cout<<endl
#define ALL(a) (a).begin(),(a).end()
  
#define MOD (ll)(1e9+7)
#define ADD(a,b) a=((a)+(b))%MOD
#define FIX(a) ((a)%MOD+MOD)%MOD
 
int dp[11][353][1252];
 
int dfs(int cnt, int msk, int cur){
  if(cnt>10 || cur>330) return 0;
  if(cnt == 0) return (cur==0?1:0);
  if(dp[cnt][cur][msk] != -1) return dp[cnt][cur][msk];
  dp[cnt][cur][msk] = 0;
  REP(i,10){
    if(msk&(1<<i))continue;
    int nmsk = msk | (1<<i);
    int ncur = cur - i;
    if(ncur >= 0){
      dp[cnt][cur][msk] += dfs(cnt-1,nmsk,ncur);
    }
  }
  dp[cnt][cur][msk] /= cnt;
  return dp[cnt][cur][msk];
}
 
int main(){
  REP(i,11)REP(j,353)REP(k,1252)dp[i][j][k] = -1;
  int n,s;
  while(~scanf("%d%d",&n,&s)){
    if(n==0 && s==0)break;
    cout<<dfs(n,0,s)<<endl;
  }
  return 0;
}