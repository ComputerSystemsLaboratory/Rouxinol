#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> num(3);
  for (int i = 0; i < 3; i++) cin >> num.at(i);
  sort(num.begin(), num.end());
  for (int i = 0; i < 3; i++) {
    if (i == 2) cout << num.at(i) << endl;
    else cout << num.at(i) << " ";
  }
}
