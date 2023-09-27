#include <iostream>
#include <vector>

using namespace std;

int main(){
  int n, u, k;
  cin >> n;

  vector<vector<int> > mtx(n);
  for(int i=0; i<n; i++)
    mtx[i].resize(n);


  for(int i=0; i<n; i++){
    cin >> u >> k;
    for(int j=0; j<k; j++){
      int t;
      cin >> t;
      mtx[i][t-1] = 1;
    }

  }
  
  for(int i=0; i<n; i++){
    for(int j=0; j<n-1; j++)
      cout << mtx[i][j] << " ";
    cout << mtx[i][n-1] << endl;
  }

  return 0;
}