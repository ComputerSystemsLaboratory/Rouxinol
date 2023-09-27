#include <bits/stdc++.h>
using namespace std;

int main()
{
	int m, h;
	string s;
	while (cin >> s, s != "-") {
		cin >> m;
		int sum = 0;
		while (m--) {
			cin >> h;
			sum += h;
		}
		for (int i = 0; i < s.size(); i++) {
			cout << s[(sum + i) % s.size()];
		}
		cout << endl;
	}
	return 0;
}