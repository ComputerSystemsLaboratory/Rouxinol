#include <bits/stdc++.h>
using namespace std;

#if __has_include("print.hpp")
  #include "print.hpp"
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef pair<int, int> p;

vector<vector<int>> dp(2000, vector<int>(2000));

void solve(string s, string t){
  int n = int(s.size());
  int m = int(t.size());

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if(s[i] == t[j]){
        dp[i+1][j+1] = dp[i][j] + 1;
      }else{
        dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
      }
    }
  }

  cout << dp[n][m] << endl;
}

int main(){
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    string s, t;
    cin >> s >> t;
    solve(s, t);
  }
}

