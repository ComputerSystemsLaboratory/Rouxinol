#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m, p;
  while(cin >> n >> m >> p, n) {
    vector<int> v(n);
    int sum = 0;
    for(int i = 0; i < n; i++) {
      cin >> v[i];
      sum += v[i]*100;
    }
    if(v[m-1] == 0) cout << 0 << endl;
    else {
      int ans = (sum - sum*((double)p/100)) / v[m-1];
      cout << ans << endl;
    }
  }
}