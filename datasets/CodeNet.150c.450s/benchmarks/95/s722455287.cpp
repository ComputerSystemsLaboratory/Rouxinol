#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>

#define say(args) cout << (args) << endl
#define rep(i, a) for (int i = 0; i < a; i++)

using namespace std;

void exec(int n) {
  int count = 0;
  string before;
  rep(i, n) {
    string tmp;
    cin >> tmp;
    if (i % 2 == 1) {
      if (before[0] != tmp[0] && before[1] == tmp[1]) {
        count += 1;
      }
    }
    before = tmp;
  }
  say(count);
}

int main() {
  int n;
  cin >> n;
  while (n != 0) {
    exec(n);
    cin >> n;
  }
}