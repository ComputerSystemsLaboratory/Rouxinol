#include <algorithm>
#include <iostream>
#include <limits.h>
#include <math.h>
#include <set>
#include <stack>
#include <stdlib.h>
#include <string>
#include <vector>

#define el endl
#define fd fixed
#define INF INT_MAX/2-1
#define pb push_back

using namespace std;

int main() {
  int n, tmp;
  while (cin >> n, n) {
    vector<int> score;
    for (int i = 0; i < n; i++) {
      cin >> tmp;
      score.pb(tmp);
    }
    sort(score.begin(), score.end());
    int sum = 0;
    for (int i = 1; i < n-1; i++) {
      sum += score[i];
    }
    cout << sum/(n-2) << el;
  }
}