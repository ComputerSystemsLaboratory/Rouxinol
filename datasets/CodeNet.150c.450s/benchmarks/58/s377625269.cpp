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
const double PI = acos(-1);
const double EPS = 1e-9;
template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }
template<class T> bool chmin(T &a, const T &b) { if (a > b) { a = b; return true; } return false; }
struct Stack {
	int p;// next
	int a[10000];
	Stack() :p(0) {
		memset(a, 0, sizeof(a));
	}
	void push(int x) {
		a[p++] = x;
	}
	void pop() {
		p--;
	}
	int top() {
		if (p == 0)return -1;
		return a[p - 1];
	}
};
signed main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	Stack s;
	string t;
	while (cin >> t) {
		if (t == "+" || t == "*" || t == "-") {
			int a = s.top(); s.pop();
			int b = s.top(); s.pop();
			if (t == "+")s.push(a + b);
			else if (t == "*")s.push(a*b);
			else s.push(b-a);
		}
		else s.push(stoi(t));
	}
	cout << s.top() << endl;
	return 0;
}