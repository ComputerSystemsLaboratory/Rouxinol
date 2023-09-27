#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <queue>
#include <list>
#include <stack>
#include <string>
#include <tuple>
#include <functional>
#include <numeric>
#include <cmath>
#include <iomanip>
#include <map>
#include <random>
#include <cstdlib>
#define INT_MAX 2147483647
#define INT_MIN -2147483646
#define Loop(i, n) for(int i = 0; i < (int)n; i++)
#define Loop1(i, n) for(int i = 1; i <= (int)n; i++)
#define Loopr(i, n) for(int i = (int)n - 1; i >= 0; i--)
#define Loopr1(i, n) for(int i = (int)n; i >= 1; i--)
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
void fastios() { ios_base::sync_with_stdio(0); cin.tie(0); }

static const int N = 10005;
vi p(N, -1);
vi d(N, 1);

void unite(int x, int y) {
	while (p[x] != -1) {
		x = p[x];
	}
	while (p[y] != -1) {
		y = p[y];
	}
	if (x == y) return;
	if (d[x] > d[y]) p[y] = x;
	else if (d[x] < d[y]) p[x] = y;
	else {
		p[y] = x;
		d[x]++;
	}
}

bool same(int x, int y) {
	while (p[x] != -1) {
		x = p[x];
	}
	while (p[y] != -1) {
		y = p[y];
	}
	if (x == y) return 1;
	else return 0;
}

int main() {
	fastios();
	int n, q;
	cin >> n >> q;
	Loop(i, q) {
		int com, x, y;
		cin >> com >> x >> y;
		if (com == 0) unite(x, y);
		else cout << same(x, y) << endl;
	}
	return 0;
}