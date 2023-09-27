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


int main() {
  int n;

  while (cin >> n) {
    if (!n) break;

    vector<int> scr(n);
    for (int i=0; i<n; i++) {
      cin >> scr[i];
    }

    int  sum = 0;
    int _max = scr[0];
    int _min = scr[0];

    for (int s : scr) {
      sum  += s;
      _min = min(_min, s);
      _max = max(_max, s);
    }

    sum -= _max;
    sum -= _min;

    cout << sum / (n-2) << endl;
  }

  return 0;
}