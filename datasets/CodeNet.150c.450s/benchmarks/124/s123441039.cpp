#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int x[1000][1000];
int y[1000];

int main() {
	memset(x, 1, sizeof(x));
	memset(y, 1, sizeof(y));
	int n, a, b, c, d;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		for (int i = 0; i < b; i++) {
			cin >> c >> d;
			x[a][c] = d;
		}
	}
	y[0] = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				y[k] = min(y[k], y[j] + x[j][k]);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << i << ' ' << y[i] << endl;
	}
	return 0;
}