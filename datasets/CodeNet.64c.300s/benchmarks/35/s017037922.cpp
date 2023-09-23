#include<iostream>
#include<vector>
using namespace std;

int main()
{
  int n;
  int g[105][105];
  
  cin >> n;

  for(int i = 0; i < n; i++){
    int u, k;
    cin >> u >> k;

    for(int j = 0; j < n; j++) g[u-1][j] = 0;

    for(int j = 0; j < k; j++){
      int v;
      cin >> v;

      g[u-1][v-1] = 1;
      
    }

    for(int j = 0; j < n; j++){
      if(j) cout << " ";
      cout << g[i][j];
    }

    cout << endl;
    
  }

  return 0;

}

