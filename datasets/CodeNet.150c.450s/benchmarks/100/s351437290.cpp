#include <iostream>

using namespace std;

int main() {
	int n;
	long res = 1;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		res *= i;
	}
	cout << res << endl;
	return 0;
}