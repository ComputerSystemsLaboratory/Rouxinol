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
template<typename T>
struct Queue {
	int l, r,len;
	T a[100000];
	Queue() :l(0), r(0),len(100000) {}
	void enqueue(T x) {
		a[r++] = x;
		r %= len;
	}
	T dequeue() {
		T ret = a[l++];
		l %= len;
		return ret;
	}
	bool empty() {
		return l == r;
	}
};
struct Job {
	string name;
	int time;
	Job() {}
	Job(string name, int time) :name(name), time(time) {}
};
signed main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, q; cin >> n >> q;
	int now(0);
	Queue<Job> pro;
	rep(i, 0, n) {
		string s; int a; cin >> s >> a;
		pro.enqueue(Job(s, a));
	}
	while (!pro.empty()) {
		Job f = pro.dequeue();
		int x = min(q, f.time);
		now += x;
		f.time -= x;
		if (f.time <= 0) {
			cout << f.name << " " << now << endl;
		}
		else pro.enqueue(f);
	}
	return 0;
}