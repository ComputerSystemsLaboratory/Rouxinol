#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;

int main() {
  int n, m, p;
  

while (true) {
  cin >> n >> m >> p;
if (n==0 && m == 0 && p == 0) break;
 vector< int > x(n);
  double sm = 0;
  for (int i=0; i<n; ++i) {
    cin >> x[i];
    sm += x[i];
  }

  //# 3 2 50
  //# 1 2 3
  
  sm *= 100.0;
int ans;
  if (x[m-1] == 0) {ans = 0;}
  else ans = (sm * (double)(100 - p) / 100.0) / (double)x[m-1];
  cout << ans << endl;
}
  
  return 0;
}

