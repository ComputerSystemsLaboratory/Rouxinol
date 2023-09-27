#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <utility>
#include <cctype>
using namespace std;

#define rep(i,n) for(int (i)=0; (i)<(int)(n); ++(i))
#define foreach(c,i) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
#define Eps (1e-10)

int main() {
  double x[4], y[4];
  while (cin >> x[0] >> y[0]) {
    for (int i = 1; i < 4; ++i) cin >> x[i] >> y[i];
    double S, subS;
    S = fabs((x[0]*y[1] + x[1]*y[2] + x[2]*y[0]
              - y[0]*x[1] - y[1]*x[2] - y[2]*x[0]) / 2);
    
    subS = fabs((x[0]*y[1] + x[1]*y[3] + x[3]*y[0]
              - y[0]*x[1] - y[1]*x[3] - y[3]*x[0]) / 2);
    subS += fabs((x[0]*y[3] + x[3]*y[2] + x[2]*y[0]
              - y[0]*x[3] - y[3]*x[2] - y[2]*x[0]) / 2);
    subS += fabs((x[3]*y[1] + x[1]*y[2] + x[2]*y[3]
              - y[3]*x[1] - y[1]*x[2] - y[2]*x[3]) / 2);
    printf("%s\n", (fabs(S-subS) < Eps) ? "YES" : "NO");
  }
 
  return 0;
}