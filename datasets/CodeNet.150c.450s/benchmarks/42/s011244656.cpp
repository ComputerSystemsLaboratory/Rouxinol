#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <utility>
using namespace std;

int main() {
	int n, q, a = 0;
	cin >> n >> q;
	pair<string, int> b;
	queue<pair<string, int>> c;
	for (int i = 0; i < n; ++i) {
		cin >> b.first >> b.second;
		c.push(b);
	}
	while (!c.empty()) {
		a += min(q, c.front().second);
		if (c.front().second > q) c.push(make_pair(c.front().first, c.front().second - q));
		else cout << c.front().first << ' ' << a << endl;
		c.pop();
	}
}
