#define _USE_MATH_DEFINES
#include <algorithm>
#include <cstdio>
#include <functional>
#include <iostream>
#include <cfloat>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <time.h>
#include <vector>
#include <random>
#include <cassert>
using namespace std;

#define rep(i, N) for (int i = 0; i < N; i++)
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> i_i;
typedef pair<ll, int> ll_i;
typedef pair<int, ll> i_ll;
typedef pair<double, int> d_i;
typedef pair<ll, ll> ll_ll;
typedef pair<double, double> d_d;
typedef vector<int> vi;
struct edge { int v; ll w; };

const int MOD = 1000000007;
ll _MOD = 1000000009;
double EPS = 1e-10;
ll INF = INT_MAX;

struct binary_heap {
	int N;
	vector<int> a;
	binary_heap() : N(0) {}
	void push(int x) {
		a.pb(x); N++;
		for (int i = N - 1; i;) {
			int p = (i - 1) / 2;
			if (a[p] >= a[i]) break;
			swap(a[i], a[p]);
			i = p;
		}
	}
	int pop() {
		int x = a[0];
		swap(a[0], a[N - 1]);
		a.pop_back(); N--;
		for (int i = 0; i * 2 + 1 < N;) {
			int l = i * 2 + 1, r = i * 2 + 2;
			if (r < N && a[l] < a[r]) swap(l, r);
			if (a[l] <= a[i]) break;
			swap(a[i], a[l]);
			i = l;
		}
		return x;
	}
};

int main() {
	binary_heap q;
	for (;;) {
		char s[10]; scanf("%s", s);
		if (s[2] == 's') {
			int x; scanf("%d", &x);
			q.push(x);
		}
		if (s[2] == 't') {
			int x = q.pop();
			printf("%d\n", x);
		}
		if (s[2] == 'd') break;
	}
}