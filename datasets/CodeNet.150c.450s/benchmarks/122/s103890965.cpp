#include "bits/stdc++.h"
using namespace std;
#ifdef _DEBUG
#include "dump.hpp"
#else
#define dump(...)
#endif

//#define int long long
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define all(c) begin(c),end(c)
const int INF = sizeof(int) == sizeof(long long) ? 0x3f3f3f3f3f3f3f3fLL : 0x3f3f3f3f;
const int MOD = (int)(1e9) + 7;
template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }
template<class T> bool chmin(T &a, const T &b) { if (b < a) { a = b; return true; } return false; }

// ??????????????? ????°?
#define MAX_N 2000010
int heap[MAX_N], sz = 0;
void push(int x) {
	int v = sz++;
	while (v > 0) {
		int p = (v - 1) / 2;
		if (heap[p] <= x)break;
		heap[v] = heap[p];
		v = p;
	}
	heap[v] = x;
}
int pop() {
	int ret = heap[0];
	int back = heap[--sz];
	int v = 0;
	while (v * 2 + 1 < sz) {
		// l ??¨ r ??????????°???????????????¨???????????????
		int l = v * 2 + 1, r = v * 2 + 2;
		int u = (r >= sz || heap[l] < heap[r]) ? l : r;
		// ???????????¢???????????????
		if (heap[u] >= back)break;
		heap[v] = heap[u];
		v = u;
	}
	heap[v] = back;
	return ret;
}
int top() {
	return heap[0];
}

signed main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	char s[10];
	while (~scanf("%s", &s)) {
		if (s[0] == 'i') {
			int a; scanf("%d", &a);
			push(-a);
		}
		else if (s[1] == 'x') {
			printf("%d\n", -pop());
		}
		else {
			break;
		}
	}
	return 0;
}