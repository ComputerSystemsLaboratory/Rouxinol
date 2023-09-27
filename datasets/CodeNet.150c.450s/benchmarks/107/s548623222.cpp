// Last Change: 07/01/2019 22:54:50.
#include <algorithm>
#include <array>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <memory>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;
using ll = long long;

/* Cost
 * insert : I
 * erase  : E
 * replace: R
 */
ll I, E, R;

ll LevenshteinDistance(string str1, string str2) {
  const ll lenStr1 = str1.size(), lenStr2 = str2.size();

  vector<vector<ll>> dist(lenStr1 + 1, vector<ll>(lenStr2 + 1, 0));
  for (ll i = 0; i < lenStr1 + 1; ++i) {
    dist[i][0] = i;
  }
  for (ll i = 0; i < lenStr2 + 1; ++i) {
    dist[0][i] = i;
  }

  for (ll i = 1; i < lenStr1 + 1; ++i) {
    for (ll j = 1; j < lenStr2 + 1; ++j) {
      const ll cost = (str1[i - 1] == str2[j - 1]) ? 0 : R;
      dist[i][j] = min(dist[i - 1][j] + I,
                       min(dist[i][j - 1] + E, dist[i - 1][j - 1] + cost));
    }
  }

  return dist[lenStr1][lenStr2];
}

int main() {
  string str1, str2;

  cin >> str1 >> str2;
  // cin>>I>>E>>R;
  I = E = R = 1;

  cout << LevenshteinDistance(str1, str2) << endl;
}

