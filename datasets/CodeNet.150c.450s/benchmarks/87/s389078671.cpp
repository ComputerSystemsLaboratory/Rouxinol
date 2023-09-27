#include <iostream>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;

int main(void) {
	int H;
	cin >> H;

	while ( H != 0 ) {
		std::vector< std::vector<int> > puzz(H+2, std::vector<int>(5+2));
		std::vector<int> count(10,0);
		for (int i = 0; i < H+2; i++) {
			for (int j = 0; j < 5+2; j++) {
				if (i==0||i==H+1||j==0||j==5+1) {
					puzz[i][j] = -1;
				}
				else {
					cin >> puzz[H-i+1][j];
					count[puzz[H-i+1][j]]++;
				}
			}
		}

		bool chain = true;
		bool same = true;
		bool find = false;
		int n,l;
		int point = 0;
		while (chain) {
			chain = false;
			for (int i = 1; i < H+1; i++) {
				for (int j = 1; j < 5+1; j++) {
					if (count[puzz[i][j]] > 2) {
						n = puzz[i][j];
						l = 1;
						same = true;
						while (same) {
							if (n == puzz[i][j+l]) {
								l++;
							}
							else {
								same = false;
							}
						}
						if (l > 2) {
							for (int k = 0; k < l; k++) {
								puzz[i][j+k] = 0;
							}
							point += n * l;
							count[n] -= l;
							chain = true;
						}
					}
				}
			}

			for (int i = 1; i < H+1; i++) {
				for (int j = 1; j < 5+1; j++) {
					if (puzz[i][j] == 0) {
						find = false;
						for (int k = i+1; k < H+1 && !(find); k++) {
							if (puzz[k][j] != 0) {
								std::swap(puzz[i][j], puzz[k][j]);
								find = true;
							}
						}
					}
				}
			}
		}
		cout << point << endl;
		cin >> H;
	}

	return 0;
}