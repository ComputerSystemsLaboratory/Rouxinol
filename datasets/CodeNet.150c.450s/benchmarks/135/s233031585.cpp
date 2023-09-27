// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2015
#include<bits/stdc++.h>
using namespace std;
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
typedef long long ll;
typedef pair<ll,ll> P;
const int INF=INT_MAX / 3;
const ll LINF=LLONG_MAX / 3LL;
#define CONST 1000000007
#define EPS (1e-8)
#define PB push_back
#define MP make_pair
#define sz(a) ((int)(a).size())
#define reps(i,n,m) for(int i=(n);i<int(m);i++)
#define rep(i,n) reps(i,0,n)
#define SORT(a) sort((a).begin(),(a).end())
ll mod(ll a,ll m){return (a%m+m)%m;}
int dx[9]={0,1,0,-1,1,1,-1,-1,0},dy[9]={1,0,-1,0,1,-1,1,-1,0};
ll n,m;
int hs[10000], warr[10000];
int acch[10000], accw[10000];
int main(){
  while(cin >> n >> m) {
    if(n == 0 && m == 0) return 0;
    acch[0] = 0;
    rep(i, n) {
      cin >> hs[i];
      acch[i+1] = acch[i] + hs[i];
    }
    accw[0] = 0;
    rep(i, m) {
      cin >> warr[i];
      accw[i+1] = accw[i] + warr[i];
    }

    map<int, int> hm;
    rep(i, n) {
      reps(j, i+1, n+1) {
        hm[acch[j] - acch[i]] += 1;
      }
    }
    ll ans = 0;
    rep(i, m) {
      reps(j, i+1, m+1) {
        ans += hm[accw[j] - accw[i]];
      }
    }
    cout << ans << endl;
  }

  return 0;
}