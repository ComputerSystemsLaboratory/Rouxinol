#include <iostream>
#include <queue>
#include <vector>
#include <functional>
#include <cmath>

using namespace std;

typedef pair<int, int> P;

int main() {
	int n;
	while (cin >> n) {
		if (n == 0) {
			break;
		}
		int h, m, s;
		char c;
		priority_queue< P, vector<P>, greater<P> > pq;
		int start, end;
		for (int i = 0; i < n; i++) {
			cin >> h >> c >> m >> c >> s;
			start = h*3600+m*60+s;
			cin >> h >> c >> m >> c >> s;
			end = h*3600+m*60+s;
			P p = P(end, start);
			pq.push(p);
		}
		vector<int> data[2];
		while (!pq.empty()) {
			P pp = pq.top();
			pq.pop();
			data[0].push_back(pp.first);
			data[1].push_back(pp.second);
		}
		int MAX = 0;
		int counter = 0;
		for (int i = 0; i < n; i++) {
			counter = 0;
			for (int j = i; j < n; j++) {
				if (data[0][i] > data[1][j]) {
					counter++;
				}
			}
			MAX = max(MAX, counter);
		}
		cout << MAX << endl;
	}
	return 0;
}