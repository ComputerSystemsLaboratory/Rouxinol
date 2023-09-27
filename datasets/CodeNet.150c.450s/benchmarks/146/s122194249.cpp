#include <algorithm>
#include <cctype>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iostream>
#include <list>
#include <map>
#include <memory>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#define INF 1e+10

int main(){
  long double x[4], y[4];
  int n;
  cin >> n;
  while( n-- ){
    cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3];
    long double left, right;
      left  = (y[1] - y[0]) * (x[3] - x[2]);
      right = (y[3] - y[2]) * (x[1] - x[0]);

    if ( left == right ) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}