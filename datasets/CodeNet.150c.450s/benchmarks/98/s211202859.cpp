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
    int n, m;
    cin >> n >> m;
    if (n == 0) {
      break;
    }

    int t[n], h[m];
    int sumt = 0, sumh = 0;
    for (int i = 0; i < n; i++) {
      cin >> t[i];
      sumt += t[i];
    }
    for (int i = 0; i < m; i++) {
      cin >> h[i];
      sumh += h[i];
    }
    
    int sum = 1000000000;
    int rest, resh;
    rest = resh = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
	if (sumt - t[i] + h[j] == sumh - h[j] + t[i]) {
	  if (t[i] + h[j] < sum) {
	    sum = t[i] + h[j];
	    rest = t[i];
	    resh = h[j];
	  }
	}
      }
    }
    if (sum < 100000000)
      printf("%d %d\n", rest, resh);
    else
      cout << -1 << endl;
  }
}