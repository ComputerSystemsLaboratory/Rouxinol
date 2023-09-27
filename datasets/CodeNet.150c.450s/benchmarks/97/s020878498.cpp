#include<iostream>
#include<algorithm>
using namespace std;

int hw[450][450];
int m[210], d[210];

int main() {
	int n;

	while (1) {
		cin >> n;
		if (!n) break;

		for (int i = 0; i <= 420; i++) {
			for (int j = 0; j <= 420; j++) {
				hw[i][j] = -1;
			}
		}

		hw[201][201] = 0;
		for (int i = 1; i < n; i++) {
			cin >> m[i] >> d[i];

			for (int j = 1; j <= 410; j++) {
				for (int k = 1; k <= 410; k++) {
					if (hw[j][k] == m[i]) {
						if (d[i] == 0) {
							hw[j][k - 1] = i;
						}
						if (d[i] == 1) {
							hw[j + 1][k] = i;
						}
						if (d[i] == 2) {
							hw[j][k + 1] = i;
						}
						if (d[i] == 3) {
							hw[j - 1][k] = i;
						}
					}
				}
			}
		}

		/*for (int i = 195; i <= 205; i++) {
			for (int j = 195; j <= 205; j++) {
				cout << hw[i][j];
			}
			cout << endl;
		}


		break;

		for (int i = 1; i <= 400; i++) {
			cout << hw[i][0] << endl;
		}*/


		int ansminw = 1000;
		for (int j = 1; j <= 410; j++) {
			for (int k = 1; k <= 410; k++) {
				if (hw[j][k] >=0) {
					ansminw = min(ansminw, k);
					break;
				}
			}
		}

		int ansmaxw = 0;
		for (int j = 1; j <= 410; j++) {
			for (int k = 410; k > 0; k--) {
				if (hw[j][k] >=0) {
					ansmaxw = max(ansmaxw, k);
					break;
				}
			}
		}

		int ansminh = 1000;
		for (int j = 1; j <= 410; j++) {
			for (int k = 1; k <= 410; k++) {
				if (hw[k][j] >=0) {
					ansminh = min(ansminh, k);
					break;
				}
			}
		}

		int ansmaxh = 0;
		for (int j = 1; j <= 410; j++) {
			for (int k = 410; k > 0; k--) {
				if (hw[k][j] >=0) {
					ansmaxh = max(ansmaxh, k);
					break;
				}
			}
		}

		/*cout << ansminw << endl;
		cout << ansmaxw << endl;
		cout << ansminh << endl;
		cout << ansmaxh << endl;*/
		cout << (ansmaxw - ansminw) + 1 << " " << (ansmaxh - ansminh) + 1 << endl;
	}
}
