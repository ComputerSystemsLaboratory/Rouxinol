#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(void) {
	int H;
	cin >> H;
	while (H != 0) {
		vector< vector<int> > puzz(H,vector<int>(5));
		int drop[5] = {0,0,0,0,0};
		for (int i = 0; i < H; ++i) {
			for (int j = 0; j < 5; ++j) {
				cin >> puzz[i][j];
			}
		}

		bool seq = true;
		int point = 0;
		int s,e;
		int len = 1;
		while (seq) {
			seq = false;
			for (int i = 0; i < H; ++i) {
				len = 1;
				s = -1;
				e = -1;
				for (int j = 0; j < 4; ++j) {
					if (puzz[i][j] > 0 && puzz[i][j] == puzz[i][j+1]) {
						++len;
						if (len > 2) {
							s = (j + 1) - len + 1;
							e = j + 1;
						}
					}
					else {
						len = 1;
					}
				}
				if (e > 0) {
					point += (e+1-s)*puzz[i][s];
					for (int j = s; j < e + 1; ++j) {
						puzz[i][j] = -1;
					}
					seq = true;
				}
			}
			for (int i = H - 1; i > 0 ; --i) {
				for (int j = 0; j < 5; ++j) {
					if (puzz[i][j] == -1) {
						int temp = i - 1;
						while (temp >= 1 && puzz[temp][j] == -1) {
							--temp;
						}
						swap(puzz[i][j],puzz[temp][j]);
					}
				}
			}
		}
		cout << point << endl;
		cin >> H;
	}
	return 0;
}