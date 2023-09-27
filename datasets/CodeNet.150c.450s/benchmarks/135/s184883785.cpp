#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N, M;
  while (cin >> N >> M && N != 0) {
    vector<int> h(N), w(M);
    for (int i = 0; i < N; i++) {
      cin >> h[i];
    }
    for (int i = 0; i < M; i++) {
      cin >> w[i];
    }

    vector<int> tbl(1000*1500, 0);
    int ans = 0;
    for (int i = 0; i < N; i++) {
      int t = 0;
      for (int j = i; j < N; j++) {
        t += h[j];
        tbl[t]++;
      }
    }
    for (int i = 0; i < M; i++) {
      int t = 0;
      for (int j = i; j < M; j++) {
        t += w[j];
        ans += tbl[t];
      }
    }
    cout << ans << endl;
  }
  return 0;
}