#include <iostream>
#include <vector>

using namespace std;

struct DataSet {
	int element;
	int unit;
};

int main(void) {
	int n, q;

	cin >> n >> q;

	struct DataSet *ds = new struct DataSet[n];

	for (int i = 0; i < n; i++) {
		ds[i].element = i;
		ds[i].unit = i;
	}

	cin >> ws;

	vector<int> rlt;
	for (int j = 0; j < q; j++) {
		int c, x, y;
		cin >> c >> x >> y;

		int ux = -1, uy = -1;
		for (int a = 0; a < n; a++) {
			if (ds[a].element == x) {
				ux = ds[a].unit;
				if (uy >= 0) break;
			}
			else if (ds[a].element == y) {
				uy = ds[a].unit;
				if (ux >= 0) break;
			}
		}

		if (c == 0) {
			if (ux != uy) {
				for (int b = 0; b < n; b++) {
					if (ds[b].unit == uy) {
						ds[b].unit = ux;
					}
				}
			}
		}
		else {
			if (ux != uy) {
				rlt.push_back(0);
			}
			else {
				rlt.push_back(1);
			}
		}
	}

	for (int b = 0; b < rlt.size(); b++) {
		cout << rlt[b] << endl;
	}

	delete[] ds;

	return 0;
}