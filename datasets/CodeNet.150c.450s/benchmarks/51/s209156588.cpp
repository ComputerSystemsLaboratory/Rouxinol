#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> num(28);
  int i, count;
  for (i = 0; i < 28; i++) {
    cin >> num[i];
  }
  sort(num.begin(), num.end());
  count = 1;
  for (i = 0; i <= 28; i++) {
    if (num[i] != count) {
      cout << count << endl;
      count++;
    }

    count++;
    if (count > 30) {
      break;
    }
  }
  return 0;
}

