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

bool is_prime(int num) {

  for (int i = 2; i <= int(sqrt(num)); i++) {
    if (num % i == 0) return false;
  }

  return true;
}

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int ans = 0;

  rep(i, n) {
    if (is_prime(a[i])) ans++;
  }

  cout << ans << endl;
}