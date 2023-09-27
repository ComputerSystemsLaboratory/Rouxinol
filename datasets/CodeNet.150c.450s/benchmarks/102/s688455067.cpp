#include <bits/stdc++.h>
using namespace std;
typedef vector<string> V;
typedef pair<int, int> P;
typedef queue<P> Q;
int main() {
	int w, h, x, y;
	cin >> w >> h;
	if (w == 0 && h == 0) {
		return 0;
	}
	V map = V(h);
	for (int i = 0; i < h; i++) {
		cin >> map[i];
		for (int j = 0; j < w; j++) {
			if (map[i][j] == '@') {
				x = j;
				y = i;
			}
		}
	}
	int n = 0;
	Q q;
	q.push(P(y, x));
	while (q.size()) {
		P p = q.front();
		q.pop();
		if (p.first < 0 || h <= p.first || p.second < 0 || w <= p.second || map[p.first][p.second] == '#') {
			continue;
		}
		//cout << p.second << " " << p.first << " " << map[p.first][p.second] <<endl;
		map[p.first][p.second] = '#';
		n++;
		q.push(P(p.first - 1, p.second));
		q.push(P(p.first + 1, p.second));
		q.push(P(p.first, p.second - 1));
		q.push(P(p.first, p.second + 1));
	}
	cout << n << endl;
	return main();
}