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
class bellman_ford{
  private:
    ll N; // 頂点数
    ll E; // 辺の数
    vll NL; // 負のループの発見時に返す
    struct edge{
      ll from; ll to; ll cost; // 頂点iからの行き先とそのコスト
    };
    vector<edge> edges; // 辺の配列
    vector<edge> reves; // 辺の配列
    vll dis; // sからiへの最小コスト
    vll par; // iの一個前の頂点
    ll inf = 1e18; 

  public:
    bellman_ford(ll n, ll m){
      N = n; E = m;
      dis.resize(N); par.resize(N);
      reves.resize(E);
    }

    // 辺の入力 
    void in_edge(ll from_, ll to_, ll cost_){
      edge e = {from_, to_, cost_};
      edges.push_back(e);
    }

    // 辺の逆転
    void rev_edge(){
      for(ll i=0;i<E;i++){
        edge tmp = edges[i];
        edge rev = {tmp.to, tmp.from, tmp.cost};
        reves[i] = rev;
      }
    }

    // 初期化
    void init(){
      for(ll i=0;i<N;i++){
        dis[i] = inf;
        par[i] = i;
      }
    }

    // sから各頂点への最短距離
    vll dis_from_s(ll s){
      init();
      dis[s] = 0;

      for(ll i=0;i<N-1;i++){
        for(ll j=0;j<E;j++){
          edge tmp = edges[j];
          if(dis[tmp.from] != inf && dis[tmp.to] > dis[tmp.from] + tmp.cost){
              dis[tmp.to] = dis[tmp.from] + tmp.cost;
              par[tmp.to] = tmp.from;
          }
        }
      }

      for(ll i=0;i<E;i++){
        edge tmp = edges[i];
        if(dis[tmp.from] != inf && dis[tmp.to] > dis[tmp.from] + tmp.cost){
          return vll();
        }
      }

      return dis;
    }

    // 各頂点からsへの最短距離への最短距離を返す (有向グラフの辺を逆転し、sからの最短距離を求める)
    vll dis_to_s(ll s){
      init();
      rev_edge();
      dis[s] = 0;

      for(ll i=0;i<N-1;i++){
        for(ll j=0;j<E;j++){
          edge tmp = reves[j];
          if(dis[tmp.from] != inf && dis[tmp.to] > dis[tmp.from] + tmp.cost){
              dis[tmp.to] = dis[tmp.from] + tmp.cost;
              par[tmp.to] = tmp.from;
          }
        }
      }
      
      for(ll i=0;i<E;i++){
        edge tmp = reves[i];
        if(dis[tmp.from] != inf && dis[tmp.to] > dis[tmp.from] + tmp.cost){
          return vll();
        }
      }

      return dis;
    }

    // sからtへの最短路
    vll get_path_s_to_t(ll t){
      vector<ll> res;
      ll i = t;
      while(i != par[i]){
        res.push_back(i);
        i = par[i];
      }
      reverse(ALL(res));
      return res;
    }

    // どこかに負のループが存在
    bool negative_loop(){
      for(ll i=0;i<N;i++) dis[i] = 0;

      for(ll i=0;i<N;i++){
        for(ll j=0;j<E;j++){

          edge tmp = edges[j];
          if(dis[tmp.to] > dis[tmp.from] + tmp.cost){
            dis[tmp.to] = dis[tmp.from] + tmp.cost;

            if(i == N-1) return true;
          }
        }
      }
      return false;
    }
}; 
//-----------------------------------------

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout << fixed << setprecision(10);

  ll n, m, r;
  cin >> n >> m >> r;
  bellman_ford B(n,m);
  REP(i,m){
    ll s, t, d;
    cin >> s >> t >> d;
    B.in_edge(s, t, d);
  }
  vll tmp = B.dis_from_s(r);
  vll l;
  if(tmp == l){
    cout << "NEGATIVE CYCLE" <<endl;
    return 0;
  }
  REP(i,n){
    if(tmp[i] == LINF) cout << "INF" <<endl;
    else cout << tmp[i] <<endl;
  }

  return 0;
}


