#include <iostream>

using namespace std;

int main(){
  int n, u, k, v;
  bool G[100][100] = {0};

  cin >> n;
  for(int i = 0;i < n;i++){
    cin >> u >> k;
    for(int j = 0;j < k;j++){
        cin >> v;
        G[u-1][v-1] = true;
    }
  }

  for(int i = 0;i < n;i++){
    for(int j = 0;j < n;j++){
      cout << G[i][j];
      if(j != n-1) cout << ' ';
    }

    cout << endl;
  }

  return 0;
}