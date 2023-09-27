#include<iostream>
#include<vector>
#include<string>
#include<map>
#define int double
using namespace std;

signed main() {
	signed a, b;
	while (cin >> a >> b, a | b) {
		map<int, vector<int>>l;
		vector<vector<int>>s;
		vector<int>c(a);
		vector<int>d(b);
		int x, y;
		x = y = 0;
		for (int e = 0; e < a; e++) {
			cin >> c[e];
			x += c[e];
		}
		for (int f = 0; f < b; f++) {
			cin >> d[f];
			y += d[f];
		}
		x = (x - y) / 2;
		for (int g = 0; g < a; g++) {
			for (int h = 0; h < b; h++) {
				if (c[g] - d[h] == x) { vector<int>i(2); i[0] = c[g]; i[1] = d[h]; s.push_back(i); }
			}
		}
		if (s.size() == 0)cout << -1 << endl;
		else {
			for (auto j : s) {
				l[j[0] + j[1]];
				l[j[0] + j[1]] = j;
			}
			auto q = l.begin();
			cout << q->second[0] << " " << q->second[1] << endl;
		}
	}
}