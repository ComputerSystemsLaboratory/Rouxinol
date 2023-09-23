#include<iostream>
#include<algorithm>
using namespace std;

bool flg(int x, int y) {
	if (x&(1 << y))return true;
	else return false;
}

int main() {
	int n, m;
	while (cin >> n >> m, n, m) {
		int s[12][10010];
		for (int i = 0;i < n;i++) {
			for (int j = 0;j < m;j++)cin >> s[i][j];
		}

		int bit = 1 << n;
		int ans = 0;
		for (int i = 0;i < bit;i++) {
			int ka[10020] = {};
			for (int j = 0;j < n;j++) {
				if (flg(i, j)) {
					for (int k = 0;k < m;k++) {
						if (s[j][k] == 0)ka[k]++;
					}
				}
				else {
					for (int k = 0;k < m;k++) {
						if (s[j][k] == 1)ka[k]++;
					}
				}
			}
			int a = 0;
			for (int l = 0;l < m;l++) {
				a += max(ka[l], n - ka[l]);
			}
			ans = max(ans, a);
		}
		cout << ans << endl;
	}
	return 0;
}