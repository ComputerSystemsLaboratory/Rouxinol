#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int ans = 100000;
	for(int i = 0; i < n; i++) {
		double tmp = ans * 1.05;
		if((int)tmp % 1000 > 0) tmp += 1000;
		ans = tmp / 1000;
		ans *= 1000;
	}
	cout << ans << endl;
}