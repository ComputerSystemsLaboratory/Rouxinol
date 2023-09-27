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

int main(){
  int mx = 1000010;
  vector<bool> isp(mx,true);
  isp[0]=false;
  isp[1]=false;
  REP(i,mx){
    if(isp[i]==false)continue;
    int t = i*2;
    while(t<mx){
      isp[t] = false;
      t += i;
    }
  }
  vector<int> sum(mx,0);
  REPR(i,mx) sum[i] = sum[i-1] + isp[i];
  int n;
  while(~scanf("%d",&n))cout<<sum[n]<<endl;
  return 0;
}