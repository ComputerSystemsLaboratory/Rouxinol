#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <map>
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
map<int,int> dp;


int least_coins(int s) {

  if(s < 0) { return INF; }     // checked ??§ out of bounds ??????????????????!!
  if(s == 0) { return 0; }

  if( dp.count(s) == 1 ) { return dp[s]; }

  int mn = INF;
  for(int i = 0; i < M; i++) {
    mn = min( mn, least_coins( s - C[i] ) + 1 );
  }


  return dp[s] = mn;

}

int main() {
  ios::sync_with_stdio(false);

  cin >> N >> M;
  for(int i = 0; i < M; i++) {
    cin >> C[i];
  }

  cout << least_coins(N) << endl;

  return 0;
}