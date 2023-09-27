#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
  string s;
  cin >> s;
  int len = s.length();
  string rev = "";
  for (int i = len - 1; i >= 0; i--) {
    rev += s.at(i);
  }
  cout << rev << endl;
}