#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cassert>

#define debug(x) cout << #x << "==" << x << endl;

using namespace std;

//??\???
#define MAX_N 100
#define MAX_NUM 20
int N;
int num[MAX_N];
long long dp[MAX_N+1][MAX_NUM+1];
bool checked[MAX_N+1][MAX_NUM+1];

void print_dp_table() {
  for(int i = 0; i < N; i++ ) {
    for(int s = 0; s < MAX_NUM; s++ ) {
      cout << setw(3) << dp[i][s] << " ";
    }
    cout << "\n";
  }
  cout << "\n";

}

// i??????????????????????????§?????°???????????????sum??????????????¨?????§?????????????????????????????°
long long rec(int i, int sum) {

  if( sum < 0 || sum > 20 ) return 0;
  if ( i == 0 ) return (sum == num[i]);

  if( checked[i][sum] ) {
    return dp[i][sum];
  } else {
    checked[i][sum] = true;
    return dp[i][sum] = rec(i - 1, sum - num[i]) + rec(i - 1, sum + num[i]);
  }

}

int main() {
  ios::sync_with_stdio(false);

  cin >> N;

  for(int i = 0; i < N; i++) {
    cin >> num[i];
  }

  int sum = num[N-1];

  cout << rec(N-2, sum) << endl;

  return 0;
}