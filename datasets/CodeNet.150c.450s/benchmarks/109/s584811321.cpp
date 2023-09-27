#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <queue>
#include <map>
#include <unordered_map>
#include <climits>
#include <cmath>
#include <algorithm>
#include <cassert>

#define TEST_ASSERT(msg, cond) do { if (cond) { cout << msg << " => pass" << endl;} else { cout << msg << " => failed" << endl;} } while(0)

using namespace std;

// convert hh:mm::ss to sec
int convertSec(const string& str) {
  int h = 10 * (str[0] - '0') + (str[1] - '0');
  int m = 10 * (str[3] - '0') + (str[4] - '0');
  int s = 10 * (str[6] - '0') + (str[7] - '0');
  return 3600 * h + 60 * m + s;
}

int main() {

  while (true) {
    int n;
    cin >> n;
    if (n == 0) break;

    vector<int> table(23 * 3600 + 59 * 60 + 59, 0);

    for (int i = 0; i < n; i++) {
      string s, e;
      cin >> s >> e;

      table[convertSec(s)]++;
      table[convertSec(e)]--;
    }

    // simulate
    for (int i = 0; i < table.size(); i++) {
      if (i != 0) table[i] += table[i - 1];
    }

    // find max value
    int maxValue = 0;
    for (int i = 0; i < table.size(); i++) {
      if (table[i] > maxValue) maxValue = table[i];
    }

    cout << maxValue << endl;
  }

  return 0;
}