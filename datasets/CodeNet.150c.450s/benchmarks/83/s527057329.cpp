#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>

#define debug(x) cout << #x << "==" << x << endl;


const int INF = 1e+8;

using namespace std;

template<typename T>
vector<vector<T>> make_2d_vector(size_t rows, size_t cols, T init)
{ return vector< vector<T> >(rows, vector<T>(cols, init)); }


//??\???
#define MAX_N 100
#define MAX_W 10000
// int N, W_LIM;
// int V[MAX_N], W[MAX_N];

// // dp table
// int dp[MAX_N][MAX_W];
// bool checked[MAX_N][MAX_W];


int main() {
  ios::sync_with_stdio(false);

  int N, W;
  cin >> N >> W;

  vector<int> v(N);
  vector<int> w(N);
  for(int i = 0; i < N; i++) {
    cin >> v[i] >> w[i];
  }

  // dp[i][j] := i???????????§????????£???????????????????¨????j???????????????????????§???;
  // dp[i][j] := 
  //   0          (if i == 0 or j == )0
  //   dp[i-1][j] (if w[i-1] > j)
  //   max( dp[i-1][j], v[i-1] + dp[i-1][j-w[i-1]] )
  vector< vector<int> > dp = make_2d_vector(N+1, W+1, 0);
  for(int i = 1; i <= N; i++) {
    for(int j = 0; j <= W; j++) {
      if( j < w[i-1] ) dp[i][j] = dp[i-1][j];
      else              dp[i][j] = max( dp[i-1][j], v[i-1] + dp[i-1][j-w[i-1]] );
    }
  }

  // for(int i = 0; i <= N; i++) {
  //   for(int j = 0; j <= W; j++) {
  //     cout << dp[i][j] << " ";
  //   }
  //   cout << "\n";
  // }

  cout << dp[N][W] << "\n";

  return 0;
}