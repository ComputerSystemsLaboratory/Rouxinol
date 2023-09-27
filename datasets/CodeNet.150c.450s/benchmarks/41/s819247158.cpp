#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=int(a);i<int(b);++i)
#define SIZE 105
#define INF 1e18
#define MOD 1000000007

using namespace std;
typedef long long int ll;
typedef pair <int,int> P;

ll d[SIZE][SIZE];
int V;

void warshall_floyd_init(){
  fill(d[0],d[SIZE],INF);
  rep(i,0,SIZE) d[i][i] = 0;
}

//trueなら負の閉路が存在
bool warshall_floyd(){
  rep(k,0,V) rep(i,0,V){
    if(d[i][k]==INF)continue;
    rep(j,0,V){
      if(d[k][j]==INF)continue;
      d[i][j] = min(d[i][j],d[i][k]+d[k][j]);
    }
  }
  rep(i,0,V) if(d[i][i] < 0) return true;
  return false;
}

void add_edge(int a,int b,ll cost){
  d[a][b] = cost;
}

int E;

int main(){
  cin >> V >> E;
  warshall_floyd_init();
  rep(i,0,E){
    int s,t;
    ll D;
    cin >> s >> t >> D;
    add_edge(s,t,D);
  }
  if(warshall_floyd()){
      cout << "NEGATIVE CYCLE" << endl;
  }else{
    rep(k,0,V){
      rep(i,0,V){
        if(i!=0) cout << " ";
        if(d[k][i]==INF)cout << "INF";
        else cout << d[k][i];
      }
      cout << endl;
    }
  }

  return 0;
}

