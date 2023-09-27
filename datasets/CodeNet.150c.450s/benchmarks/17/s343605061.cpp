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

double dot(P a,P b){return real(conj(a)*b);};
double cross(P a,P b){return imag(conj(a)*b);};

int main(){
  vi a(5);
  REP(i,5)cin>>a[i];
  sort(ALL(a));
  reverse(ALL(a));
  cout<<a[0];
  REPR(i,5)cout<<" "<<a[i];
  cout<<endl;
  return 0;
}