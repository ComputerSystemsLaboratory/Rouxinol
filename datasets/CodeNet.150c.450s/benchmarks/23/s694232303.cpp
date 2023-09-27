#include <map>
#include <set>
#include <list>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <numeric>
#include <utility>
#include <iostream>
#include <algorithm>
#include <functional>
#include <unordered_map>
#include <unordered_set>

using namespace std;

#define ll long long
#define ull unsigned long long
#define INF (1 << 30)
#define LLINF (1LL << 62)
#define MOD7 1000000007
#define MOD9 1000000009
#define eps 1e-9
#define P pair<int, int>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pul pair<ull, ull>
#define all(a) (a).begin(), (a).end()
#define FOR(i,a,b) for (int i=(a);i<(b);++i)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);--i)
#define REP(i,n) for (int i=0;i<(n);++i)
#define RREP(i,n) for (int i=(n)-1;i>=0;--i)

void YES() { cout << "YES\n"; }
void NO() { cout << "NO\n"; }
void Yes() { cout << "Yes\n"; }
void No() { cout << "No\n"; }
void yes() { cout << "yes" << endl; }
void no() { cout << "no" << endl; }

template<class T>
T fibonacci(T n) {
	T first = 1, second = 0, ans;
	for (int i = 0; i < n; ++i) {
		if (i == 1)
			second = 1;
		ans = first + second;
		first = second;
		second = ans;
	}
	return ans;
}

int main() {
	int n;
	cin >> n;
	cout << fibonacci(n + 1) << endl;

	return 0;
}