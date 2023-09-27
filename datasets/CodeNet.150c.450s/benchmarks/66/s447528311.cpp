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
  int n, m;
  string tmp;
  vector<string> user;
  bool open = false;
  cin >> n;
  while (n--) {
    cin >> tmp;
    user.push_back(tmp);
  }
  cin >> m;
  while (m--) {
    cin >> tmp;
    if (find(user.begin(), user.end(), tmp) == user.end()) {
      cout << "Unknown " << tmp << el;
    }
    else {
      if (open) {
        open = false;
        cout << "Closed by " << tmp << el;
      } else {
        open = true;
        cout << "Opened by " << tmp << el;
      }
    }
  }
}