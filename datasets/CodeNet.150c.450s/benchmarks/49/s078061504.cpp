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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
      cin >> v[i];
    sort(v.begin(), v.end());
    int sum = 0;
    for (int i = 1; i < n-1; i++)
      sum += v[i];
    cout << sum/(n-2) << endl;
  }
}