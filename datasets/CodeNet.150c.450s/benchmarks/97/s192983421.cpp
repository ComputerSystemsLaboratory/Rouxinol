#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef complex<double> P;
typedef pair<int,int> pii;
#define REP(i,n) for(int i=0;i<n;++i)
#define REPR(i,n) for(ll i=1;i<n;++i)
#define FOR(i,a,b) for(ll i=a;i<b;++i)

#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define DEBUG_VEC(v) cout<<#v<<":";REP(i,v.size())cout<<" "<<v[i];cout<<endl
#define ALL(a) (a).begin(),(a).end()

#define MOD (ll)(1e9+7)
#define ADD(a,b) a=((a)+(b))%MOD
#define FIX(a) ((a)%MOD+MOD)%MOD

bool mp[401][401];

int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};

int main(){
  while(true){
    int n;
    cin>>n;
    if(n==0)break;
    REP(i,401)REP(j,401)mp[i][j]=false;
    mp[200][200] = true;
    vector<pii> pos(n);
    pos[0] = make_pair(200,200);
    REP(i,n-1){
      int x,d;
      cin>>x>>d;
      pii t = pos[x];
      mp[t.first+dx[d]][t.second+dy[d]] = true;
      pos[i+1] = make_pair(t.first+dx[d],t.second+dy[d]);
    }
    int l=200,r=200,t=200,b=200;
    REP(i,401)REP(j,401){
      if(mp[i][j]){
        l = min(l,i);
        r = max(r,i);
        t = max(t,j);
        b = min(b,j);
      }
    }
    cout << (r-l+1) << " " << (t-b+1) << endl;
  }
  return 0;
}