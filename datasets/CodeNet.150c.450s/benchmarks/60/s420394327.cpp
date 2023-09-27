#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, u, k, v;
	cin >> n;
	vector<vector<bool>> am(n, vector<bool>(n));
	for (int i = 0; i < n; ++i) {
		cin >> u >> k;
		for (int j = 0; j < k; ++j) {
			cin >> v;
			am[u - 1][v - 1] = true;
		}
	}
	for (vector<bool>& i : am) {
		cout << i[0];
		for (int j = 1; j < n; ++j) cout << ' ' << i[j];
		cout << endl;
	}
}
