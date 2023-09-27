#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>
using namespace std;

void solve(){
  int n; cin >> n;
  vector<int> p(n + 1);
  for(int i = 0; i < n; i++){
    cin >> p[i] >> p[i + 1];
  }
  vector<vector<int> > m(n + 1, vector<int>(n + 1));
  for(int i = 1; i <= n; i++) m[i][i] = 0;
  for(int i = 2; i <= n; i++){
    for(int j = 1; j <= n - i + 1; j++){
      int t = 1000000000;
      for(int k = j; k <= j + i - 2; k++){
        t = min(m[j][k] + m[k + 1][j + i - 1] + p[j - 1] * p[k] * p[j + i - 1], t);
      }
      m[j][j + i - 1] = t;
    }
  }
  cout << m[1][n] << endl;
  return;
}

int main(){
  solve();
  return 0;
}

