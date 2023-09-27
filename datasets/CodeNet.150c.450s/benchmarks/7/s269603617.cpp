#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

#define str to_string
#define rep(i, n) for (int i=0; i<int(n); i++)
#define all(c) (c).begin(), (c).end()

int table[10];

int main() {
  rep(i, 10) cin >> table[i];
  sort(table, table+10);
  rep(i, 3) cout << table[9-i] << "\n";
  return 0;
}