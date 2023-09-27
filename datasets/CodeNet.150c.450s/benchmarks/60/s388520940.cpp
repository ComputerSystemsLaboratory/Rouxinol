#include <cmath>
#include <iostream>
using namespace std;

int G[110][110] ={0};

int main(){
  int n;
  cin >> n;
  int u, k;
  int v[100000];
  for(int i=0; i<n; i++){
    cin >> u >> k;
    for(int j=0; j<k; j++){
      cin >> v[j];
      G[i][v[j]] = 1;
    }
  }
  for(int i=0; i<n; i++){
    for(int j=1; j<n; j++){
      cout << G[i][j] << " ";
    }
    cout << G[i][n] << endl;
  }
    
    
}