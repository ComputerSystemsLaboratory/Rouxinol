#include <bits/stdc++.h>
using namespace std;

int main(void) {
  vector<int> x(3);
  for(int i = 0; i < 3; i++) cin >> x[i];
  sort(x.begin(), x.end());
  cout << x[0] << " " << x[1] << " " << x[2] << endl;
}
