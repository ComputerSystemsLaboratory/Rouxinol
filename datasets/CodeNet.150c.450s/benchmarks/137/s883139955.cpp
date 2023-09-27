#include <iostream>
#include <math.h>

using namespace std;

int n;
bool* memo;

int getVal(char c) {
  switch (c) {
  case 'A':
    return 1;
  case 'C':
    return 2;
  case 'G':
    return 3;
  case 'T':
    return 4;
  default:
    return 0;
  }
}

int index(string s) {
  int l = s.size();
  int ans = 0;
  for (int i = 0; i < l; i++) {
    ans += getVal(s[i]) * (int)pow(5, i);
  }
  return ans;
}

void insert(string s) {
  int idx = index(s);
  memo[idx] = true;
}

bool find(string s) {
  int idx = index(s);
  return memo[idx];
}

int main() {
  memo = new bool[(1 << 26)];
  cin >> n;
  string cmd, s;
  for (int i = 0; i < n; i++) {
    cin >> cmd >> s;
    if (cmd == "insert") {
      insert(s);
    } else if (cmd == "find") {
      if (find(s)) {
        cout << "yes" << endl;
      } else {
        cout << "no" << endl;
      }
    }
  }
  return 0;
}