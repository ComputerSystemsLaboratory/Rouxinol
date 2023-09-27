#include <iostream>
#include <math.h>
using namespace std;

void solve(int n) {
	while (n != 1) {
		cout << " ";
		if (n == 2 || n == 3) {
			cout << n;
			n /= n;
			break;
		}

		for (int i = 2; i <= sqrt(n);i++) {
			if (n%i == 0) {
				n /= i;
				cout << i;
				break;
			}
			if (i == (int)sqrt(n)) {
				cout << n;
				n /= n;
				break;
			}
		}
	}
}

int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int n; cin >> n;
	cout << n << ":";
	solve(n);
	cout << endl;
	return 0;
}