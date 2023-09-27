#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n, m;
  int dltv = -999999999;
  int minv = 2000000000;

  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> m;
    dltv = max(dltv, m - minv);
    minv = min(minv, m);
  }
    cout << dltv << endl;
    return 0;
}
