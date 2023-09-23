#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll memo[21];

ll fact( int n ) {
  if ( memo[n] != -1 ) return memo[n];
  if ( n <= 1 ) return 1;
  return memo[n] = n * fact(n-1);
}

int main() {
  memset(memo,-1,sizeof(memo));
  int n; cin >> n;
  ll ret = fact(n);
  cout << ret << endl;
  return 0;
}