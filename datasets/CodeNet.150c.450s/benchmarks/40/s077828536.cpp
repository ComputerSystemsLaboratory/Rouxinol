#include <bits/stdc++.h>

using namespace std;
using LL = long long;
using VI = vector<int>;
using PI = pair<int, int>;

struct Dice {
	Dice() {}
	~Dice() {}

	void get() {
		for (int i = 0; i < 6; i++) {
			cin >> d[i];
		}
	}
	void roll(char c) {
		int t = d[0];
		switch (c) {
		case 'N':
			d[0] = d[1]; d[1] = d[5]; d[5] = d[4]; d[4] = t;
			break;
		case 'S':
			d[0] = d[4]; d[4] = d[5]; d[5] = d[1]; d[1] = t;
			break;
		case 'W':
			d[0] = d[2]; d[2] = d[5]; d[5] = d[3]; d[3] = t;
			break;
		case 'E':
			d[0] = d[3]; d[3] = d[5]; d[5] = d[2]; d[2] = t;
			break;
		default:
			break;
		}
	}
	int top() { return d[0]; }
	int d[6];
};

int main() {
	Dice d;
	d.get();
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		d.roll(s[i]);
	}
	cout << d.top() << endl;
	return 0;
}

