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
#include <iomanip>
#include <numeric>
#include <utility>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

#define INF (1 << 30)
#define INFL (1LL << 62)
#define MOD7 1000000007
#define MOD9 1000000009
#define EPS 1e-10

#define ll long long
#define ull unsigned long long
#define all(a) (a).begin(), (a).end()

int main() {
	int r, c, v, s[101] = {};
	cin >> r >> c;
	for (int i = 0, t; i < r; ++i) {
		t = 0;
		for (int j = 0; j < c; ++j) {
			cin >> v;
			cout << v << " ";
			s[j] += v;
			t += v;
		}
		s[c] += t;
		cout << t << endl;
	}
	for (int i = 0; i < c; ++i) {
		cout << s[i] << " ";
	}
	cout << s[c] << endl;

	return 0;
}
