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

ll dp[210][210];
// dp[i][j] は from i to jまで　の積の計算の最小回数

int main(){
  ll N; cin >> N;
  vector<P> a(N); rep(i,N) cin >> a[i].fi >> a[i].sc;

  // dp 初期化
  rep(i,N) rep(j,N) dp[i][j] = INF;
  rep(i,N) dp[i][i] = 0;

  repn(i,N){
    // iはいくつ離れてるか
    rep(j,N){
      // j is start
      for(ll k = j; k <= i + j; k++){
        // k が空いてた
        if(k == j){
          dp[j][j + i] = min(dp[j][j + i] , a[k].fi * a[k].sc * a[j + i].sc  + dp[j + 1][j + i]);
        }
        else if(k == i + j){
          dp[j][j + i] = min(dp[j][j + i] , dp[j][j + i - 1] + a[j].fi * a[k].fi * a[k].sc);
        }
        else{
          dp[j][j + i] = min(dp[j][j + i] ,
            dp[j][k] + a[j].fi * a[k].sc * a[j + i].sc + dp[k + 1][j + i]);
        }
      }
    }
  }

  // rep(i,N) rep(j,N) cout << i << " " << j << " " << dp[i][j] << endl;

  cout << dp[0][N - 1] << endl;
}

