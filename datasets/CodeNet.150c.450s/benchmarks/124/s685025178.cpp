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


ll M[110][110]; //edge weight
ll color[110];
ll white = 0, gray = 1, black = 2;
ll n; 

void dijkstra(){
  ll d[110];//d[v] vまでの最短経路
  ll minv;
  rep(i, 0, n){
    color[i] = white;
    d[i] = INF;
  }
  d[0] = 0;
  color[0] = gray;
  while(1){
    minv = INF;
    ll u = -1;
    rep(i, 0, n){
      if(minv > d[i] && color[i] != black){// はじめd[i]=0, u = 0, minv = 0
        u = i;
        minv = d[i];
      }
    }
    if(u == -1) break;
    color[u] = black;// 最も重さが小さいほうへすすむ
    rep(v, 0, n){
      if(color[v] != black && M[u][v] != INF){
        if(d[v] > d[u] + M[u][v]){
          d[v] = d[u] + M[u][v]; //d[v]を更新
          color[v] = gray;
        }
      }
    }
  }
  rep(i, 0, n){
    cout << i << " " << d[i] << endl;
  }
}

int main() {
  cin >> n;
  rep(i, 0, n){//始めに辺の重さをマックスに初期化
    rep(j, 0, n) M[i][j] = INF;
  }

  rep(i, 0, n){
    ll u; cin >> u;
    ll k; cin >> k;
    rep(j, 0, k){
      ll v, c; cin >> v >> c;
      M[u][v] = c;//辺の重さを入力
    }
  }

  dijkstra();

  return 0;
}

