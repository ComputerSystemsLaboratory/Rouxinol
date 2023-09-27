#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;

#define MOD 1000000007
#define REP(i, N) for (int i = 0; i < N; ++i)
#define REP1(i, N) for (int i = 1; i <= N; ++i)
#define RREP(i, N) for (int i = N - 1; i >= 0; --i)
#define ALL(a) a.begin(), a.end()

int main() {
  bool a[31];
  REP1(i, 30) a[i] = false;
  REP(i, 28) {
    int n;
    cin >> n;
    a[n] = true;
  }
  REP1(i, 30) {
    if (!a[i]) cout << i << endl;
  }
  return 0;
}
