#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
typedef pair<int, int> P;
typedef pair<ll, ll> Pll;
typedef vector<int> Vi;
typedef tuple<int, int, int> T;
#define FOR(i,s,x) for(int i=s;i<(int)(x);i++)
#define REP(i,x) FOR(i,0,x)
#define ALL(c) c.begin(), c.end()
#define MP make_pair
#define DUMP( x ) cerr << #x << " = " << ( x ) << endl
#define fst first
#define snd second

#define INF 1000000

int t(int x) { return x*(x+1)*(x+2)/6; }

int dp[1000010];

int main() {
  ios_base::sync_with_stdio(false);

  Vi one, two, odd;
  for (int i = 1; t(i) <= 1000000; i++) {
    one.push_back(t(i));
    if (t(i)%2) odd.push_back(t(i));
  }

  for (int a : one) {
    for (int b : one) {
      two.push_back(a+b);
    }
  }
  sort(ALL(two));

  REP(i, 1000001) dp[i] = INF;
  dp[0] = 0;
  REP(i, 1000000) {
    for (int a : odd) {
      if (i+1-a >= 0)
	dp[i+1] = min(dp[i+1-a]+1, dp[i+1]);
    }
  }  

  while (1) {
    int n;
    cin >> n;
    if (n == 0) break;

    if (n == *lower_bound(ALL(one), n)) {
      cout << 1;
    } else if (n == *lower_bound(ALL(two), n)) {
      cout << 2;
    } else {
      bool flag = false;
      for (int a : one) {
	if (n - a == *lower_bound(ALL(two), n - a)) {
	  flag = true;
	  break;
	}
      }
      if (flag) {
	cout << 3;
      } else {
	for (int a : two) {
	  if (n - a == *lower_bound(ALL(two), n - a)) {
	    flag = true;
	    break;
	  }
	}
	cout << (flag ? 4 : 5);
      }
    }

    cout << ' ' << dp[n] << endl;

  }    
  return 0;
}