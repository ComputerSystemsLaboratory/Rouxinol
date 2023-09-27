#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;
  cin >> x;
  
  int ans = 1;
  for (int i = 0; i < 3; i++) {
    ans *= x;
  }
  cout << ans << endl;
}
