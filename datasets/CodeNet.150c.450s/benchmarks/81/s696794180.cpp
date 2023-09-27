#include <iostream>
#include <algorithm>
using namespace std;
const int INF = 1 << 25;
int wf[10][10];

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	while(cin >> n, n) {
		for(int i = 0; i < 10; i++) {
			for(int j = 0; j < 10; j++) {
				wf[i][j] = (i == j) ? 0 : INF;
			}
		}

		bool use[10] = { false };
		for(int i = 0; i < n; i++) {
			int a, b, c;
			cin >> a >> b >> c;
			wf[a][b] = wf[b][a] = c;
			use[a] = use[b] = true;
		}

		for(int k = 0; k < 10; k++) {
			for(int i = 0; i < 10; i++) {
				for(int j = 0; j < 10; j++) {
					wf[i][j] = min(wf[i][j], wf[i][k] + wf[k][j]);
				}
			}
		}

		int mi = -1, m = INF;
		for(int i = 0; i < 10; i++) {
			if(!use[i]) continue;
			int sum = 0;
			for(int j = 0; j < 10; j++) {
				if(use[j]) sum += wf[i][j];
			}
			if(sum < m) {
				mi = i;
				m = sum;
			}
		}

		cout << mi << " " << m << endl;
	}
}