#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<n; i++)

int type = 26;

int main() {
	int D;
	cin >> D;
	// 不開催により低下する満足度
	int dec = 0;
	vector<int64_t> c(type);
	vector<int64_t> l(type, 0);
	rep(i, type) {
		cin >> c.at(i);
		dec += c.at(i);
	}
	// 開催により増加する満足度
	vector<vector<int64_t>> s(D, vector<int64_t>(type));
	rep(i, D) {
		rep(j, type) {
			cin >> s.at(i).at(j);
		}
	}

	vector<int64_t> t(D);
	rep(i, D) {
		cin >> t.at(i);
		t.at(i)--;
	}

	int a=0, b=0, x, y, z;
	rep(i, D) {
		// i日目に開催するtype
		x = t.at(i);
		// 開催による増加
		a += s.at(i).at(x);
		// 不開催による減少
		b += (dec - c.at(x)*(i-l.at(x)+1));
		l.at(x) = i+1;
		a -= b;
		// 暫定満足度
		cout << a << endl;
	}
}
