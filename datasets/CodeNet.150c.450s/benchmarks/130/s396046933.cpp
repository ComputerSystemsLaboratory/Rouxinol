#include <iostream>
#include <vector>
using namespace std;
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int n, m; cin >> n >> m;
	vector<vector<int>> a(n, vector<int>(m));
	vector<vector<int>> b(m, vector<int>(1));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (int j = 0; j < m; j++) {
		cin >> b[j][0];
	}

	for (int i = 0; i < n; i++) {
		int c = 0;
		for (int j = 0; j < m; j++) {
			c += a[i][j] * b[j][0];
		}
		cout << c << endl;
	}
}