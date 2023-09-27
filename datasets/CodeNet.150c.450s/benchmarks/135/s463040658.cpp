/**
 *  Square Route (Problem D, Practice Contest for Japan Domestic, 2007-06-24)
 *  by Kenji Inoue, 2007-06-28
 **/

#include <iostream>
#include <map>

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

    map<int, int> V, H;
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
    for (map<int, int>::iterator it = V.begin(); it != V.end(); it++) {
      int key = it->first;
      count += V[key] * H[key];
    }
    cout << count << endl;
  }

  return 0;
}