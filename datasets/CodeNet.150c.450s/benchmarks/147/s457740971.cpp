
#include <bits/stdc++.h>
#define LL               long long
#define PB               push_back
using namespace std;
int main() {
  int N;
  cin >> N;
  vector<LL> cnt(N + 1);
  for (int i = 1; i < sqrt(N); i++) {
    for (int j = 1; j < sqrt(N); j++) {
      for (int k = 1; k < sqrt(N); k++) {
        int v = i * i + j * j + k * k + i * j + j * k + k * i;
        if (v <= N) cnt[v]++;
      }
    }
  }
  for (int i = 1; i <= N; i++) cout << cnt[i] << endl;
  return 0;
}