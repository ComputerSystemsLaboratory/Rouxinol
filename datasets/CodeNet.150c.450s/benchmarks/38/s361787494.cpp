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

int N;

int main() {
  cin >> N;
  rep(i, N) {
    int t[3];
    rep(i, 3) cin >> t[i];
    sort(t, t+3);
    int a = t[0], b = t[1], c = t[2];
    if (a*a + b*b == c*c) cout << "YES" << "\n";
    else                  cout << "NO"  << "\n";
  }
  return 0;
}