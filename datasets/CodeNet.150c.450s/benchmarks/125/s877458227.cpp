#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FOR(i,a,b) for(ll i = (a); i < (ll)(b); ++i)
#define REP(i,n) FOR(i,0,n)
const double PI = acos(-1), EPS = 1e-10;
const ll MOD = 1e9+7;
int t=0;
vector<int> d,f;
vector<bool> used;
void dfs(int now,vector<vector<int>> &gr){
  if(used[now]) return;
  used[now] = true;
  t++;
  d[now] = t;
  REP(i,gr[now].size()){
    dfs(gr[now][i],gr);
  }
  t++;
  f[now] = t;
}
signed main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  d.resize(n);
  f.resize(n);
  used.assign(n,false);
  vector<vector<int>> gr(n);
  REP(i,n){
    int k;
    cin >> k >> k;
    REP(j,k){
      int v;
      cin >> v;
      gr[i].push_back(v-1);
    }
  }
  REP(i,n){
    dfs(i,gr);
  }
  REP(i,n){
    cout << i+1 << " " << d[i] << " " << f[i] << endl;
  }
}

