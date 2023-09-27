#include<iostream>
using namespace std;
#include<cmath>
bool prime_judge(long long x) {
	if (x == 2)return true;
	if (x % 2 == 0)return false;
	if (x == 1 || x <= 0)return false;
	for (int i = 3; i <= sqrt(x); i += 2) {
		if (x%i == 0)return false;
	}
	return true;
}
int main() {
	//while (1) {
	//	long long x;
	//	cin >> x;
	//	cout << prime_judge(x) << endl;
	//}
	int a, d, n;
	while (cin >> a >> d >> n&&a&&d&&n) {
		long long x;
		int cnt = 0;
		for (int i = 0;; i++) {
			x = a + d*i;
			if (prime_judge(x)) {
				cnt++;
				//cout << cnt << " " << x << endl;
			}
			if (cnt == n) {
				cout << x << endl;
				break;
			}
		}
	}
	return 0;
}