#include <bits/stdc++.h>
using namespace std;




int main(){
  int n;
  cin >> n;
  vector<vector<int> > G(n, vector<int>(n,0));
  for (int i=0;i<n;i++){
    int u,k;
    cin >> u >> k;
    for (int j=0;j<k;j++){
      int v;
      cin >> v;
      G[u-1][v-1] = 1;
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(j)  cout << " ";
      cout << G[i][j];
    }
    cout << endl;
  }
}
