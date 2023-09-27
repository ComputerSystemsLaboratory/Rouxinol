#include <algorithm>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;

int ctoi(char c1, char c2) {
  return (c1 - '0') * 10 + (c2 - '0');
}

int totime(int h, int m, int s) {
  return h * 3600 + m * 60 + s;
}

int solve(int n) {
  int imos[100000] = {};
  for (int i = 0; i < n; i++) {
    std::string b, e;
    cin >> b >> e;
    int begin_i = totime(ctoi(b[0], b[1]), ctoi(b[3], b[4]), ctoi(b[6], b[7]));
    int end_i   = totime(ctoi(e[0], e[1]), ctoi(e[3], e[4]), ctoi(e[6], e[7]));
    imos[begin_i]++;
    imos[end_i]--;
  }
  int cum    = imos[0];
  int result = 0;
  for (int i = 1; i < 100000; i++) {
    cum += imos[i];
    result = std::max(result, cum);
  }
  return result;
}

int main(void) {
  cout << std::fixed << std::setprecision(10);
  cin.tie(0);
  std::ios::sync_with_stdio(false);

  int n;
  while (1) {
    cin >> n;
    if (n == 0) {
      break;
    }
    cout << solve(n) << endl;
  }

  return 0;
}

