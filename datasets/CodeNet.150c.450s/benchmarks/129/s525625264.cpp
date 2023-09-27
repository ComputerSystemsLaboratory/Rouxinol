#include <iostream>
#include <vector>
using namespace std;
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int r, c; cin >> r >> c;
	vector<vector<int>> m(r + 1, vector<int>(c + 1,0));
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c;j++) {
			cin >> m[i][j]; cout << m[i][j] << " "; m[i][c] += m[i][j]; m[r][j] += m[i][j];
		}
		m[r][c] += m[i][c];
		cout << m[i][c] << endl;
	}
	for (int j = 0; j < c;j++) {
		cout << m[r][j] << " ";
	}
	cout << m[r][c] << endl;
}