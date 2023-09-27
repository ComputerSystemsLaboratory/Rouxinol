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
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>
#include <map>
#include <set>
#include <cstdlib>
#include <bitset>
using namespace std;
#define INT_MAX 2147483647
#define INT_MIN (-2147483647 - 1)
#define INF (int)1e8
#define _INF (int)-1e8
#define INFLL (long long)1e14
#define _INFLL (long long)-1e14
#define Loop(i, n) for(int i = 0; i < (int)n; i++)
#define Loop1(i, n) for(int i = 1; i <= (int)n; i++)
#define Loopr(i, n) for(int i = (int)n - 1; i >= 0; i--)
#define Loopr1(i, n) for(int i = (int)n; i >= 1; i--)
#define bitmanip(m,val) static_cast<bitset<(int)m>>(val)
typedef long long int ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ll> vll;
typedef vector<vector<ll>> vvll;
typedef vector<char> vc;
typedef vector<vector<char>> vvc;
typedef pair<int, int> P;

int cnt = 0;

void merging(vi *a, int s, int m, int t) {
	int n1 = m - s + 1;
	int n2 = t - m + 1;
	vi l(n1), r(n2);
	Loop(i, n1 - 1) l[i] = (*a)[s + i];
	Loop(i, n2 - 1) r[i] = (*a)[m + i];
	l[n1 - 1] = INF*20;
	r[n2 - 1] = INF*20;
	int i = 0, j = 0;
	for (int k = s;k < t;k++) {
		if (l[i] <= r[j]) {
			(*a)[k] = l[i];
			i++;
		}
		else {
			(*a)[k] = r[j];
			j++;
		}
		cnt++;
	}
	return;
}


void merge_sort(vi *a, int s, int t) {
	if (s + 1 < t) {
		int m = (s + t) / 2;
		merge_sort(a, s, m);
		merge_sort(a, m, t);
		merging(a, s, m, t);
	}
	return;
}

int main() {
	int n;
	cin >> n;
	vi a(n);
	Loop(i, n) cin >> a[i];
	merge_sort(&a, 0, n);
	cout << a[0];
	Loop1(i, n - 1) cout << " " << a[i];
	cout << endl << cnt << endl;
	return 0;
}