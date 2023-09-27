#include <utility>
#include <algorithm>
#include <iostream>
using namespace std;

int N, M;
pair<int, int> PD[10010];

int main() {
  while (cin >> N >> M && N) {
    int d, p;
    for (int i=0; i<N; ++i) {
      cin >> d >> p;
      PD[i] = make_pair(p, d);
    }
    
    sort (PD, PD+N);
    reverse(PD, PD+N); // sort in descending order

  int S = 0;
  for (int i=0; i<N; ++i)
    S += PD[i].first * PD[i].second; // When money runs out, S is the answer

  for (int i = 0; i<N; ++i) {
    if (M <= 0) break;
    int guarded = min(M, PD[i].second);
    S -= PD[i].first * guarded;
    M -= guarded;
  }
  cout << S << endl;
  }
}