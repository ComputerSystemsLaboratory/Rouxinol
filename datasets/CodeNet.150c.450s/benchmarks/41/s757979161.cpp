#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, n) for (int i = (int)(n); i >= 0; i--)
#define REP(i, m, n) for (int i = (int)(m); i <= (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

//const long long INF = 1LL << 60;
const int INF = 1001001001 * 2;

const int MAX_V = 110;
const int MAX_E = 9910;
int d[MAX_V][MAX_V];
int V, E;

void warshall_floyd(){
  rep(k, V){
    rep(i, V) if(d[i][k] != INF){
      rep(j, V) if(d[k][j] != INF){
        chmin(d[i][j], d[i][k] + d[k][j]);
      }
    }
  }
}

int main(){
  cin >> V >> E;

  rep(i, V) rep(j, V){
    if(i == j) d[i][j] = 0;
    else d[i][j] = INF;
  }
  rep(i, E){
    int s, t, c;
    cin >> s >> t >> c;
    d[s][t] = c;
  }

  warshall_floyd();

  rep(i, V){
    if(d[i][i] < 0){
      cout << "NEGATIVE CYCLE" << endl;
      return 0;
    }
  }

  rep(i, V){
    rep(j, V){
      if(j) cout << " ";
      if(d[i][j] == INF) cout << "INF"; 
      else cout << d[i][j];
    }
    cout << endl;
  }
 
  return 0;
}



