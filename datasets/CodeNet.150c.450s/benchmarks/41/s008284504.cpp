#include<bits/stdc++.h>
using namespace std;

static const int MAX = 100;
static const long long INF = (1LL<<32);

int V,E;
long long d[MAX][MAX];

void floyd(){
  for(int k=0;k<V;k++){
    for(int i=0;i<V;i++){
      if(d[i][k] == INF) continue;
      for(int j=0;j<V;j++){
	if(d[k][j] == INF) continue;
	d[i][j] = min(d[i][j],d[i][k] + d[k][j]);
      }
    }
  }
}

int main(){
  cin >> V >> E;
  for(int i=0;i<V;i++){
    for(int j=0;j<V;j++){
      if(i == j) d[i][j] = 0;
      else d[i][j] = INF;
    }
  }
  for(int i=0;i<E;i++){
    int a,b,c;
    cin >> a >> b >> c;
    d[a][b] = c;
  }
  floyd();

  bool minus = false;
  for(int i=0;i<V;i++){
    if(d[i][i] < 0) minus = true;
  }
  if(minus) {
    cout << "NEGATIVE CYCLE" << endl;
  } else {
    for(int i=0;i<V;i++){
      for(int j=0;j<V;j++){
	if(j) cout << " ";
	if(d[i][j] == INF) cout << "INF";
	else cout << d[i][j];
      }
      cout << endl;
    }
  }
}