#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#define debug(x) cout << #x << "==" << x << endl;
using namespace std;

const int INF = 1e+8;

//??\???
#define MAX_N 50000
#define MAX_M 20
int N;
int M;
int C[MAX_M];

// dp ????????????
int dp[MAX_N + 1];

void print_dp_array(int n) {
  for(int i = 0; i <= n; i++) {
    if(dp[i] == INF) {
      cout <<  "INF ";
    } else {
      cout << setw(3) << dp[i];
    }
  }
  cout << endl;
}

int main() {
  ios::sync_with_stdio(false);

  cin >> N >> M;
  for(int i = 0; i < M; i++) {
    cin >> C[i];
  }

  // ?????????
  fill(dp, dp + MAX_N + 1, INF);
  dp[0] = 0;


  for(int s = 0; s <= N ; s++) {

    if(dp[s] != INF) {
      for(int i = 0; i < M; i++) {
        dp[s + C[i]] = min(dp[s + C[i]], dp[s] + 1);
      }
    }
  }


  cout << dp[N] << endl;


  return 0;
}