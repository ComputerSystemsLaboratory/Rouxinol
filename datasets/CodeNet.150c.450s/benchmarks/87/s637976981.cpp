#include "iostream"
#include "random"
#include "ctime"
#include "chrono"
#include "string"
#include "bitset"
#include "algorithm"
#include "map"
#include "queue"
#include "list"

using namespace std;


int main() {
	
	int H;
	const int W = 5;
	cin >> H;
	list<int>ret;
	while (H) {
		vector<vector<int>>v(H, vector<int>(W));
		int ans = 0;
		for (int i = H - 1; i >= 0; i--) {
			for (int j = 0; j < W; j++) {
				cin >> v[i][j];
			}
		}
		bool flag = true;
		while (flag) {
			//for (auto i : v) {
			//	for (auto j : i) {
			//		cout << j;
			//	}
			//	cout << endl;
			//}
			//cout << endl;
			flag = false;
			for (int i = 0; i < H; i++) {
				vector<int>num(10,0);
				for (int j = 0; j < W; j++) {
					num[v[i][j]]++;
				}
				for (int j = 1; j < 10; j++) {
					while (num[j] >= 3) {
						for (int k = 0; k <= W - num[j]; k++) {
							int cnt = 0;
							for (int l = k; l < k + num[j]; l++) {
								cnt += j == v[i][l];
							}
							if (cnt == num[j]) {
								flag = true;
								ans += j*num[j];
								for (int l = k; l < k + num[j]; l ++) {
									if (v[i][l] == j) {
										v[i][l] = 0;
									}
								}
							}
						}
						num[j]--;
					}
				}
			}
			for (int i = 1; i < H; i++) {
				for (int j = 0; j < W; j++){
					if (v[i][j]) {
						for (int k = i; k > 0; k--) {
							if (!v[k - 1][j]) {
								swap(v[k][j], v[k - 1][j]);
							}
						}
					}
				}
			}
		}
		ret.push_back(ans);
		cin >> H;
	}
	for (auto i : ret) {
		cout << i << endl;
	}
	return 0;
}
