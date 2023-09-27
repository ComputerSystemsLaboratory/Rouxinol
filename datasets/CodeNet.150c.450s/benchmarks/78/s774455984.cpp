#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int MAX_N = 1000001;
const int INF = 1<<27;
vector<int> N3, N4;
int T[2][MAX_N];

void makeN4() {
  for(int n = 1; ; ++n) {
    int s = n*(n+1)*(n+2)/6;
    if(s >= MAX_N) break;
    N4.push_back(s);
  }
}

void solve(bool oddOnly) {
  int *t = T[oddOnly];
  fill(t, t+MAX_N, INF);
  t[0] = 0;

  for(int j = 0; j < N4.size(); ++j) {
    if(oddOnly && N4[j]%2 == 0) continue;
    for(int i = N4[j]; i < MAX_N; ++i) {
      t[i] = min(t[i], t[i-N4[j]] + 1);
    }
  }
  /*
  for(int i = 1; i < MAX_N; ++i) {
    for(int j = 0; j < N4.size() && N4[j] <= i; ++j) {
      if(oddOnly && N4[j]%2 == 0) continue;
      t[i] = min(t[i], t[i-N4[j]] + 1);
    }
  }
  */
}

int main() {
  makeN4();
  solve(false);
  solve(true);
  int N;
  while(cin >> N && N) {
    cout << T[0][N] << " " << T[1][N] << endl;
  }
  return 0;
}