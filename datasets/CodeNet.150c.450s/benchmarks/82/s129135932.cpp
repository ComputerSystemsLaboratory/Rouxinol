#include <bits/stdc++.h>
using namespace std;
using P = pair<int, int>;
struct dice {
	P x[3];
	dice(int x_[6]) {
		x[0] = P(x_[0], x_[5]);
		x[1] = P(x_[1], x_[4]);
		x[2] = P(x_[2], x_[3]);
	}
	int X(int n) {
		return n < 3 ? x[n].first : x[5 - n].second;
	}
	void N() {
		swap(x[0], x[1]);
		swap(x[1].first, x[1].second);
	}
	void E() {
		swap(x[0], x[2]);
		swap(x[0].first, x[0].second);
	}
	void W() {
		swap(x[0], x[2]);
		swap(x[2].first, x[2].second);
	}
	void S() {
		swap(x[0], x[1]);
		swap(x[0].first, x[0].second);
	}
	void C() {
		swap(x[1], x[2]);
		swap(x[2].first, x[2].second);
	}
	void RC() {
		swap(x[1], x[2]);
		swap(x[1].first, x[1].second);
	}
	void top(int val) {
		if (x[0].first == val) {
			return;
		}
		if (x[1].first == val) {
			N();
		}
		else if (x[2].first == val) {
			W();
		}
		else if (x[2].second == val) {
			E();
		}
		else if (x[1].second == val) {
			S();
		}
		else {
			N(); N();
		}
	}
	void front(int val) {
		if (x[1].first == val) {
			return;
		}
		if (x[2].first == val) {
			C();
		}
		else if (x[2].second == val) {
			RC();
		}
		else {
			swap(x[1].first, x[1].second);
			swap(x[2].first, x[2].second);
		}
	}
};

int main()
{
	int x[6], q, t, f;
	for (int i = 0; i < 6; i++) {
		cin >> x[i];
	}
	dice d(x);
	cin >> q;
	while (q--) {
		cin >> t >> f;
		d.top(t);
		d.front(f);
		cout << d.x[2].first << endl;
	}
	return 0;
}