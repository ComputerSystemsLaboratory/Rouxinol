#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <string>
#include <sstream>
#include <complex>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
using namespace std;
typedef long long unsigned int ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

int main() {
  int n;
  cin >> n;
  long minimum = 10000000;
  long maximum = -10000000;
  long s = 0;
  long a[10010];
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  for(int i = 0; i < n;i++){
    minimum = min(minimum,a[i]);
    maximum = max(maximum,a[i]);
    s += a[i];
  }

  cout << minimum << " " << maximum << " " << s << endl;
  return 0;
}

