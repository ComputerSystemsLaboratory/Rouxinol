#include <bits/stdc++.h>

using namespace std;

int solve(int num, int sum, int n, int s) {

  int scnt = 0;
  if(n) for(int i = num + 1; i < 10; ++i) scnt += solve(i, sum + i, n - 1, s);
  else return (sum == s) ? 1 : 0;
  return scnt;

}

int main() {

  int n, s;

  while(cin >> n >> s) {
    if(n == 0 && s == 0) break;
    cout << solve(-1, 0, n, s) << endl;
  }

}