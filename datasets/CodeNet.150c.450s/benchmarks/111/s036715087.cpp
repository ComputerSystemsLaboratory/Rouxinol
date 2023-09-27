#include <iostream>
#include <vector>
using namespace std;

int main() {

  long long int n;
  cin >> n;

  vector< long long int > v;

  for ( long long int i = 0; i < n; i++ ) {

    long long int in;
    cin >> in;

    v.push_back( in );

  }

  long long int dp[21][101] = {};

  dp[v[0]][0] = 1;

  for ( long long int i = 1; i < n - 1; i++ ) {

    for ( long long int j = 0; j <= 20; j++ ) {

      long long int k = j - v[i];
      if ( k >= 0 ) dp[k][i] += dp[j][i-1];
      k = j + v[i];
      if ( k <= 20 ) dp[k][i] += dp[j][i-1];

    }

  }

  cout << dp[v[n-1]][n-2] << endl;

  return 0;

}