#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#define debug(x) cout << #x << "==" << x << endl;

using namespace std;

template<typename T>
vector<vector<T>> make_2d_vector(size_t rows, size_t cols, T init)
{ return vector< vector<T> >(rows, vector<T>(cols, init)); }


const int INF = 1e+8;

//??\???
#define MAX_N 50000
#define MAX_M 20
int N;
int M;
int C[MAX_M];

// dp ????????????
// int dp[MAX_N + 1];
// bool checked[MAX_N + 1];


// int least_coins(int s) {

//   if(s < 0) { return INF; }     // checked ??§ out of bounds ??????????????????!!
//   if(s == 0) { return 0; }

//   if(checked[s] == true) { return dp[s]; }
//   checked[s] = true;

//   int mn = INF;
//   for(int i = 0; i < M; i++) {
//     mn = min( mn, least_coins( s - C[i] ) + 1 );
//   }

//   return dp[s] = mn;

// }

int main() {
  ios::sync_with_stdio(false);

  cin >> N >> M;
  for(int i = 0; i < M; i++) {
    cin >> C[i];
  }

  // ?????¢????????°
  // cout << least_coins(N) << endl;

  // DP table
  // dp[i] := i????????????????????????????????????????????°
  vector< int > dp(N+1, INF);
  dp[0] = 0;
  for(int i = 0; i <= N; i++) {    
    for(int j = 0; j < M; j++) {
      if( C[j] <= i ) {
        dp[i] = min( dp[i-C[j]] + 1, dp[i] );
      }
    }
  }

  cout << dp[N] << "\n";

  return 0;
}