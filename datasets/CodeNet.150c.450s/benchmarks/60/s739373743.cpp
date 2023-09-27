#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

class branch{
  int to;
  branch(int to){
    this->to = to;
  }
};

int main(){
  int n; cin >> n;
  vector<branch> graph[n+1];
  int g[n+1][n+1];
  memset(g, 0, sizeof(g));

  int v, k, to;
  for(int i=0; i<n; i++){
    cin >> v;
    cin >> k;
    for(int j=0; j<k; j++){
      cin >> to;
      g[v][to]=1;
    }
  }

  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      cout << g[i][j];
      if(j!=n) cout << " ";
    }
    cout << endl;
  }

  return 0;
}

