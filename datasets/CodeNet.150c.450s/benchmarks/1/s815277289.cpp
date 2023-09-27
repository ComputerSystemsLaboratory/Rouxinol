#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <functional>
#include <cstdint>
#include <cstdio>

#define index_of(as, x) \
  distance(as.begin(), lower_bound(as.begin(), as.end(), x))

using namespace std;

typedef int64_t ll;

const int INF = 1e9 + 10;

int n;
stack<int> s;
vector<int> a;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> n;
  a.resize(n);

  int c = 0;

  /*
  for (int i = 0; i < 2 * n; i++) {
    string str; int idx;
    cin >> str;
    if (str[0] == 'a') {
      cin >> idx;
      s.push(idx);
    } else {
      a[c++] = s.top();
      s.pop();
    }
  }*/
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  vector<int> dp(n, INF);
  for (int i = 0; i < n; i++) {
    *lower_bound(dp.begin(), dp.begin() + n, a[i]) = a[i];
  }

  cout << lower_bound(dp.begin(), dp.end(), INF) - dp.begin() << endl;
  //cout << n - (lower_bound(dp.begin(), dp.end(), INF) - dp.begin()) << endl;

  return 0;
}