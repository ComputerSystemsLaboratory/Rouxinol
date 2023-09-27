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

#define N_MAX 1000000

int main(){
  vl tetra;
  ll i = 1;
  while(i*(i+1)*(i+2)/6 < N_MAX){
    tetra.push_back( i*(i+1)*(i+2)/6 );
    ++i;
  }
  vl alldp(N_MAX,1e18);
  alldp[0] = 0;
  REP(x,tetra.size()){
    ll tt = tetra[x];
    ll t = 1;
    ll b = tt*t;
    while(b<N_MAX){
      REP(_a,N_MAX){
        ll a = N_MAX-1-_a;
        if(a+b>=N_MAX)continue;
        alldp[a+b] = min(alldp[a+b],alldp[a]+t);
      }
      t<<=1;
      b = tt*t;
    }
  }
  vl odddp(N_MAX,1e18);
  odddp[0] = 0;
  REP(x,tetra.size()){
    ll tt = tetra[x];
    if(tt%2==0)continue;
    ll t = 1;
    ll b = tt*t;
    while(b<N_MAX){
      REP(_a,N_MAX){
        ll a = N_MAX-1-_a;
        if(a+b>N_MAX)continue;
        odddp[a+b] = min(odddp[a+b],odddp[a]+t);
      }
      t<<=1;
      b = tt*t;
    }
  }
  while(true){
    ll n;
    cin>>n;
    if(n==0)break;
    cout << alldp[n] << " " << odddp[n] << endl;
  }
  return 0;
}