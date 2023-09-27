#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;

#define INF (1<<30)

int main(void) {
  int N; cin >> N;
  vector<int> vec(N, 0);
  vector<int> dp(N, INF);

  for (int i = 0; i < N; i++)
    cin >> vec[i];

  for (int i = 0; i < N; i++) {
    *lower_bound(dp.begin(), dp.end(), vec[i]) = vec[i];
  }

  cout << lower_bound(dp.begin(), dp.end(), INF) - dp.begin() << endl;
  return 0;
}