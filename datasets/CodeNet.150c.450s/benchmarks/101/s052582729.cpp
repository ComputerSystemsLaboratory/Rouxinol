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
vector<ll> fri[100100];
int color[100100];

void dfs(int r, int c){
  stack<ll> s;
  s.push(r);
  color[r] = c;
  while(!s.empty()){
    int u = s.top(); s.pop();
    rep(i, 0, fri[u].size()){
      int v = fri[u][i];
      if(color[v] == -1){
        color[v] = c;
        s.push(v);
      }
    }
  }
}

void assignColor(){
  int id = 1;
  rep(i, 0, n) color[i] = -1;
  rep(u, 0, n){
    if(color[u] == -1) dfs(u, id++);
  }
}

int main() {
  ll m; cin >> n >> m;
  
  rep(i, 0, m){
    ll a, b; cin >> a >> b;
    fri[a].push_back(b);
    fri[b].push_back(a);
  }

  assignColor();

  ll q; cin >> q;
  rep(i, 0, q){
    ll a, b; cin >> a >> b;
    if(color[a] == color[b]) puts("yes");
    else puts("no");
  }

  return 0;
}

