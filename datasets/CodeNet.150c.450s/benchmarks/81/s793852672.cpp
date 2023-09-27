#include <iostream>
#include <numeric>
using namespace std;
int main () {
	int n;
	while (cin >> n, n) {
		int d[10][10];
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				d[i][j] = ((i == j) ? 0 : 0xffffff);
			}
		}
		int v = 0;
		for (int i = 0; i < n; i++) {
			int a, b, c;
			cin >> a >> b >> c;
			d[a][b] = d[b][a] = c;
			v = max(a, max(b, v));
		}
		v++;
		// ワーシャルフロイド法
		for (int k = 0; k < v; k++) {
			for (int i = 0; i < v; i++) {
				for (int j = 0; j < v; j++) {
					// pathを1つの辺と考えることで，
					// 直接行く場合とそうでない場合を考える問題とすることができる
					d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
				}
			}
		}
		int minPos;
		int minPosTotal = 0x7fffffff;
		for (int i = 0; i < v; i++) {
			int total = accumulate((int*) d[i], d[i] + v, 0);
			//cout << total << endl;
			if (total < minPosTotal) {
				minPos = i;
				minPosTotal = total;
			}
		}
		cout << minPos << ' ' << minPosTotal << endl;
	}
	return 0;
}