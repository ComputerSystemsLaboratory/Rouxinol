#include <iostream>
#include <utility>
#include <algorithm>

using namespace std;

int N, M;
pair<int, int> PD[10010];

int main(void) {
  while (1) {
    cin >> N >> M;
    if (N == 0 && M == 0) break;
    int d, p;
    for (int i = 0; i < N; i++) {
      cin >> d >> p;
      PD[i] = make_pair(p, d);
    }
    sort(PD, PD + N);
    long long sum = 0;
    for (int i = 0; i < N; i++) {
      sum += PD[i].first * PD[i].second;
    }
    int i = N-1;
    while (M) {
      if (M >= PD[i].second) {
	M -= PD[i].second;
	sum -= PD[i].first * PD[i].second;
      } else {
	sum -= PD[i].first * M;
	M = 0;
      }
      i--;
      if (i == -1) break;
    }
    cout << sum << endl;
  }
  return 0;
}
      