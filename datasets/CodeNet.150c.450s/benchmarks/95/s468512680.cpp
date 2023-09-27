#include <algorithm>
#include <cctype>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iostream>
#include <list>
#include <map>
#include <memory>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;

#define EPS 1e-10
#define INF 1000000000
#define mp make_pair
#define pb push_back

typedef vector<int> vi;
typedef vector<vi> vii;
typedef pair<int,int> pii;
typedef long long ll;

int main() {
  int N;
  while (1) {
    cin >> N;
    if (N == 0) {
      break;
    }
    int ans = 0;
    bool prev = false;
    pair<bool, bool> pos = mp(false, false);
    for (int i = 0; i < N; i++) {
      string act;
      cin >> act;

      if (act[0] == 'l') {
        if (act[1] == 'u') {
          pos.first = true;
        } else {
          pos.first = false;
        }
      } else {
        if (act[1] == 'u') {
          pos.second = true;
        } else {
          pos.second = false;
        }
      }

      if (prev && pos == mp(false, false)) {
        ans++;
        prev = false;
      } else if (!prev && pos == mp(true, true)) {
        ans++;
        prev = true;
      }
    }
    cout << ans << endl;
  }
}