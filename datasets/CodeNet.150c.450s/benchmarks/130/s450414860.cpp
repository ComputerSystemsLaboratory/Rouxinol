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
  int m,n;
  cin >> n >> m;
  int a[105][105] = {};
  int b[105] = {};
  int c[105] = {};
  for(int i = 0;i < n;i++){
    for(int j = 0;j < m;j++){
      cin >> a[i][j];
    }
  }
  for(int i = 0;i < m; i++){
    cin >> b[i];
  }

  /*
  for(int i = 0;i < n;i++){
    for(int j = 0;j < m;j++){
      cout << a[i][j];
    }
    cout << endl;
  }
  for(int i = 0;i < m; i++){
    cout << b[i] << endl;
  }
  */

  for(int i = 0;i < n;i++){
    for(int j = 0;j < m;j++){
      c[i] += a[i][j] * b[j];
    }
  }
  for(int i = 0;i < n;i++){
    cout << c[i] << endl;
  }

  return 0;
}

