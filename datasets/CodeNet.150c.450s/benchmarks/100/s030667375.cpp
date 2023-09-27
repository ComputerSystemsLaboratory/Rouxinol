#include <iostream>

using namespace std;

int main(void) {
	long long int n, ans = 1;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (n == 0) {
			ans = 1;
			break;
		}
		else {
			ans *= i;
		}
	}
	cout << ans << endl;
}