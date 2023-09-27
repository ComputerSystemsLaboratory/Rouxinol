#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <utility>
using namespace std;

#define rep(i,n) for(int (i)=0; (i)<(int)(n); ++(i))
#define foreach(c,i) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)

const int MAX_N = 1002;
int n, dp[MAX_N];

int main() {
  dp[1] = dp[2] = 0;
  for (int i = 1; i < MAX_N; ++i) {
    int sum = i;
    for (int j = i+1; sum + j < MAX_N; ++j) {
      sum += j;
      dp[sum]++;
    }
  }
  //rep (i,10) cout << dp[i] << endl;
  while (cin >> n, n) {
    cout << dp[n] << endl;
  }
  return 0;
}