#include <algorithm>
#include <functional>
#include <iostream>
#include <numeric>
#include <utility>
#include <vector>
using namespace std;

void calc_score(int D, vector<int>& c, vector<vector<int>>& s,
               vector<int>& ret) {
  vector<int> last(26, -1);
  int csum = accumulate(c.begin(), c.end(), 0);
  int score = 0, dec = 0;
  for (int d = 0; d < D; d++) {
    dec += csum - c[ret[d]] * (d - last[ret[d]]);
    score += s[d][ret[d]] - dec;
    last[ret[d]] = d;
    cout << score << endl;
  }
  return;
}

int calc_diff(int D, vector<int>& c, vector<vector<int>>& s, vector<int>& ret,
              int dc, int nc) {  // dc... day changed  nc... new contest
  int diff = 0, oc = ret[dc];    // oc... old contest
  diff += s[dc][nc] - s[dc][oc];

  int poc = 0, pnc = 0, noc = D, nnc = D;  // prev, next day

  for (int i = 0; i < dc; i++) {
    if (ret[i] == oc) poc = i;
    if (ret[i] == nc) pnc = i;
  }

  for (int i = D - 1; i > dc; i--) {
    if (ret[i] == oc) noc = i;
    if (ret[i] == nc) nnc = i;
  }

  diff = (noc - dc) * (dc - poc) - (nnc - dc) * (dc - pnc);
  return diff;
}

int main() {
  int D;
  cin >> D;
  vector<int> c(26);
  vector<vector<int>> s(D, vector<int>(26));
  vector<vector<pair<int, int>>> s_sorted(D, vector<pair<int, int>>(26));
  for (int i = 0; i < 26; i++) cin >> c[i];
  for (int i = 0; i < D; i++) {
    for (int j = 0; j < 26; j++) {
      cin >> s[i][j];
    }
  }
  vector<int> ret(D);
  for (int i = 0; i < D; i++) {
    cin >> ret[i];
    ret[i]--;
  }
  calc_score(D, c, s, ret);
  return 0;
}