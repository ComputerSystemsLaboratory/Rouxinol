#include <bits/stdc++.h>

using namespace std;

#define ll long long
typedef complex<double> P;

const int MAX_SIZE = 1001;
int q;
int dp[MAX_SIZE][MAX_SIZE] = {};

int main() {
  cin >> q;
  for (int i = 0; i < q; i++) {

    for (int j = 0; j < MAX_SIZE; j++) {
      dp[MAX_SIZE-1][0] = 0;
      dp[0][MAX_SIZE-1] = 0;
    }

    string a, b; cin >> a >> b;

    for (int j = 0; j < a.size(); j++) {
      for (int k = 0; k < b.size(); k++) {
        if(a[j] == b[k]) {
          dp[j+1][k+1] = dp[j][k] + 1;
        }
        else {
          dp[j+1][k+1] = max(dp[j][k+1], dp[j+1][k]);
        }
      }
    }

    cout << dp[a.size()][b.size()] << endl;
  }
}