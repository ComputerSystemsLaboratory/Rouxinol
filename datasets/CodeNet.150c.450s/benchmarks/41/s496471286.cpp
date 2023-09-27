#include <bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
#define ALL(a) (a).begin(),(a).end()
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define ll long long
#define ull unsigned long long
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

using namespace std;
const ll INF = 10000000000000;
int E,V;
vector<vector<ll> > d;
vector<vector<bool> > is_pass;
int warshall(){
  REP(k,V){
    REP(i,V){
      REP(j,V){
	if(is_pass[k][j]&&is_pass[i][k]){
	  d[i][j] = min(d[i][j],d[i][k] + d[k][j]);
	  is_pass[i][j] = true;}
      }
    }
  }
  REP(i,V){
    if(d[i][i] < 0){
      cout << "NEGATIVE CYCLE" << endl;
      return 0;
    }
  }
  REP(i,V){
    REP(j,V){
      if(d[i][j]!=INF)
	cout << d[i][j]; 
      else
	cout << "INF";
      if(j<V-1)cout << " ";
    }
    cout << "\n";
  }
  return 0;
}
int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  cin >> V >> E;
  d.resize(V,vector<ll>(V,INF));
  is_pass.resize(V,vector<bool>(V,false));
  REP(i,E){
    int s,t;
    cin >> s >> t;
    cin >> d[s][t];
    is_pass[s][t] = true;
  }
  REP(i,V)d[i][i] = 0;
  warshall();

  return 0;
}