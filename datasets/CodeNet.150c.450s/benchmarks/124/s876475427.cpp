#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef vector<ld> vd;
typedef vector<ll> vll;
typedef vector<string> vstr;
typedef vector<vll> vvll;
typedef vector<vvll> vvvll;
typedef vector<pair<ll, ll>> vpll;
typedef priority_queue<ll, vector<ll>, greater<ll>> spqll;  // 小さい順に取り出し
typedef priority_queue<ll, vector<ll>, less<ll>> bpqll;     // 大きい順に取り出し

#define REP(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i, a, b) for (ll i = (ll)a; i < (ll)b; i++)
#define IREP(i, v) for (auto i = (v).begin(); i != (v).end(); i++)
#define FI first
#define SE second
#define MP make_pair
#define MT make_tuple
#define PB push_back
#define TS to_string
#define NP next_permutation
#define ALL(v) (v).begin(), (v).end()
#define SZ(x) (ll) x.size()
#define SP(x) setprecision((ll)x)


ll INF = 1e9;
ll MOD = 1000000007;
ll LINF = 1e18;
ld EPS = 1e-9;
ld PI = M_PI;
vll dx = {1, 0, -1, 0, 1, -1, -1, 1};
vll dy = {0, 1, 0, -1, 1, 1, -1, -1};
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a;} //最大公約数
ll lcm(ll a, ll b) { return a / gcd(a, b) * b;}     //最小公倍数

void yes(){ cout << "Yes" << endl;}
void no(){ cout << "No" << endl;}

//-----------------------------------------
class warshall_floyd{
  private:
    ll N; // 頂点数
    vvll dis; // iからjまでの最短距離
    ll inf = 1e18;

  public:
    warshall_floyd(ll n){
      N = n;
      dis.resize(N,vll(N));

      for(ll i=0;i<N;i++){
        for(ll j=0;j<N;j++){
          dis[i][j] = ( i == j ? 0 : inf );
        }
      }
    }

    // 辺の入力
    void in_edge(ll to, ll from, ll cost){
      dis[to][from] = cost;
    }

    // d[i][j]を埋める
    vvll main(){
      for(ll k=0;k<N;k++){
        for(ll i=0;i<N;i++){
          for(ll j=0;j<N;j++){
            dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
          }
        }
      }
      return dis;
    }

    // 負の経路の検出
    bool mns_loop(){
      for(ll i=0;i<N;i++){
        if(dis[i][i] < 0) return true;
      }
      return false;
    }
};
//-----------------------------------------

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout << fixed << setprecision(10);

  ll n;
  cin >> n;
  warshall_floyd W(n);
  REP(i,n){
    ll v, k;
    cin >> v >> k;
    REP(j,k){
      ll a, b;
      cin >> a >> b;
      W.in_edge(v,a,b);
    }
  }
  vvll tmp = W.main();
  REP(i,n) cout << i << " " << tmp[0][i] <<endl;

  return 0;
}


