#include <iostream>
using namespace std;

static const int NMAX = 100;
bool G[NMAX][NMAX];

int main() {
	int n; cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			G[i][j] = false;
		}
	}

	for (int i = 0; i < n; i++) {
		int deg; cin >> deg >> deg;
		for (int j = 0; j < deg; j++) {
			int p; cin >> p;
			G[i][p - 1] = true;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j) cout << " ";
			cout << G[i][j];
		}
		cout << endl;
	}

	return 0;
}
