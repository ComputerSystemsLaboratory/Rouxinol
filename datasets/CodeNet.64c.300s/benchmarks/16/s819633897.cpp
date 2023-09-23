#include <set>
#include <map>
#include <queue>
#include <cmath>
#include <ctime>
#include <limits>
#include <string>
#include <vector>
#include <cstdio>
#include <cctype>
#include <cstring>
#include <sstream>
#include <cassert>
#include <numeric>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
  int n, minv, maxv, r1, r2;
  cin >> n;
  cin >> r1;
  cin >> r2;
  
  minv = min(r1, r2);
  maxv = r2 - r1;
  
  for (int i = 2; i < n; ++i) {
    int v;
    cin >> v;
    
    maxv = max(maxv, v - minv);
    minv = min(minv, v);
  }
  
  cout << maxv << endl;
  
  return 0;
}