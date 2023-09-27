#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<queue>
using namespace std;
long long int inf = 10000000000;

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

int main(){
  long long int n, m;
  cin >> n >> m;

  vector< vector<long long int> > dist(n, vector<long long int>(n, inf));

  for(int i=0; i<m; i++){
    int s, t, d;
    cin >> s >> t >> d;
    dist[s][t] = d;
  }
  for(int i=0; i<n; i++) dist[i][i] = 0;

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if( dist[j][i] == inf ) continue;
      for(int k=0; k<n; k++){
        if( dist[i][k] == inf ) continue;
        if( dist[j][k] > dist[j][i] + dist[i][k] ) dist[j][k] = dist[j][i] + dist[i][k];
      }
    }
  }

  for(int i=0; i<n; i++){
    if( dist[i][i] < 0 ){
      cout << "NEGATIVE CYCLE" << endl;
      return 0;
    }
  }

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if( dist[i][j] == inf ) cout << "INF";
      else cout << dist[i][j];
      if( j == n-1 ) cout << endl;
      else cout << " ";
    }
  }

  return 0;
}





// EOF