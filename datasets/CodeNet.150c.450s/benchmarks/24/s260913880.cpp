#include <algorithm>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <math.h>
#include <set>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

int main() {
  while (true) {
    long long n, m;
    cin >> n >> m;
    if (n == 0)
      break;
    vector<pair<long long, long long>> dps(n);
    for (int i = 0; i < n; i++)
      cin >> dps[i].first >> dps[i].second;

    sort(dps.begin(), dps.end(),
         [](const pair<long long, long long> &lhs,
            const pair<long long, long long> &rhs) {
           return lhs.second > rhs.second;
         });
    long long save = 0;
    for (int i = 0; i < n; i++) {
      if (m > dps[i].first) {
        save += dps[i].second * dps[i].first;
        m -= dps[i].first;
      } else {
        save += dps[i].second * m;
        m = 0;
        break;
      }
    }
    long long sum = 0;
    for (int i = 0; i < n; i++)
      sum += dps[i].first * (dps[i].second);
    cout << sum - save << endl;
  }

  return 0;
}

