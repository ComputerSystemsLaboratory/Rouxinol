#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int C[21];

int solve() {
  int t[21][50001];
  
  for (int i = 0; i <= m; i++) t[i][0] = 0;
  for (int j = 1; j <= n; j++) t[0][j] = 999999;
  
  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= n; j++) {
      if (j < C[i]) {
        t[i][j] = t[i-1][j];
      } else {
        t[i][j] = min(t[i][j - C[i]] + 1, t[i - 1][j]);
      }
    }
  }
  
  return t[m][n];
}

int main(void){
    
    cin >> n >> m;
    C[0] = 0;
    for (int i = 1; i <= m; i++) cin >> C[i];
    
    int res = solve();
    
    cout << res << endl;
    
    return 0;
}