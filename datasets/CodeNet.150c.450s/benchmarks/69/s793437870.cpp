#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <queue>
#include <list>
#include <stack>
#include <string>
#include <functional>
#include <numeric>
#include <cmath>
#include <iomanip>
#include <map>
#include <cstdlib>
#define INF 100000000
#define _INF -100000000
#define Loop(i, n) for(int i = 0; i < (int)n; i++)
#define Loop1(i, n) for(int i = 1; i <= (int)n; i++)
#define Loopr(i, n) for(int i = (int)n - 1; i >= 0; i--)
#define Loopr1(i, n) for(int i = (int)n; i >= 1; i--)
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef pair<int, int> P;

int n;
vi A(10);
string ret;

void dfs(int k, int b, int c) {
	if (k > 9) {
		ret = "YES";
		return;
	}
	int a = A[k];
	if (a > b) dfs(k + 1, a, c);
	if (a > c) dfs(k + 1, b, a);
}

void solve() {
	ret = "NO";
	dfs(1, A[0], 0);
	cout << ret << endl;
}

int main() {
	cin >> n;
	Loop(i, n) {
		Loop(j, 10) {
			cin >> A[j];
		}
		solve();
	}
	return 0;
}