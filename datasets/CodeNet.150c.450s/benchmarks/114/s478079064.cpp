#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define Rep(i, a, b) for(int i = a; i <= b; i++)
#define _GLIBCXX_DEBUG
#define Vl vector<ll>
#define Vs vector<string>
#define Vp vector<pair<ll, ll>>
#define ll long long
#define ALL(v) (v).begin(),(v).end()
using namespace std;
const double pi = acos(-1.0);
const ll MOD = 1e9 + 7;
const ll INF = 1LL << 60;
using Graph = vector<vector<ll>>;

ll n;
ll M[110][110]; // kyori
const int white = 0, gray = 1, black = 2;

ll prim(){
  ll u, minv;
  ll d[10000], p[10000], color[10000];

  rep(i, 0, n){
    d[i] = INF;
    p[i] = -1; // parent
    color[i] = white;
  }
  d[0] = 0;
  while(1){
    minv = INF;
    u = -1;
    rep(i, 0, n){
      if(minv > d[i] && color[i] != black){
        u = i;
        minv = d[i];
      }
    }
    if(u == -1) break;
    color[u] = black;
    rep(v, 0, n){
      if(color[v] != black && M[u][v] != INF){
        if(d[v] > M[u][v]){
          d[v] = M[u][v];
          p[v] = u;
          color[v] = gray;
        }
      }
    }
  }
    ll sum = 0;
    rep(i, 0, n){
    if(p[i] != -1) sum += M[i][p[i]];
    }

    return sum;
}

int main() {
  cin >> n;
  rep(i, 0, n){
    rep(j, 0, n){
      ll a; cin >> a;
      M[i][j] = (a == -1) ? INF : a;
    }
  }

  cout << prim() << endl;

  return 0;
}

