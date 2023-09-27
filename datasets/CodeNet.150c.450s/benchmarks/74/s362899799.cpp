#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
static const int MAX = 10000;

int solve_coin_changing1(vector<int> coins, int target) {
  vector<vector<int>> com = {{0}};
  com.push_back(coins);
  bool data[50000] = {false};

  for (int n = 2; n <= 10000; n++) {
    vector<int> b;
    cout << n << endl;
    for (int i = 1; i <= n / 2; i++) {
      for (int j = 0; j < com[i].size(); j++) {
        for (int k = j; k < com[n - i].size(); k++) {
          int val = com[i][j] + com[n - i][k];
          if (val == target) {
            return n;
          }
          if (!data[val]) {
            b.push_back(val);
            data[val] = true;
          }
        }
      }
    }
    cout << b.size() << endl;
    com.push_back(b);
  }
  return -1;
}
int solve_coin_changing(vector<int> coins, int target) {
  int need_ncoin[50001];
  sort(coins.begin(), coins.end());
  auto cp = coins.begin();

  for (int i = 1; i <= target; i++) {
    if (*cp == i) {
      need_ncoin[i] = 1;
      cp++;
      continue;
    }
    int minimum = 50000;
    for(int j=1; j <=i/2; j++) {
      int ncoin = need_ncoin[i-j] + need_ncoin[j];
      minimum = min(minimum, ncoin);
      if (ncoin == 2)
        break;
    }
    need_ncoin[i] = minimum;
  }
  return need_ncoin[target];
}

int main() {
  int ncoin, target;
  cin >> target >> ncoin;
  vector<int> coins;
  for (int i = 0; i < ncoin; i++) {
    int val;
    cin >> val;
    coins.push_back(val);
  }
  cout << solve_coin_changing(coins, target) << endl;
}