#include <cstdio>
#include <iostream>
#include <queue>
#include <map>  
#include <algorithm>
using namespace std;
int main() {
	while (1) {
		int a[10][10000];
		int r, c, ki = 1;
		for (int i = 0; i < 10; i++) { for (int j = 0; j < 10000; j++)a[i][j] = -1; }
		cin >> r >> c; if (r == 0)break;
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++)
				cin >> a[i][j];
		}int ans = 0;
		for (int i = 0; i < (1 << r); i++) {
			int tmp = 0;
			for (int j = 0; j < c; j++) {
				int cnt = 0;
				for (int k = 0; k < r; k++) {
					if (a[k][j] + ((i >> k) & 1) == 1)cnt++;
				}cnt = max(cnt, r - cnt);
				tmp += cnt;
			}
			ans = max(ans, tmp);
		}cout << ans << endl;
	}
	return 0;
}