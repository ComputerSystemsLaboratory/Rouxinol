#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	while (cin >> n) {
		if (n == 0) {
			break;
		}
		int counter = 0;
		vector< vector<int> > hyou(n, vector<int>(5));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < 5; j++) {
				cin >> hyou[i][j];
			}
		}
		bool hantei = true;
		while (hantei) {
			hantei = false;
			for (int i = n-1; i >= 0; i--) {
				for (int j = 0; j < 3; j++) {
					if(hyou[i][j] != 0 && hyou[i][j] == hyou[i][j+1] && hyou[i][j] == hyou[i][j+2]) {
						hantei = true;
						if (j < 2 && hyou[i][j] == hyou[i][j+3]) {
							if (j < 1 && hyou[i][j] == hyou[i][j+4]) {
								counter += (hyou[i][j] * 5);
								hyou[i][0] = hyou[i][1] = hyou[i][2] = hyou[i][3] = hyou[i][4] = 0;
								break;
							}
							counter += (hyou[i][j] * 4);
							hyou[i][j] = hyou[i][j+1] = hyou[i][j+2] = hyou[i][j+3] = 0;
							break;
						}
						counter += (hyou[i][j] * 3);
						hyou[i][j] = hyou[i][j+1] = hyou[i][j+2] = 0;
						break;
					}
				}
			}
			for (int i = 0; i < 5; i++) {
				for (int j = n-1; j >= 0; j--) {
					if (hyou[j][i] == 0) {
						for (int k = j-1; k >= 0; k--) {
							if (hyou[k][i] != 0) {
								hyou[j][i] = hyou[k][i];
								hyou[k][i] = 0;
								break;
							}
						}
					}
				}
			}
		}
		cout << counter << endl;
	}
	return 0;
}