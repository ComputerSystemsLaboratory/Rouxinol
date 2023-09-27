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
};

int main()
{
	int x[6];
	string s;
	for (int i = 0; i < 6; i++) {
		cin >> x[i];
	}
	dice d(x);
	cin >> s;
	for (auto c : s) {
		switch (c)
		{
		case 'N':
			d.N();
			break;
		case 'E':
			d.E();
			break;
		case 'W':
			d.W();
			break;
		case 'S':
			d.S();
			break;
		}
	}
	cout << d.X(0) << endl;
	return 0;
}