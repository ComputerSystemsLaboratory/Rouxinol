#include <bits/stdc++.h>
using namespace std;
 
int main(void) {
  vector<int> x(10);
  int i = 0;
  for(; i < 10; i++) cin >> x[i];
  sort(x.begin(), x.end());
  for(i = 9; i > 6; i--) cout << x[i] << endl;
}
