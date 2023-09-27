#include <iostream>
#include <utility>
#include <string>
#include <cstring>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); ++i)

const int INF = 1 << 28;

int main()
{
  int n;
  while(cin >> n, n) {
    int ax = 0;
    int in = INF;
    int sum = 0;
    rep(i, n) {
      int m;
      cin >> m;
      ax = max(ax, m);
      in = min(in, m);
      sum += m;
    }
    sum -= ax;
    sum -= in;
    sum /= n - 2;

    cout << sum << endl;
  }
  return 0;
}