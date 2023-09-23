#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

#define str to_string
#define rep(i, n) for (int i=0; i<int(n); i++)
#define all(c) (c).begin(), (c).end()

#define MAX_N 101


int N;
int table[MAX_N];
long long memo[MAX_N][21][2];

long long dfs(int offset, long long val, bool plus) {
  if (memo[offset][val][plus?1:0] != -1) return memo[offset][val][plus?1:0];
  int v = val;
  if (plus) v += table[offset];
  else      v -= table[offset];
  if (v < 0 || v > 20) return 0;
  // end-
  if (offset == N-1) {
    if (v == table[N]) return 1;
    else return 0;
  }

  return memo[offset][val][plus?1:0] = dfs(offset+1, v, true) + dfs(offset+1, v, false);
}

int main() {
  cin >> N;
  rep(i, N) {
    cin >> table[i];
  }

  rep(i, MAX_N) rep(j, 21) rep(k, 2) memo[i][j][k] = -1;
  auto answer = dfs(1, table[0], true) + dfs(1, table[0], false);
  cout << answer << '\n';
  return 0;
}