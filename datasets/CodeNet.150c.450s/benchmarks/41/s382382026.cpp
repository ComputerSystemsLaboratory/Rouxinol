#include <iostream>
#define INF 1000000000000

using namespace std;
using llong = long long;

llong dist[100][100];
int main(){
  int N,M;
  cin >> N >> M ;
  for(int i=0;i<N;++i){
    for(int j=0;j<N;++j){
      if(i!=j) dist[i][j] = INF;
    }
  }
  for(int i=0;i<M;++i){
    int s,t;
    llong d;
    cin >> s >> t >> d;
    dist[s][t] = d;
  }
  
  for(int i=0;i<N;++i){
    for(int j=0;j<N;++j){
      for(int k=0;k<N;++k){
        if(dist[j][i]==INF || dist[i][k] == INF){
          dist[j][k] = dist[j][k];
        }else{
          dist[j][k] = min(dist[j][i]+dist[i][k],dist[j][k]); 
        }
      }
    }
  }
  
  for(int i=0;i<N;++i){
    if(dist[i][i] < 0){
      cout << "NEGATIVE CYCLE" << endl;
      return 0;
    }
  }

  for(int i=0;i<N;++i){
    for(int j=0;j<N;++j){
      if(dist[i][j] != INF) cout << dist[i][j];
      else cout << "INF" ;

      if(j != N-1) cout << " " ;
      else cout << endl;
    }
  }
  return 0;
}