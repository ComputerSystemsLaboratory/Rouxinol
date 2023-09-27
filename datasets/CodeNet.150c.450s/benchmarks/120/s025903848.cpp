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

int r, c;
vector<vector<bool>> table(10, vector<bool>(10000));
int ans;

int calc(vector<bool> A) {
	int ret = 0;
	Loop(j, c) {
		int a = 0, b = 0;
		Loop(i, r) {
			bool judge = table[i][j];
			if (A[i]) judge = !judge;
			if (judge) a++;
			else b++;
		}
		ret = ret + max(a, b);
	}
	return ret;
}

void allenum(vector<bool> A, int m){
	if (m == r) {
		ans = max(ans, calc(A));
	}
	else {
		allenum(A, m + 1);
		A[m] = 1;
		allenum(A, m + 1);
	}
}


void solve() {
	vector<bool> A(10, 0);
	allenum(A, 0);
}


int main() {
	while (cin >> r >> c, r&&c) {
		Loop(i, r) {
			Loop(j, c) {
				bool x;
				cin >> x;
				table[i][j] = x;
			}
		}
		ans = 0;
		solve();
		cout << ans << endl;
	}
	return 0;
}