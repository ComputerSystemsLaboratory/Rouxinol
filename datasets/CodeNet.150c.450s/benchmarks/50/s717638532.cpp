#include <iostream>
using namespace std;

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0521

int main() {
	int in;
	while(cin >> in) {
		if (in == 0) break;
		int p = 1000 - in;
		int ans = 0;
		int units[] = { 500, 100, 50, 10, 5, 1 };
		for (int i = 0; i < 6; i++) {
			ans += p /  units[i];
			p %= units[i];
		}
		cout << ans << endl;
	}
	return 0;
}