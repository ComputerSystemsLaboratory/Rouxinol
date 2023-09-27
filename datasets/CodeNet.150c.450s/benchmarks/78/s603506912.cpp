#include <algorithm>
#include <vector>
#include <cfloat>
#include <string>
#include <cmath>
#include <set>
#include <cstdlib>
#include <map>
#include <ctime>
#include <iomanip>
#include <functional>
#include <deque>
#include <iostream>
#include <cstring>
#include <queue>
#include <cstdio>
#include <stack>
#include <climits>
#include <sys/time.h>
#include <cctype>

using namespace std;

typedef long long ll;

int dp1[1000000+1], dp2[1000000+1][5]; // 奇数　そうでない
int main() {

  memset(dp1, -1, sizeof(dp1));
  memset(dp2, -1, sizeof(dp2));
  vector <int> memo;
  int cnt = 0;
  for (ll i = 1; i*(i+1)*(i+2)/6 <= 1000000; i++) {
    int val = i*(i+1)*(i+2)/6;
    memo.push_back(i*(i+1)*(i+2)/6);
    if (val%2) {
      cnt++;
    }
  }

  for (int i = 0; i < memo.size(); i++) {
    if (memo[i]%2) {
      dp1[memo[i]] = 1;
    }
    dp2[memo[i]][0] = 1;
  }


  for (int i = 1; i <= 1000000; i++) {
    for (int j = 0; j < memo.size() && memo[j] < i; j++) {
      if (memo[j]%2) {
	if (dp1[i-memo[j]] != -1) {
	  if (dp1[i] == -1) {
	    dp1[i] = dp1[i-memo[j]]+1;
	  }else {
	    dp1[i] = min(dp1[i], dp1[i-memo[j]]+1);
	  }
	}
      }

      for (int k = 1; k < 5; k++) {
	if (dp2[i-memo[j]][k-1] != -1) {
	  if (dp2[i][k] == -1) {
	    dp2[i][k] = dp2[i-memo[j]][k-1]+1;
	  }else {
	    dp2[i][k] = min(dp2[i][k], dp2[i-memo[j]][k-1]+1);
	  }
	}
      }
    }
  }

  int n;
  while(true) {
    cin >> n;
    if (n == 0) break;

    int ans2;
    ans2 = 10000000;
    for (int i = 0; i < 5; i++) {
      if (dp2[n][i] != -1) {
	ans2 = min(ans2, dp2[n][i]);
      }
    }

    std::cout << ans2 << " " << dp1[n] << std::endl;
  }
}