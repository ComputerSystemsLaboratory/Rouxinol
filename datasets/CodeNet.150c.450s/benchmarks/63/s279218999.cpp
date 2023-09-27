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
class dijkstra{
  private:
    ll N; // 頂点数
    struct edge{
      ll to; ll cost; // 頂点iからの行き先とそのコスト
    };
    vector<vector<edge>> G; // 辺の隣接リスト
    vector<vector<edge>> F; // 辺の隣接リスト
    vll dis; // sからiへの最小コスト
    vll par; // iの一個前の頂点
    ll inf = 1e18; 
    priority_queue<pll, vector<pll>, greater<pll>> que; //pair<sからiへ行くのの暫定最小コスト、i>の優先度付きキュー
    
  public:
    dijkstra(ll n){
      N = n;
      G.resize(N); F.resize(N);
      dis.resize(N); par.resize(N);
    }

    // 辺を入力
    void in_edge(ll from_, ll to_, ll cost_){
      edge e = {to_, cost_};
      G[from_].push_back(e);
    }

    // 辺の逆転
    void rev_edge(){
      for(ll i=0;i<N;i++){
        for(ll j=0;j<G[i].size();j++){
          edge tmp = G[i][j];
          edge in = {i, tmp.cost};
          F[tmp.to].push_back(in);
        }
      }
    }

    // 初期化
    void init(ll n){
      while(!que.empty()) que.pop();

      for(ll i=0;i<n;i++){
        dis[i] = inf; // コストの初期化
        par[i] = i; // 親の初期化
      }
    }

    // 頂点sから各頂点への最短距離の配列を返す
    vll dis_from_s(ll s){
      init(N);

      dis[s] = 0;
      que.push(make_pair(0,s));

      while(!que.empty()){
        pll pai = que.top(); que.pop();
        ll v = pai.second;

        if(dis[v] < pai.first) continue;

        for(ll i=0;i<G[v].size();i++){
          edge tmp = G[v][i];
          if(dis[tmp.to] > dis[v] + tmp.cost){
            dis[tmp.to] = dis[v] + tmp.cost;
            par[tmp.to] = v;
            que.push(make_pair(dis[tmp.to],tmp.to));
          }
        }
      }
      return dis;
    }

    // 各頂点からsへの最短距離への最短距離を返す (有向グラフの辺を逆転し、sからの最短距離を求める)
    vll dis_to_s(ll s){
      init(N);
      rev_edge();
      que.push(make_pair(0,s));

      while(!que.empty()){
        pll pai = que.top(); que.pop();
        ll v = pai.second;

        if(dis[v] < pai.first) continue;

        for(ll i=0;i<F[v].size();i++){
          edge tmp = F[v][i];
          if(dis[tmp.to] > dis[v] + tmp.cost){
            dis[tmp.to] = dis[v] + tmp.cost;
            par[tmp.to] = v;
            que.push(make_pair(dis[tmp.to],tmp.to));
          }
        }
      }
      return dis;
    }

    // sからtまでの最短経路
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
}; 
//-----------------------------------------

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout << fixed << setprecision(10);

  ll n, m, r;
  cin >> n >> m >> r;
  dijkstra D(n);
  REP(i,m){
    ll s, t, d;
    cin >> s >> t >> d;
    D.in_edge(s,t,d);
  }
  vll tmp = D.dis_from_s(r);
  REP(i,n){
    if(tmp[i] == LINF) cout << "INF" <<endl;
    else cout << tmp[i] << endl;
  }

  return 0;
}


