#include <iostream>
#include <vector>
#define REP(i, a, n) for(int i = (a); i < (n); i++)
using namespace std;
typedef pair<int, int> PII;

int N, M[200], D[200];
int dd[5] = { 0, 1, 0, -1, 0 };

int main(void) {
  while(cin >> N, N) {
    REP(i, 0, N - 1) cin >> M[i] >> D[i];

    vector<PII> v;
    v.push_back(PII(0, 0));

    REP(i, 0, N - 1) v.push_back(PII(v[M[i]].first + dd[D[i]], v[M[i]].second + dd[D[i] + 1]));

    int t = 100000000, l = 100000000, b = -100000000, r = -100000000;
    REP(i, 0, N) {
      t = min(t, v[i].first);
      l = min(l, v[i].second);
      b = max(b, v[i].first + 1);
      r = max(r, v[i].second + 1);
    }

    cout << (r - l) << " " << (b - t) << endl;
  }

  return 0;
}