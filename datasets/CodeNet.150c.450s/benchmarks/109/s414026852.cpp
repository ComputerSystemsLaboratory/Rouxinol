#include <bits/stdc++.h>
using namespace std;

int f(string t) {
	int h = 10 * (t[0] - '0') + t[1] - '0';
	int m = 10 * (t[3] - '0') + t[4] - '0';
	int s = 10 * (t[6] - '0') + t[7] - '0';
	return 60 * ((60 * h) + m) + s;
}

int main() {
	int n;
	while (cin >> n, n) {
		deque<pair<int, int>> q, r;
		for (int i = 0; i < n; i++) {
			string s, t;
			cin >> s >> t;
			q.push_back(make_pair(f(s), f(t)));
		}
		sort(begin(q), end(q));
		int m = 1;
		auto l = q.front();
		q.pop_front();
		while (!q.empty()) {
			auto p = q.front();
			q.pop_front();
			if (l.second <= p.first) {
				l = p;
			} else {
				r.push_back(p);
			}
			if (q.empty() && !r.empty()) {
				m++;
				while (!r.empty()) {
					q.push_back(r.front());
					r.pop_front();
				}
				l = q.front();
				q.pop_front();
			}
		}
		cout << m << endl;
	}
	return 0;
}