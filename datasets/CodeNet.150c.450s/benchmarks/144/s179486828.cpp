#include <iostream>
#include <vector>
using namespace std;
typedef vector<long long> Array;
typedef vector<Array> Matrix;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int n, m, l; cin >> n >> m >> l;
	Matrix a(n, Array(m)), b(m, Array(l)), c(n, Array(l));

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) 
			cin >> a[i][j];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < l; j++) 
			cin >> b[i][j];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			for (int k = 0; k < m; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
			cout << c[i][j];
			if (j != l - 1) cout << " ";
		}
		cout << endl;
	}
}