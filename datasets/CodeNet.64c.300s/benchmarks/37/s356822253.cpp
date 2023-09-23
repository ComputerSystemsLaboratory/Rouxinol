#include <algorithm>
#include <iostream>
#include <cstdio>
#include <map>
#include <numeric>
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
    if (n == 0) break;
    int res = 0;
    for (int i = 1; i < n; i++) {
      int sum = 0, j = 0;
      while (sum < n) {
	sum += i+j;
	j++;
      }
      if (sum == n) res++;
    }
    cout << res << endl;
  }
}