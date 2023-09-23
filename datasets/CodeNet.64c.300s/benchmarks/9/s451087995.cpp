#include <bits/stdc++.h>
using namespace std;

int main() {
	ios :: sync_with_stdio(false);
	int n; cin >> n;
	int t = 100000;
	while(n --) {
		t = t + t / 20;
		int r = t % 1000;
		t = t - r + (r > 0 ? 1000 : 0);
	}
	cout << t << '\n';
	return 0;
}