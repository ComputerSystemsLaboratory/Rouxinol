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
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pul pair<ull, ull>
#define all(a) (a).begin(), (a).end()
#define mp make_pair
#define pb push_back
#define FOR(i,a,b) for (int i=(a);i<(b);++i)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);--i)
#define REP(i,n) for (int i=0;i<(n);++i)
#define RREP(i,n) for (int i=(n)-1;i>=0;--i)

void YES() { cout << "YES" << endl; }
void NO() { cout << "NO" << endl; }
void Yes() { cout << "Yes" << endl; }
void No() { cout << "No" << endl; }
void yes() { cout << "yes" << endl; }
void no() { cout << "no" << endl; }
void Taka() { cout << "Takahashi" << endl; }
void Aoki() { cout << "Aoki" << endl; }
void digit(int d) { cout << fixed << setprecision(d); }
void IOup() { cin.tie(0); ios::sync_with_stdio(false); }

class PriorityQueue {
	vector<int> data;
	int size = 0;

public:
	PriorityQueue(int n) {
		data.resize(n);
	}

	void push(int value) {
		data[size++] = value;

		int suffix = size - 1;
		while (suffix > 0 && data[suffix / 2] < data[suffix]) {
			swap(data[suffix / 2], data[suffix]);
			suffix = suffix / 2;
		}
	}

	int top() {
		return data[0];
	}

	void maxHeap(int i) {
		int l, r, leargest;
		l = 2 * i;
		r = 2 * i + 1;
		if (l < size && data[l] > data[i])
			leargest = l;
		else
			leargest = i;
		if (r < size && data[r] > data[leargest])
			leargest = r;

		if (leargest != i) {
			swap(data[i], data[leargest]);
			maxHeap(leargest);
		}
	}

	void pop() {
		data[0] = data[size - 1];
		size--;
		maxHeap(0);
	}
};

int main() {
	PriorityQueue que(2000000);
	string s;
	int v;
	while (cin >> s && s != "end") {
		if (s == "insert") {
			cin >> v;
			que.push(v);
		}
		else {
			cout << que.top() << endl;
			que.pop();
		}
	}

	return 0;
}
