#include <bits/stdc++.h>
#define fi first
#define se second
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define drep(i,n) for(int i = (n)-1; i >= 0; --i)
#define srep(i,s,t) for (int i = s; i < t; ++i)
#define rng(a) a.begin(),a.end()
#define sz(x) (int)(x).size()
#define uni(x) x.erase(unique(rng(x)),x.end())
#define show(x) cout<<#x<<" = "<<x<<endl;
#define PQ(T) priority_queue<T,v(T),greater<T> >
#define newline puts("")
#define v(T) vector<T>
#define vv(T) v(v(T))
#define chmin(x,y) x=min(x,y)
#define chmax(x,y) x=max(x,y)
#define EPS (1e-10)
#define equals(a, b) (fabs((a)-(b)) < EPS)
using namespace std;
typedef long long int ll;
typedef pair<int,int> P;
typedef set<int> S;
typedef queue<int> Q;
typedef queue<P> QP;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<P> vp;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
const int MOD = 1000000007;

int D;
vi c(26);
vvi s;

void calc(vi &t) {
  vi last(26,-1);
  ll res=0;
  rep(i,D) {
    last[t[i]]=i;
    res += s[i][t[i]];
    rep(j,26) {
      res -= c[j]*(i-last[j]);
    }
    cout << res << endl;
  }
}
  
int main() {
  cin >> D;
  rep(i,26) {
    cin >> c[i];
  }
  s.assign(D,vi(26));
  rep(i,D) {
    rep(j,26) {
      cin >> s[i][j];
    }
  }
  vi t(D);
  rep(i,D) {
    cin >> t[i];
    t[i]--;
  }
  
  calc(t);
  return 0;
}