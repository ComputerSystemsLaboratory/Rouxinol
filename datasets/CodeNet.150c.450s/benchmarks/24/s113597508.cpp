#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N, M;
  while (cin >> N >> M && N > 0) {
    vector<pair<int, int> > A;
    A.reserve(N);
    for (int i = 0; i < N; i++) {
      int d, p;
      cin >> d >> p;
      pair<int, int> a = make_pair(p, d);
      A.push_back(a);
    }
    sort(A.rbegin(), A.rend());

    int result = 0;
    for (int i = 0; i < N; i++) {
      int d = max(0, A[i].second - M);
      M = max(0, M - A[i].second);
      result += d * A[i].first;
    }

    cout << result << endl;
  }

  return 0;
}

