#include <bits/stdc++.h>
using namespace std;

vector<string> button = {
  "",
  ".,!? ", "abc", "def",
  "ghi", "jkl", "mno",
  "pqrs", "tuv", "wxyz",
};

int main() {
  int n; cin >> n;
  for (int i = 0; i < n; ++i) {
    int x = 0;
    int cnt = -1;
    string s; cin >> s;
    for (auto&& c : s) {
      int num = c - '0';
      if (num) {
        ++cnt;
      } else {
        if (x) cout << button[x][cnt % button[x].size()];
        cnt = -1;
      }
      x = num;
    }
    cout << endl;
  }
  return 0;
}

