#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<sstream>
#include<cmath>
#include<numeric>
#include<map>
#include<stack>
#include<queue>
using namespace std;
int inf = 1000000000;


int main(void) {

  int n;
  cin >> n;
  vector< vector<int> > g(n, vector<int>(n));
  int u, k;
  for(int i=0; i<n; i++){
    cin >> u >> k;
    int v;
    for(int j=0; j<k; j++){
      cin >> v;
      g[u-1][v-1] = 1;
    }
  }

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if( j != n-1 ) cout << g[i][j] << " ";
      else cout << g[i][j] << endl;
    }
  }

  return 0;
}

// EOF