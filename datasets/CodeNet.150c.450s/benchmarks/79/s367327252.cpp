#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int N, R;
int S[50];

int main() {
  while (cin >> N >> R) {
    if (N == 0 && R == 0) break;
    for (int i=0; i<N; i++) S[i] = N-i;
    for (int i=0; i<R; i++) {
      int p, c;
      cin >> p >> c;
      vector<int> t;
      for (int i=p-1; i<p+c-1; i++) t.push_back(S[i]);
      for (int i=p-2; i>=0; i--) {
        S[i+c] = S[i];
      }
      for (int i=0; i<c; i++) S[i] = t[i];
    }
    cout << S[0] << "\n";
  }
  return 0;
}