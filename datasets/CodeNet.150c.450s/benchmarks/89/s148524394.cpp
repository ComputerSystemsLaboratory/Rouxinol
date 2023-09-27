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

template <typename T>
void print_mat(T t) {
  rep (i, t.size()) {
    rep (j, t[0].size()) {
      cout << t[i][j];
    }
    cout << endl;
  }
}

template <typename T>
void print_vec(vector<T> t) {
  rep (i, t.size()) {
    cout << t[i] << " ";
  }
  cout << endl;
}


int main() {

  int a, d, n;
  int max = 1000001;  // ???????????????
  vector<int> prime(max);
  rep (i, max) prime[i] = 1;

  // ??¨????????????????????????
  prime[0] = 0;
  for (int i=2; i<=max; i++) {
    for (int j=2; i*j<max; j++) {
      prime[i*j-1] = 0;
    }
  }

  while (cin >> a >> d >> n && a && d && n) {
    int a_i = 0;

    for (int k=0; k<=max; k++) {
      if (prime[a+d*k-1]) {
        // cout << "match: " << a + d * k << "(" << prime[a+d*k-1] << ")" << endl;
        a_i++;
      } else {
        // cout << "not match: " << a + d * k << "(" << prime[a+d*k-1] << ")" << endl;
      }

      if (a_i == n) {
        cout << a+d*k << endl;
        break;
      }
    }
  }
}