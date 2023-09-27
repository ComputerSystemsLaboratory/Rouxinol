#include <bits/stdc++.h>

#define rep(i, from, to) for (int i = from; i < to; ++i)
#define REP(i, from, to) for (int i = from; i <= to; ++i)

using namespace std;
struct node {
	int x, y;
};
int taikaku(int x, int y) {
	return x * x + y * y;
}
bool cmp(const node &n1, const node &n2) {
	if (taikaku(n1.x, n1.y) < taikaku(n2.x, n2.y)) return true;
	if (taikaku(n1.x, n1.y) > taikaku(n2.x, n2.y)) return false;
	if (n1.y < n2.y) return true;
	return false;
}
bool eq(node n1, node n2) {
	if (n1.x == n2.x && n1.y == n2.y) return true;
	return false;
}
vector<node> data;
void solve() {
	REP(i, 1, 149) {
		REP(j, i + 1, 150) {
			node n;
			n.x = j; n.y = i;
			data.push_back(n);
		}
	}
	sort(data.begin(), data.end(), cmp);
	//rep (i, 0, 80) {
	//cout << data[i].y << " " << data[i].x << endl;
	//}

	while (true) {
		int x, y;
		cin >> y >> x;
		if (y == 0 && x == 0) return;
		node now; now.x = x; now.y = y;
		for(int i = 0; true; ++i) {
			node n = data[i];
			if (eq(now, n)) {
				cout << data[i + 1].y << " " << data[i + 1].x << endl;
				break;
			}
		}
	}
}

int main() {
	solve();
	return 0;
}