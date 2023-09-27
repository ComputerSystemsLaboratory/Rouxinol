#include<iostream>
using namespace std;
int main() {
	int n, m; 
	while (cin >> n >> m, n, m) {
		int a[114], b[514];
		int asum = 0, bsum = 0;
		for (int i = 0; i < n; i++) { cin >> a[i]; asum += a[i]; }
		for (int i = 0; i < m; i++) { cin >> b[i]; bsum += b[i]; }
		int ansa = 114514, ansb = 114514;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (asum + b[j] - a[i] == bsum + a[i] - b[j]) {
					if (a[i] + b[j] <= ansa + ansb) {
						ansa = a[i];
						ansb = b[j];
					}
				}
			}
		}
		if (ansa != 114514)cout << ansa << ' ' << ansb << endl;
		else cout << "-1\n";
	}
}