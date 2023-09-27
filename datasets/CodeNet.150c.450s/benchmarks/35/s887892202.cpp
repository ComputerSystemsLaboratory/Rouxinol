#include <algorithm>
#include <iostream>
#include <cstdio>
#include <map>
#include <numeric>
#include <cmath>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <string.h>
using namespace std;

#define ISEQ(c) (c).begin(), (c).end()
typedef long long ll;

int main() {
  while (true) {
    int n;
    cin >> n;
    if (!n) break;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int res = -1000000000;
    for (int i = 0; i < n; i++) {
      int sum = 0;
      for (int j = i; j < n; j++) {
	sum += a[j];
	res = max(res, sum);
      }
    }
    cout << res << endl;
  }
}