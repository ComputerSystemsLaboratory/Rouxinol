// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_10_C
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>

#define debug(x) cout << #x << "==" << x << endl;

using namespace std;

//??\???
#define MAX_LEN 1000
int N;
int dp[MAX_LEN + 1][MAX_LEN + 1];

void print_dp_table(int n, int m) {
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cout <<setw(2) << dp[i][j];
    }
    cout << "\n";
  }
  cout << "\n";
}

int main() {
  ios::sync_with_stdio(false);

  cin >> N;

  string s1, s2;

  while( cin >> s1 >> s2 ) {

    std::vector<char> a;
    std::vector<char> b;
    for(char& c : s1) {
      a.push_back(c);
    }
    for(char& c : s2) {
      b.push_back(c);
    }


    // dp ????????????????????????
    fill(dp[0], dp[MAX_LEN + 1], 0);

    for( int i = 0; i < (int)a.size(); i++) {
      for( int j = 0; j < (int)b.size(); j++) {
        if( a[i] == b[j] ) {
          dp[i + 1][j + 1] = dp[i][j] + 1;
        } else {
          dp[i + 1][j + 1] = max( dp[i + 1][j], dp[i][j + 1]);
        }
      }
    }

    // print_dp_table(a.size(), b.size());
    cout << dp[a.size()][b.size()] << endl;

  }

  return 0;
}