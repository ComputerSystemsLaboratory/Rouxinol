#include "iostream"

using namespace std;


int n, w[20];

bool solve(int m, int now, int d) {
	if (now == m) return true;
	else if (now > m || d >= n) return false;
	else {
		return solve(m, now + w[d], d+1) | solve(m, now, d+1);
	}
}

int main() {

	int q;
	int m;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> w[i];
	}
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> m;
		if (solve(m, 0, 0)) cout << "yes" << endl;
		else cout << "no" << endl;
	}

	return 0;
}