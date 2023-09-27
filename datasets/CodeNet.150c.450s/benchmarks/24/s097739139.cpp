#include <algorithm>
#include <iostream>

using namespace std;

int N, M;
pair<int,int> PD[10010];

int main() {
  while (cin >> N >> M && N) {
    int d, p;
    for (int i=0; i<N; ++i) {
      cin >> d >> p;
      PD[i] = make_pair(p, d);
      // PD[i].first ?????? i ?????±??????
      // PD[i].second ?????? i ?????????
    }
    // PD?????§??????????????´???
    sort(PD, PD+N, greater<pair<int,int> >());
    int e = 0;
    for (int i=0; i<N; i++) {
      if (M == 0) {
        e += PD[i].first*PD[i].second;
      } else if (M < PD[i].second) {
        e += PD[i].first*(PD[i].second-M);
        M = 0;
      } else {
        M -= PD[i].second;
      }
    }
    cout << e << endl;
  }
  return 0;
}