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
#include <iomanip>//cout << fixed からの cout << setprecision(n) << 小数　によって小数を整数部分含めてn桁表示できるようにする
using namespace std;
typedef long long unsigned int ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

int main() {
  int n,m,l;
  cin >> n >> m >> l;
  int a[105][105] = {};
  int b[105][105] = {};
  long c[105][105] = {};
  for(int i = 0;i < n;i++){
    for(int j = 0;j < m;j++){
      cin >> a[i][j];
    }
  }
  for(int i = 0;i < m;i++){
    for(int j = 0;j < l;j++){
      cin >> b[i][j];
    }
  }

  for(int i = 0;i < n;i++){
    for(int j = 0;j < l;j++){
      for(int k = 0;k < m;k++){
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }
  for(int i = 0;i < n;i++){
    for(int j = 0;j < l;j++){
      cout << c[i][j];
      if(j != l-1) cout << " ";
    }
    cout << endl;
  }
  return 0;
}

