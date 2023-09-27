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
int n;
cin>>n;
double x1,y1,x2,y2,x3,y3,x4,y4;
while(n--){
scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
P a(x2-x1,y2-y1);
P b(x4-x3,y4-y3);
double cr = imag(conj(a)*b);
if(abs(cr)<1e-11){
  cout<<"YES"<<endl;
}else{
  cout<<"NO"<<endl;
}
}
  return 0;
}