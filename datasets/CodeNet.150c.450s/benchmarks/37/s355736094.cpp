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
  double a,b,c,d,e,f;
  while(~scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f)){
    // ax+by=c
    // dx+ey=f
    double x,y;
    x = (b*f-c*e)/(b*d-a*e);
    y = (c*d-a*f)/(b*d-a*e);
    if(abs(x)<1e-9) x = abs(x);
    if(abs(y)<1e-9) y = abs(y);
    // x = round(x*1000.0)/1000.0;
    // y = round(y*1000.0)/1000.0;
    printf("%.3lf %.3lf\n",x,y);
  }
  return 0;
}