#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<bitset>
using namespace std;
bitset<10004> b[14];
int m, n;
const int INF = 0x3f3f3f3f;
int ans = -INF;
void dfs(int k) {
	if (k == m) {
		int sum = 0;
		for (int j = 0; j < n; j++) {
			int sum1 = 0;
			for (int i = 0; i < m; i++) {
				if (b[i][j])
					sum1++;
			}
			sum += max(sum1, m - sum1);
		}
		ans = max(ans, sum);
		return;
	}

	dfs(k + 1);
	b[k].flip();
	dfs(k + 1);
}
int main() {
	while (cin >> m >> n&&(m||n)) {
		ans = -INF;
		int v;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cin >> v;
				b[i][j]=v;
			}
		}
		dfs(0);
		cout << ans << endl;
	}
	//system("pause");
	return 0;
}
