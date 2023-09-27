#include<iostream>
#include<stack>
#include<queue>
using namespace std;
#define max 100
#define infty 1<<21

int n;
int aa[max][max];
int color[max];
int d[max];
int p[max];

int prim() {
	for (int i = 0; i < n; i++) {
		color[i] = 0;
		d[i] = infty;
		p[i] = -1;
	}
	d[0] = 0;
	int ans = 0;

	while (true) {
		int mincost = infty;
		int u = -1;
		for (int i = 0; i < n; i++) {
			if (color[i] != 1 && d[i] < mincost) {
				u = i;
				mincost = d[i];
			}
		}
		if (u == -1) break;
		color[u] = 1;
		for (int i = 0; i < n; i++) {
			if (color[i] != 1 && aa[u][i] != -1) {
				if (aa[u][i] < d[i]) {
					d[i] = aa[u][i];
					p[i] = u;
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (p[i] != -1) ans += aa[i][p[i]];
	}

	return ans;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int num1;
			cin >> num1;
			aa[i][j] = num1;
		}
	}

	int kotae = prim();

	cout << kotae << endl;

	return 0;
}
