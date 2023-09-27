#include <iostream>
#include <algorithm>
using namespace std;

int memo[1000001][3];

int dp(int a, int b) {
  if(memo[a][b]) {
    return memo[a][b];
  }

  int ret = 1000111000;

  switch(b) {
    case 0:
      for(int i=0; i*i*i<=a; i++) {
        ret = min(ret, dp(a-i*i*i, 1)+i);
      }
      memo[a][b] = ret;
      break;

    case 1:
      for(int i=0; i*i<=a; i++) {
        ret = min(ret, dp(a-i*i, 2)+i);
      }
      memo[a][b] = ret;
      break;

    case 2:
      ret = a;
      memo[a][b] = ret;
      break;
  }

  return ret;
}

int main() {

  int m;
  while(cin >> m, m) {
    cout << dp(m, 0) << endl;
  }

  return 0;
}