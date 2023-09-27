#include <algorithm>
#include <cmath>
#include <cstdio>
#include <deque>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;

typedef long long ll;

#define MOD 1000000007

int main() {
  int n;
  cin >> n;
  vector<int> v;
  int m = n;
  for (int i = 2; i * i <= n; ++i) {
    while (n % i == 0) {
      v.push_back(i);
      n /= i;
    }
  }
  if (n != 1) v.push_back(n);
  cout << m << ":";
  for (int i = 0; i < v.size(); ++i) {
    cout << " " << v[i] << (i == v.size() - 1 ? "\n" : "");
  }
  return 0;
}
