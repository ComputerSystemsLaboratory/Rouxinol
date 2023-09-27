#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>

#define debug(x) cout << #x << "==" << x << endl;

const int INF = 1e+8;

using namespace std;

//??\???
#define MAX_N 100
#define MAX_W 10000
int N, W_LIM;
int V[MAX_N], W[MAX_N];

// dp table
int dp[MAX_N][MAX_W];
bool checked[MAX_N][MAX_W];

// int n: n???????????§?????????????????£???
// int w: w??\??????????????§
// return: ?????§?????????
int rec(int i, int w) {

  if( i == -1 ) { return 0; }   // out of bounds ??????????????????!

  if(checked[i][w] == true) {return dp[i][w]; }
  checked[i][w] = true;

  int ret;

  if (w < W[i]) {
    ret = rec(i - 1, w);
  } else {
    ret = max( rec(i - 1, w), rec(i - 1, w - W[i]) + V[i]);
  }

  return dp[i][w] = ret;

}


int main() {
  ios::sync_with_stdio(false);

  cin >> N >> W_LIM;

  for(int i = 0; i < N; i++) {
    cin >> V[i] >> W[i];
  }

  cout << rec(N-1, W_LIM) << endl;

  return 0;
}