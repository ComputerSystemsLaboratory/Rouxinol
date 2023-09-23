#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iostream>
#include <map>
#include <ostream>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#define INF 1000000000
#define rep(i,a,b) for (int i=(a);i<(b);i++)
#define rev(i,a,b) for (int i=(a)-1;i>=b;i--)
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef queue<int> qi;
typedef vector<int> vi;
typedef vector<string> vs;
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

int n, s;

int dfs(int sum, int num, int pre) {
  if (num == n) {
    if (sum == s) return 1;
    else return 0;
  }

  int ret = 0;
  rep(i,pre + 1,10) {
    ret += dfs(sum+i, num+1, i);
  }
  return ret;
}

int main() {

  while(1) {
    cin >> n >> s;
    if (!n && !s) break;

    cout << dfs(0, 0, -1) << endl;
  }

	return 0;
}