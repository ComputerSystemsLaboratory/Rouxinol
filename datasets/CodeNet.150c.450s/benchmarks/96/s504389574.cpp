#include <algorithm>
#include <iostream>
#include <limits.h>
#include <stdlib.h>
#include <string>
#include <vector>

#define el endl
#define fd fixed
#define INF INT_MAX/2-1

using namespace std;

int main() {
  int n, pre, cur, count;
  string s;
  string org[] = {".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
  vector<string> button(org, org+9);
  cin >> n;
  while (n--) {
    cin >> s;
    pre = 0;
    for (int i = 0; i < s.length(); i++) {
      cur = (int)(s[i]-'0');
      if (pre == 0) {
        if (cur != 0) {
          pre = cur;
        }
      } else {
        if (cur == 0) {
          cout << button[pre-1][count];
          pre = 0;
          count = 0;
        } else {
          count = (count+1)%button[pre-1].length();
        }
      }
    }
    cout << el;
  }
}