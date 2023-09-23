#include <iostream>

using namespace std;

int main() {
	int d;
	long long ans;
	while (cin >> d) {
		ans = 0;
		for (int i = d; i < 600; i = i + d) {
			ans += d * i * i;
		}
		cout << ans << endl;
	}
	return 0;
}