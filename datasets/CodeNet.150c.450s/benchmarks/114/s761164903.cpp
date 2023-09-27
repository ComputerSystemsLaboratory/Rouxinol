#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, n) for (int i = (int)(n); i >= 0; i--)
#define REP(i, m, n) for (int i = (int)(m); i <= (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;
typedef pair<int,int> pii;
#define fi first
#define se second
#define mp make_pair

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

//const long long INF = 1LL << 60;
const int INF = 1001001001;
const int MAX = 110;

//struct edge{
//  int to, cost;
//  edge(){}
//  edge(int to, int cost): to(to), cost(cost){}
//};

int G[MAX][MAX];
bool seen[MAX];
priority_queue<pii, vector<pii>, greater<pii> > pq;
int n;

int prim(){
  seen[0] = true;
  rep(i, n){
    if(G[0][i] == -1) continue;
    pq.push(mp(G[0][i], i));
  }
  
  int sum = 0;
  while(!pq.empty()){
    pii p = pq.top();
    pq.pop();
    if(seen[p.se]) continue;
    seen[p.se] = true;
    sum += p.fi;
    rep(i, n){
      if(G[p.se][i] == -1) continue;
      pq.push(mp(G[p.se][i], i));
    }
  }

  return sum;
}

int main(){
  cin >> n;
  rep(i, n) rep(j, n) cin >> G[i][j];

  cout << prim() << endl;
 
  return 0;
}



