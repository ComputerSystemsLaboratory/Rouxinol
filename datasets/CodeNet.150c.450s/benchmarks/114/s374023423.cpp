#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef vector<ld> vd;
typedef vector<ll> vll;
typedef vector<string> vstr;
typedef vector<vector<ll>> vvll;
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
const int MAX = 100;
int n;
int M[MAX][MAX];

int prim(){
  int u, minv;
  int d[MAX], p[MAX], color[MAX];

  for(int i=0;i<n;i++){
    d[i] = INF;
    p[i] = -1;
    color[i] = 0;
  }

  d[0] = 0;

  while(1){
    minv = INF;
    u = -1;
    for(int i=0;i<n;i++){
      if(minv > d[i] && color[i] != 2){
        u = i;
        minv = d[i];
      }
    }
    if(u == -1) break;
    color[u] = 2;

    for(int v=0;v<n;v++){
      if(color[v] != 2 && M[u][v] != INF){
        if(d[v] > M[u][v]){
          d[v] = M[u][v];
          p[v] = u;
          color[v] = 1;
        }
      }
    }

  }
  int sum = 0;
  for(int i=0;i<n;i++){
    if(p[i] != -1) sum += M[i][p[i]];
  }

  return sum;
}
//-----------------------------------------

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout << fixed << setprecision(10);

  cin >> n;

  REP(i,n){
    REP(j,n){
      int e; cin >> e;
      if(e == -1) M[i][j] = INF;
      else M[i][j] = e;
    }
  }

  cout << prim() <<endl;









  return 0;
}

