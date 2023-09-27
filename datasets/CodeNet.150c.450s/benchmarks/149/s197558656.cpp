#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, q;
	cin >> n >> q;
	vector<int> sets(n);
	for (int i = 0; i < n; ++i) {
		sets[i] = i;
	}

	const int UNITE = 0;
	const int SAME = 1;

	int query, x, y;
	int set_num;
	while (q--) {
		cin >> query >> x >> y;
		switch(query) {
			case UNITE:
				if (sets[x] == sets[y]) break;

				set_num = sets[y];
				for (int i = 0; i < n; ++i) {
					if (sets[i] == set_num) sets[i] = sets[x];
				}
				break;
			case SAME:
				cout << (sets[x] == sets[y] ? 1 : 0) << endl;
				break;
			default:
				// nothing to do.
				break;
		}
	}
	return 0;
}