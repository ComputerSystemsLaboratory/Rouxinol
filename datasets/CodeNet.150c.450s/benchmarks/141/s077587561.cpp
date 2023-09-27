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
  double x1,y1,x2,y2,x3,y3,xp,yp;
  while(~scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&xp,&yp)){
    P a(x1,y1), b(x2,y2), c(x3,y3), p(xp,yp);
    double cra = cross(b-a,p-a);
    double crb = cross(c-b,p-b);
    double crc = cross(a-c,p-c);
    if(cra<0){
      cra*=-1;
      crb*=-1;
      crc*=-1;
    }
    if(cra>0 && crb>0 && crc>0){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}