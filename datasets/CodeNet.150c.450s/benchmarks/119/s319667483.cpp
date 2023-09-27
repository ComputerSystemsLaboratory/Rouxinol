#include<iostream>
using namespace std;
int g = 0;
int w, h;
int a[50][50];
int ans = 0;
void track(int i, int j) {
	for (int l = -1; l <= 1; l++) {
		for (int m = -1; m <= 1; m++) {
			/*int li = l + i;
			int mj = m + j;*/
			if (l+i < h && m+j < w && l+i >= 0 && m+j >= 0 && a[l+i][m+j] == 1) {
				g = 1;
				a[l+i][m+j] = 0;
				/*for (int i = 0; i < h; i++) {
					for (int j = 0; j < w; j++) {
						cout << a[i][j];
						if (j == 4) { cout << endl; }
					}*/
					track(l+i, m+j);
				}
			}
		}
		/*for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cout << a[i][j];
				if (j == 4)cout << endl;
			}
		}*/
	}
int main() {
	while (1) {
		cin >> w >> h;
		if (w == 0 && h == 0) { return 0; }
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> a[i][j];
			}
		}
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				track(i, j);
				if (g == 1) { ans++; }
				g = 0;
			}
		}
		cout << ans << endl;
		ans = 0;
	}
}