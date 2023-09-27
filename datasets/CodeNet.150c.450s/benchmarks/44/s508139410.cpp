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
  int a[4],b[4];
  while(~scanf("%d%d%d%d%d%d%d%d",a,a+1,a+2,a+3,b,b+1,b+2,b+3)){
    int hit = 0;
    REP(i,4)if(a[i]==b[i])++hit;
    set<int> S;
    REP(i,4)S.insert(a[i]);
    int blow = -hit;
    REP(i,4)if(S.find(b[i])!=S.end())++blow;
    printf("%d %d\n",hit,blow);
  }
  return 0;
}