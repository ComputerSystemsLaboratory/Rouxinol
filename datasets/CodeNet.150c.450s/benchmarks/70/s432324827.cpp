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


int days[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
string week[7] = {"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
int main(){
  while(true){
    int m,d;
    cin>>m>>d;
    if(m==0 && d==0)break;
    --m;
    int day = 0;
    REP(i,m) day += days[i];
    day += d;
    day %= 7;
    cout<<week[day]<<endl;
  }
  return 0;
}