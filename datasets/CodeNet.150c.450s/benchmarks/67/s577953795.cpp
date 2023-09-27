// 2197_SumOfConsecutiveIntegers.cpp
#include <bits/stdc++.h>
using namespace std;
int n;

bool dfs(int i, int n) {
  if (i > n) return false;
  else if(i == n) return true;
  else return dfs(i + 1, n - i);
}

void solve() {
  int result = 0;
  for(int i = 1; i <= n / 2; ++i) {
    if(dfs(i, n)) result++;
  }
  cout << result << endl;
}
int main() {
  while(cin >> n && n) {
    solve();
  }
  return 0;
}

