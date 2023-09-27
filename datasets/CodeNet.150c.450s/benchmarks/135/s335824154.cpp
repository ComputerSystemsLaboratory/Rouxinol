#include <iostream>
#include <vector>

using namespace std;

int main() {
  int h[1501], w[1501];

  int N, M;
  while (cin >> N >> M, (N || M)) {
    for (int i=0; i<N; i++) {
      int t; cin >> t; h[i] = t;
    }
    for (int i=0; i<M; i++) {
      int t; cin >> t; w[i] = t;
    }

    vector<int> V(1500001), H(1500001);
    for (int i=0; i<N; i++) {
      int len = 0;
      for (int j=i; j<N; j++) {
        len += h[j];
        V[len]++;
      }
    }
    for (int i=0; i<M; i++) {
      int len = 0;
      for (int j=i; j<M; j++) {
        len += w[j];
        H[len]++;
      }
    }

    int count = 0;
    for (int i=1; i<=1500000; i++) {
      count += V[i] * H[i];
    }
    cout << count << endl;
  }

  return 0;
}

