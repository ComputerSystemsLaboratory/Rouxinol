#include <algorithm>
#include <vector>
#include <cfloat>
#include <string>
#include <cmath>
#include <set>
#include <cstdlib>
#include <map>
#include <ctime>
#include <iomanip>
#include <functional>
#include <deque>
#include <iostream>
#include <cstring>
#include <queue>
#include <cstdio>
#include <stack>
#include <climits>
#include <sys/time.h>
#include <cctype>

using namespace std;

typedef long long ll;

int a, l;
int next_number(int x) {
  int t[l];
  for (int i = l-1; i >= 0; i--) {
    t[i] = x%10;
    x /= 10;
  }
  sort(t, t+l);
  int max_v = 0;
  for (int i = l-1; i >= 0; i--) {
    max_v = max_v*10+t[i];
  }
  int min_v = 0;
  for (int i = 0; i < l; i++) {
    min_v = min_v*10+t[i];
  }
  return max_v-min_v;
}

int ind[1000001];
int main() {
  while(cin >> a >> l) {
    if (a == 0 && l == 0) break;
    set<int> memo;
    int ans = 0;
    memset(ind, 0, sizeof(ind));
    while (true) {
      memo.insert(a);
      ind[a] = ans;
      ans++;
      a = next_number(a);
      if (memo.find(a) != memo.end()) {
	std::cout << ind[a] << " " << a << " " << ans-ind[a] << std::endl;
	break;
      }
    }
  }
}