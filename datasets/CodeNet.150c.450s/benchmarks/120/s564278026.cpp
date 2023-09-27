#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	int c, r;
	while (cin >> r >> c) {
		if (c == 0 && r == 0) {
			break;
		}
		vector< vector<int> > data(r, vector<int>(c));
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cin >> data[i][j];
			}
		}
		int ll = 2 << r;
		long long int ccc = 0;
		for (int i = 0; i < ll; i++) {
			vector< vector<int> > d2;
			d2 = data;
			for (int j = 0; j < r; j++) {
				for (int k = 0; k < c; k++) {
					if ((i & (2<<j)) != 0) {
						d2[j][k] ^= 1;
					}
				}
			}
			long long int cc = 0;
			for (int k = 0; k < c; k++) {
				int ss = 0;
				for (int j = 0; j < r; j++) {
					ss += d2[j][k];
				}
				cc += (long long int)max(ss, r-ss);
			}
			ccc = max(ccc, cc);
		}
		cout << ccc << endl;
	}
	return 0;
}