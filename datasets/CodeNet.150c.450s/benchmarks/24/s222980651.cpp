#include <iostream>
#include <queue>

using namespace std;

typedef pair <int, int> P;

int main() {
	int n;
	long long int m;
	while (cin >> n >> m) {
		if (n == 0 && m == 0) {
			break;
		}
		priority_queue<P> pq;
		for (int i = 0; i < n; i++) {
			P p;
			cin >> p.second >> p.first;
			pq.push(p);
		}
		while (!pq.empty()) {
			P pp = pq.top();
			pq.pop();
			if (m >= pp.second) {
				m -= pp.second;
			} else {
				pp.second -= m;
				pq.push(pp);
				break;
			}
		}
		long long int count = 0;
		while (!pq.empty()) {
			P pp = pq.top();
			pq.pop();
			count += pp.first*pp.second;
		}
		cout << count << endl;
	}
	return 0;
}