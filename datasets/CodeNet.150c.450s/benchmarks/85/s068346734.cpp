#include<iostream>
#include<algorithm>
using namespace std;

static const int INFTY = 2000000000;

int main() {
	int n, last;
	cin >> n;
	int p[n + 1];
	int m[n + 1][n + 1];
	for (int i = 0; i < n; i++) {
		cin >> p[i] >> last;
	}
	p[n] = last;

	for (int i = 1; i <= n; i++) {
			m[i][i] = 0;
	}

	for (int l = 2; l <= n; l++) { //????±???¨?????????????????°
		for (int i = 1; i <= n - l + 1; i++) { //????±???????????????????
			int j = i + l - 1;
			m[i][j] = INFTY;
			for (int k = i; k < j; k++) { //???
				m[i][j] = min(m[i][j], m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j]);
			}
		}
	}

	cout << m[1][n] << endl;
	return 0;
}