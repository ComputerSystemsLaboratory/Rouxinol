#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int, int> P;
typedef pair<int, P> Q;

int main() {
	int h, w;

	vector<Q> rec;
	for (int i = 1; i <= 150; i++) {
		for (int j = i+1; j <= 150; j++) {
			rec.push_back(Q(i*i + j*j, P(i, j)));
		}
	}

	sort(rec.begin(), rec.end());

	while (cin >> h >> w) {
		if (h == 0 && w == 0) {
			break;
		}
		Q q = Q(h*h + w*w, P(h, w));

		vector<Q>::iterator ite = upper_bound(rec.begin(), rec.end(), q);
		Q qq = *(ite);

		cout << (qq.second).first << ' ' << (qq.second).second << endl;

	}
	return 0;
}
