#include <cstring>
#include <iostream>
#include <queue>
using namespace std;
int main () {
	long long int m;
	int n;
	while (cin >> n >> m, n || m) {
		priority_queue<pair<int, int> > que;
		for (int i = 0; i < n; i++) {
			int d, p;
			cin >> d >> p;
			que.push(make_pair(p, d));
		}
		int result = 0;
		while (!que.empty()) {
			pair<int, int> current = que.top();
			que.pop();
			int p = current.first;
			int d = current.second;
			if (m >= d) {
				m -= d;
			}
			else {
				int x = d - m;
				m = 0;
				result += x * p;
			}
		}
		cout << result << endl;
	}
	return 0;
}