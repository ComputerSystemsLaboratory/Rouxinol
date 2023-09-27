#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(4);
  while (cin >> a[0] >> a[1] >> a[2] >> a[3]) {
    map<int, int> mp;
    for (int i = 0; i < 4; ++i) mp[a[i]] = i + 1;
    int hit = 0, blow = 0;
    for (int i = 0; i < 4; ++i) {
      int b; cin >> b;
      if (mp[b] > 0) {
        ++( (i + 1 == mp[b]) ? hit : blow );
      }
    }
    cout << hit << ' ' << blow << endl;
  }
  return 0;
}

