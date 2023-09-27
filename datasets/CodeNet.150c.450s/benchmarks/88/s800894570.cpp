#include<iostream>
#include<cmath>
using namespace std;
int h, w;
pair<int, int>solve() {
	int sq = h*h + w*w;
	for (int i = h + 1; i <= sqrt(sq); i++) {
		double d = sqrt(sq - i*i);
		int it = sqrt(sq - i*i);
		if ((double)i >= it)break;
		if (d - it <= 0.000001) {
			return make_pair(i, it);
		}
	}
	while (true) {
		sq++;
		for (int i = 1; i <= sqrt(sq); i++) {
			double d = sqrt(sq - i*i);
			int it = sqrt(sq - i*i);
			if ((double)i >= it)break;
			if (d - it <= 0.000001) {
				return make_pair(i, it);
			}
		}
	}
}
int main() {
	while (cin >> h >> w, h, w) {
		pair<int, int>ans = solve();
		cout << ans.first << ' ' << ans.second << '\n';
	}
}