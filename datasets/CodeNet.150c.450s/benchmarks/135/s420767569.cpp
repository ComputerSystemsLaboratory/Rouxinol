/**
 *  Square Route (Problem D, Practice Contest for Japan Domestic, 2007-06-24)
 *  by Kenji Inoue, 2007-06-28
 **/

#include <iostream>
#include <vector>

using namespace std;

int main() {
  int y[1501], x[1501];

  int N, M;
  while (cin >> N >> M, (N || M)) {
    y[0] = 0;
    for (int i=0; i<N; i++) {
      int t; cin >> t; y[i+1] = y[i] + t;
    }
    x[0] = 0;
    for (int i=0; i<M; i++) {
      int t; cin >> t; x[i+1] = x[i] + t;
    }

    vector<int> diag(3000000);
    for (int i=0; i<N+1; i++) {
      for (int j=0; j<M+1; j++) {
        diag[ 1500000 + y[i] - x[j] ]++;
      }
    }

    int count = 0;
    for (int i=0; i<=3000000; i++) {
      int v = diag[i];
      if (v == 0 || v == 1) { continue; }
      count += v * (v-1) / 2;
    }
    cout << count << endl;
  }

  return 0;
}