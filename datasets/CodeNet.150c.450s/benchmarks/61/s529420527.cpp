#include <iostream>
#include <vector>

#define REP(i, n) for(int (i) = 0; i < (n); i++)

using namespace std;

int A, B, C;

int nextRnd(int x) {
  return (A * x + B) % C;
}

int main() {
  while (true) {
    int N, X;
    cin >> N >> A >> B >> C >> X;
    if (N + A + B + C + X == 0) break;
    vector<int> Ys(N);
    REP(i, N) {
      cin >> Ys[i];
    }
    
    bool solved = false;
    int t = 0;
    int nrnd = X;
    for (int i = 0; i <= 10000; i++) {
      if (nrnd == Ys[t]) {
        t++;
      }
      if (t == N) {
        cout << i << endl;
        solved = true;
        break;
      }
      nrnd = nextRnd(nrnd);
    }
    if (!solved) cout << -1 << endl;
  }
  return 0;
}