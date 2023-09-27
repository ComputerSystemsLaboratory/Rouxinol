#pragma region header
#include <algorithm>
#include <bitset>
#include <tuple>
#include <cstdint>
#include <cctype>
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <cassert>
#include <cfloat>
#include <climits>
#include <cmath>
#include <complex>
#include <ctime>
#include <deque>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <list>
#include <limits>
#include <map>
#include <memory>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
#include <math.h>
#include <cstring>
#include <array>
// ===============================================================
//using系
#pragma region header
using namespace std;
using ll = long long;
using lint = long long;
using ld = long double;
using ulint = unsigned long long;
const int dx[] = { 1,0,-1,0 };
const int dy[] = { 0,1,0,-1 };
constexpr lint mod = 1000000007;
constexpr long double pi = 3.141592653589793238462643383279;
#pragma endregion
// ========================================================================
//define
#define INF (lint)10000000000000000
#define mod = (int)1000000007;
#pragma endregion
int n, m;
vector<vector<int>> v;
bool h[100005];
int ans[100005];

void input() {
	cin >> n >> m;
	v.resize(n + 5);
	for (int i = 0; i < m; i++) {
		int a, b; cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	return;
}
void solve() {
	queue<int> q;
	q.push(1);
	h[1] = 1;
	while (!q.empty()) {
		int s = q.front();
		q.pop();
		for (int i : v[s]) {
			if (!h[i]) {
				ans[i] = s;
				h[i] = 1;
				q.push(i);
			}
		}
	}
	return;
}

int main(void) {
	input();
	solve();
	printf("Yes\n");
	for (int i = 2; i <= n; i++) {
		printf("%d\n", ans[i]);
	}

	return 0;
}