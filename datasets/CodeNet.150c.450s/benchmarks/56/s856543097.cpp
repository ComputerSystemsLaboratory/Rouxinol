# include <algorithm>
# include <cassert>
# include <cctype>
# include <cstdio>
# include <cstdlib>
# include <cstring>
# include <cmath>
# include <iostream>
# include <map>
# include <queue>
# include <set>
# include <sstream>
# include <stack>
# include <string>
# include <vector>
# include <iomanip>

# define rep(i, n) for (int i = 0; i < (int)(n); i++)
# define irep(i, n) for (int i = int(n) - 1; i >= 0; i--)
# define FOR(i, m, n) for (int i = int(m); i < (int)(n); i++)

using namespace std;
typedef long long ll;

int main() {
  int n; cin >> n;

  vector<ll> A(n);
  rep (i, n) cin >> A[i];

  ll max = -1000001;
  ll min =  1000001;
  ll sum = 0;

  for (ll e : A) {
    min = (e < min) ? e : min;
    max = (e > max) ? e : max;
    sum += e;
  }

  cout << min << ' ' << max << ' ' << sum << endl;
}