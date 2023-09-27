#include <algorithm>
#include <iostream>
#include <map>
using namespace std;
static const int NMAX = 20;
static const int NMAX_OFFSET = 5; // log2(NAMX)
int data[NMAX];
int ndata;

map<int, int> answers;

int makekey(int a, int b) { return (b << NMAX_OFFSET) + a; }

bool solve(int p, int t) {
  if (t == 0)
    return true;

  if (p >= ndata)
    return false;

  if (answers.find(makekey(p, t)) != answers.end()) {
    return answers[makekey(p, t)];
  }

  bool res = solve(p + 1, t) || solve(p + 1, t - data[p]);
  answers[makekey(p, t)] = res;
  return res;
}

int main() {
  cin >> ndata;
  for (int i = 0; i < ndata; i++)
    cin >> data[i];

  int q, nq;
  cin >> nq;
  for (int i = 0; i < nq; i++) {
    cin >> q;
    cout << (solve(0, q) ? "yes" : "no") << endl;
  }
}