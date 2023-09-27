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

void next_day(int &y, int &m, int &d) {
  if (y%3) {
    if (m%2) { // 大の月
      if (d == 20) {
	d = 1;
	m++;
      }else {
	d++;
      }
    }else { // 小の月
      if (d == 19 && m == 10) {
	y++;
	d = 1;
	m = 1;
      }else if (d == 19) {
	d = 1;
	m++;
      }else {
	d++;
      }
    }   
  }else {
    if (d == 20 && m == 10) {
      y++;
      d = 1;
      m = 1;
    }else if (d == 20) {
      d = 1;
      m++;
    }else {
      d++;
    }
  }
}

bool check(int y, int m, int d) {
  return y == 1000 && m == 1 && d == 1;
}

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int y, m, d;
    cin >> y >> m >> d;
    int ans = 0;
    for (; !check(y, m, d); ans++) {
      next_day(y, m, d);
    }
    std::cout << ans << std::endl;
  }

}