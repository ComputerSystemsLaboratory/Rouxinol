#include <bits/stdc++.h>
using namespace std;

#define PI 4*atan(1)
#define INF 1e8

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(){
  int n;
  cin >> n;
  vector<vector<int> > G;
  G.resize(n);
  for(int i = 0; i < n; i++){
    int u, k;
    cin >> u >> k;
    for(int j = 0; j < k; j++){
      int tmp;
      cin >> tmp;
      G[i].push_back(tmp);
    }
  }
  for(int i = 0; i < n; i++){
    int k = 0;
    for(int j = 0; j < n; j++){
      if(G[i].size() != 0){
        if(G[i][k] == j + 1){
          cout << 1;
          k++;
        }else cout << 0;
      }else cout << 0;
      if(j != n - 1)cout << " ";
    }

      cout << endl;
      k = 0;
  }
}