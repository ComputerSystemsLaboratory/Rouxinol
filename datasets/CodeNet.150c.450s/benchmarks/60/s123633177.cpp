#include <vector>
#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <algorithm>
#include <stack>
#include <queue>
#include <list>

const int INF = 1001001000;
const int MOD = (int)1e9 + 7;

using ll = long long;

using namespace std;


int main(){

  int n;
  int G[105][105];

  cin >> n;

  for( int i = 0; i < n; ++i){
    for( int j = 0; j < n; ++j){
      G[i][j] = 0;
    }
  }

  for( int i = 0; i < n; ++i){
    int u,k,v;
    cin >> u >> k;
    for( int j = 0; j < k; ++j){
      cin >> v;
      G[u-1][v-1] = 1;
    }
  }

  for( int i = 0; i < n; ++i){
    for( int j = 0; j < n; ++j){
      if(j) cout << " ";
      cout << G[i][j];
    }
    cout << endl;
  }

}