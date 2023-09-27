#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  vector<int> ans(10010, 0);
  
  for (int x = 1; x <= 100; x++) {
    for (int y = 1; y <= 100; y++) {
      for (int z = 1; z <= 100; z++) {
        int v = x*x + y*y + z*z + x*y + y*z + z*x;
        if (v <= 10000) ans[v]++;
      }
    }
  }
   
  for (int i = 1; i <= N; i++) {
    cout << ans[i] << endl;
  }
  
}