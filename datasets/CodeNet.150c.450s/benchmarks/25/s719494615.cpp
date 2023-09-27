#include <iostream>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <vector>
#include <cmath>
#include <cstdint>
#include <string>

using namespace std;

int main() {
  int counts[26] = {};
  while (true) {
    string line;
    getline(cin, line);
    if (line.size() == 0) {
      break;
    }
    for (char c : line) {
      int i;
      if ('A' <= c && c <= 'Z') {
        i = c - 'A';
      } else if ('a'<= c && c <= 'z') {
        i = c - 'a';
      } else {
        continue;
      }
      counts[i] += 1;
    }
  }

  for (int i = 0; i < 26; ++i) {
    cout << char('a' + i) << " : " << counts[i] << endl;
  }
}