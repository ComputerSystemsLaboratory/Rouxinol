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

struct skew_heap {
	skew_heap *lch, *rch;
	int val;
	skew_heap(int _val) : lch(NULL), rch(NULL), val(_val) {}
};

skew_heap* meld(skew_heap* x, skew_heap* y) {
	if (!x) return y;
	if (!y) return x;
	if (x->val < y->val) swap(x, y);
	x->rch = meld(x->rch, y);
	swap(x->lch, x->rch);
	return x;
}

skew_heap* push(skew_heap* x, int val) {
	return meld(x, new skew_heap(val));
}

skew_heap* pop(skew_heap* x) {
	skew_heap* y = meld(x->lch, x->rch);
	delete x;
	return y;
}

int main() {
	skew_heap* pq = NULL;
	for (;;) {
		char s[10]; scanf("%s", s);
		if (s[2] == 's') {
			int x; scanf("%d", &x);
			pq = push(pq, x);
		}
		if (s[2] == 't') {
			printf("%d\n", pq->val);
			pq = pop(pq);
		}
		if (s[2] == 'd') break;
	}
}