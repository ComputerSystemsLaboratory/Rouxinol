#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int N;
int S[100];

int main() {
  while (cin >> N) {
    if (N == 0) break;
    for (int i=0; i<N; i++) cin >> S[i];
    sort(S, S+N);
    int s = 0;
    for (int i=1; i<N-1; i++) s += S[i];
    cout << s / (N-2) << "\n";
  }
  return 0;
}