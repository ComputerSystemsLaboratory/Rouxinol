#include <vector>
#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <algorithm>
#include <stack>
#include <queue>
#include <list>

const long long int INF = 6000000000;
const int MOD = (int)1e9 + 7;

using ll = long long;

using namespace std;

typedef pair<int,int> P;

struct edge{
  int to;
  int cost;
};

int V,E;
long long d[200][200];


int main(){

  cin >> V >> E;
  for( int i = 0; i < V; ++i){
    for( int j = 0; j < V; ++j){
      d[i][j] = INF;
    }
  }

  for( int i = 0; i < V; ++i){
    d[i][i] = 0;
  }

  for( int i = 0; i < E; ++i){
    int a,b,c;
    cin >> a >> b >> c;
    d[a][b] = c;
  }

  for( int k = 0; k < V; ++k){
    for( int i = 0; i < V; ++i){
      for( int j = 0; j < V; ++j){
        d[i][j] = min( d[i][j], d[i][k]+d[k][j]);
      }
    }
  }

  bool f = false;
  for( int i = 0; i < V; ++i){
    if( d[i][i] < 0 ){
      f = true;
    }
  }

  if(f){
    cout << "NEGATIVE CYCLE" << endl;
  }else{
    for( int i = 0; i < V; ++i){
      for( int j = 0; j < V; ++j){
        if(j) cout << " ";
        if( d[i][j]  >= 3000000000 ){
          cout << "INF";
        }else{
          cout << d[i][j];
        }
      }
      cout << endl;
    }
  }

}