#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <algorithm>
#include <functional>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <string>

using namespace std;

int func(int x, int tax) {
  return int(double(x)*(100.+double(tax))/100.);
}

int main() {
  int x, y, s;
  while(cin >> x >> y >> s) {
    if (x == 0 && y == 0 && s == 0) break;
    int ans = 0;
    for (int i = 1; i < s; i++) {
      int l = 1, r = 1000;
      for (int j = 0; j < 100; j++) {
	int p = (l+r)/2;
	if (func(p,x)+func(i,x) <= s) {
	  l = p;
	}else {
	  r = p;
	}
      }
      int j = l-1;
      while (true) {
	if (func(i,x)+func(j,x) > s) {
	  break;
	}
	if (func(i,x)+func(j,x) < s || i < 1 || j < 1) {
	  j++;
	  continue;
	}
	ans = max(ans, func(i,y)+func(j,y));
	j++;
      }
    }
    std::cout << ans << std::endl;
  }
}