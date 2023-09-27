#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <cmath>
#include <sstream>
#include <algorithm>

using namespace std;
vector<vector<int> > senbei;
int H, W;


int main() {
	while (1) {
		cin >> H >> W;
		if (H + W == 0) break;
		senbei.resize(H);
		vector<int> b;
		b.resize(H);
		for (int i = 0; i < H; i++) {
			senbei[i].resize(W);
			b[i] = 0;
		}
		for (int i = 0; i < H; i++) {
			for (int j = 0; j < W; j++) {
				cin >> senbei[i][j];
			}
		}
		int H2 = pow(2, H);
		int max = -1;
		
		for (int i = 0; i < H2; i++) {
			if (i != 0) {
				for (int j = 0; j < b.size(); j++) {
					if (b[j] == 0) {
						b[j] = 1;
						break;
					}
					else {
						b[j] = 0;
					}
				}
			}
			int count = 0;

			for (int k = 0; k < W; k++) {
				int omote = 0, ura = 0;
				for (int j = 0; j < H; j++) {
					if (b[j] == senbei[j][k]) omote++;
				}
				count += omote > H-omote ? omote : H-omote;
			}
			if (max < count) max = count;
		}
		cout << max << endl;
	}
	return 0;
}