#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define REP(i, a, n) for(int i = (a); i <= (n); i++)
using namespace std;
typedef pair<int, int> PII;

int W, H;

int main(void) {
  vector<PII> v;
  REP(h, 1, 150) REP(w, h + 1, 150) v.push_back(PII(h * h + w * w, h));
  sort(v.begin(), v.end());

  while(cin >> H >> W, H || W) {
    int d = H * H + W * W, k;
    for(k = 0; k < v.size(); k++) if(d == v[k].first && H == v[k].second) break;
    cout << v[k + 1].second << " " << (int) sqrt(v[k + 1].first - v[k + 1].second * v[k + 1].second) << endl;
  }

  return 0;
}