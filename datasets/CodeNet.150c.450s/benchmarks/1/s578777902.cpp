#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <set>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cctype>
#include <climits>
#include <fstream>
#include <bitset>
#include <time.h>
#include <assert.h>

#define LL long long
#define VI vector<int>
#define VL vector<long long>
#define FOR(i,a,b) for(int i= (a); i<((int)b); ++i)
#define RFOR(i,a) for(int i=(a); i >= 0; --i)
#define FOE(i,a) for(auto i : a)
#define ALL(c) (c).begin(), (c).end()
#define RALL(c) (c).rbegin(), (c).rend()
#define DUMP(x)  cerr << #x << " = " << (x) << endl;
#define SUM(x) std::accumulate(ALL(x), 0LL)
#define MIN(v) *std::min_element(v.begin(), v.end())
#define MAX(v) *std::max_element(v.begin(), v.end())
#define EXIST(v,x) (std::find(v.begin(), v.end(), x) != v.end())
#define BIT(n) (1LL<<(n))
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
#define EPS 1e-14
#define INF 1e7

using namespace std;


int longest_increasing_subsequence(const vector<int> &a) {
	vector<int> dp(a.size() + 1, INT_MAX);
	for (int i = 0; i < a.size(); ++i) {
		*lower_bound(ALL(dp), a[i]) = a[i];
	}
	return lower_bound(ALL(dp), INT_MAX) - dp.begin();
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;
	vector<int> a(N, 0);
	FOR(i, 0, N) {
		cin >> a[i];
	}

	cout << longest_increasing_subsequence(a) << endl;

	return 0;
}