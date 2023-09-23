#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	int ans = 100000;
	int tmp;
	for (int i=0; i<n; i++) {
		ans *= 1.05;
		tmp = ans / 1000 * 1000;
		if (tmp != ans) ans = tmp + 1000;
	}
	cout << ans << endl;
	return 0;
}