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
  int n;
  cin >> n;
  vector<ll> R(n);
  rep (i, n) cin >> R[i];
 
  ll maxv = R[1] - R[0];
  ll minv = R[0];

  for (int j = 1; j < n; j++) {
    maxv = maxv > R[j] - minv ? maxv : R[j] - minv;
    minv = minv < R[j] ? minv : R[j];
  }

  cout << maxv << endl;
}