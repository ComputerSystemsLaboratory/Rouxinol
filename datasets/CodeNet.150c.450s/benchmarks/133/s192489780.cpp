#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<iomanip>
#include<bitset>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
typedef pair<ll,P> P1;
typedef pair<P,P> P2;
#define pu push
#define pb push_back
#define mp make_pair
#define eps 1e-7
#define INF 1000000000
#define fi first
#define sc second
#define rep(i,x) for(ll i=0;i<x;i++)
#define repn(i,x) for(ll i=1;i<=x;i++)
#define SORT(x) sort(x.begin(),x.end())
#define ERASE(x) x.erase(unique(x.begin(),x.end()),x.end())
#define POSL(x,v) (lower_bound(x.begin(),x.end(),v)-x.begin())
#define POSU(x,v) (upper_bound(x.begin(),x.end(),v)-x.begin())

const int MAX = 510000;
const int MOD = 1000000007;

int main(){
  // 入力
  ll D; cin >> D;
  ll N = 26;
  vector<ll> c(N); rep(i,N) cin >> c[i];

  vector<vector<ll> > s(D , vector<ll>(N));
  rep(i,D) rep(j,N) cin >> s[i][j];

  vector<ll> t(D); rep(i,D) {cin >> t[i]; t[i]--;};

  // score計算
  ll score = 0;
  map<ll,ll> m;
  rep(i,N) m[i] = 0;
  rep(i,D){
    score += s[i][t[i]];
    m[t[i]] = i + 1;

    rep(j,N){
      score -= (i - m[j] + 1) * c[j];
    }
    cout << score << endl;
  }

}
