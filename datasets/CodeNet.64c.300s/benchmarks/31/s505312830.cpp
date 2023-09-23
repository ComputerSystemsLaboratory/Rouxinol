#include <bits/stdc++.h>

using namespace std;

int main() {
  bool flag[30];
  int a;
  while (cin >> a && a) {
    for (int i = 0; i < 30; i++) flag[i] = false;
    flag[a-1] = true;
    int tmp, cnt = 0;
    for (int i = 0; i < 27; i++) {
      cin >> tmp;
      flag[tmp-1] = true;
    }
    for (int i = 0; i < 30; i++) {
      if (!flag[i]) {
        cout << i+1 << endl;
      }
    }
  }
  return 0;
}

