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
#define INF 1e+10
#define mp make_pair
#define pb push_back
#define rep(i,n) for(int i=0; i<n; i++)

typedef long long ll;
typedef vector<ll> vi;
typedef vector<vi> vii;
typedef pair<int,ll> pii;

int main() {
  int n;
  while (1) {
    cin >> n;
    if (n == 0) {
      break;
    }
    vi data(n);
    rep(i, n) {
      cin >> data[i];
    }
    sort(data.begin(), data.end());
    ll closest = INF;
    rep(i, n-1) {
      closest = min(closest, data[i+1] - data[i]);
    }
    cout << closest << endl;
  }
}