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
  int n, count;
  string cur, pre;
  while (cin >> n, n) {
    pre = "";
    count = 0;
    while (n--) {
      cin >> cur;
      if ((cur == "lu" && pre == "ru") || (cur == "ru" && pre == "lu") || (cur == "ld" && pre == "rd") || (cur == "rd" && pre == "ld")) count++;
      pre = cur;
    }
    cout << count << el;
  }
}