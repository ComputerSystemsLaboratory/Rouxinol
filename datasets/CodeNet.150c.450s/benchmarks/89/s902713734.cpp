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
  int max = 1000010;
  set<int> prime;
  bool p[max];
  fill(p, p+max, false);
  for (int i = 2; i < max; i++) {
    if (!p[i]) {
      prime.insert(i);
      for (int j = i+i; j < max; j += i) {
	p[j] = true;
      }
    }
  }
  while (true) {
    int a, d, n;
    cin >> a >> d >> n;
    if (a == 0) break;
    while (true) {
      if (prime.count(a) != 0) {
	n--;
      }
      if (n == 0) {
	cout << a << endl;
	break;
      }
      a += d;
    }
  }
}