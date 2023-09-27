#include <bits/stdc++.h>
#define REP(i,n) for (int i = 0; i <(n); ++i)
#define REP2(i,x,n) for (int i = x; i <(n); ++i)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
using namespace std;
using ll = long long;
using P = pair<int,int>;
static const double PI = acos(-1);

static const int N = 100;
static const int INF = (1<<21);

int d[N]; //距離で訪問状態を管理する
int n, M[N][N];

void bfs(int s){
  queue<int> q;
  q.push(s);

  REP(i,n) d[i] = INF;

  d[s] = 0;
  int u;
  while(!q.empty()){
    u = q.front(); q.pop();
    REP(v,n){
      //つながっていなかったら，飛ばす
      if(M[u][v] == 0) continue;
      //既に訪れていたら，飛ばす
      if(d[v] != INF) continue;

      d[v] = d[u] + 1;
      q.push(v);
    }
  }

  REP(i,n){
    cout << i + 1 << " " << ((d[i] == INF) ? (-1) : d[i] ) << endl;
  }




}
int main(){
  int u, k, v;
  cin >> n;
  REP(i,n){
    REP(j,n) M[i][j] = 0;
  }

  REP(i,n){
    cin >> u >> k;
    --u;
    REP(i,k){
      cin >> v;
      --v;
      M[u][v] = 1;
    }
  }

  bfs(0);
  return 0;
}

