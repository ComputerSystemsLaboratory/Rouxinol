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
#include <stack>
using namespace std;

#define ISEQ(c) (c).begin(), (c).end()
typedef long long ll;

int main() {
  int d;
  while (cin >> d) {
    int ans = 0;
    for (int i = d; i < 600; i += d) {
      ans += i * i;
    }
    cout << ans * d << endl;
  }
}