#include <fstream>
#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

int cnt_sum_s(int n, int k, int s, int tmp_sum) {
  if (n == 0) {
    return (tmp_sum == s) ? 1 : 0;
  }

  int res = 0;
  for (int i = k+1; i < 10; i++) {
    res += cnt_sum_s(n-1, i , s, tmp_sum + i);
  }

  return res;
}

int main() {
  // ifstream cin("../test.txt");
  while (true) {
    int n,s;
    cin >> n >> s;
    if (!(n|s)) break;

    int res = cnt_sum_s(n, -1, s, 0);

    cout << res << endl;
  }
}