#include <iostream>
#include <vector>
using namespace std;
const int INF = 1e9;

int main(){
  string s, t;
  cin >> s >> t;
  int n = s.length(), m = t.length();
  vector< vector<int> > DP(n+1, vector<int>(m+1,INF));
  DP[0][0] = 0;
  for(int i = 0; i <= n; ++i){
    for(int j = 0; j <= m; ++j){
      if(i > 0) DP[i][j] = min(DP[i][j], DP[i-1][j] + 1);
      if(j > 0) DP[i][j] = min(DP[i][j], DP[i][j-1] + 1);
      if(i > 0 && j > 0)
        DP[i][j] = min(DP[i][j], DP[i-1][j-1] + !(s[i-1] == t[j-1]));
    }
  }
  cout << DP[n][m] << endl;
  return 0;
}

