#include <iostream>
#include <algorithm>

using namespace std;

bool isprime(int n) {
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return n != 1;
}

int main() {
	int n, a, ans = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (isprime(a) == true)
			ans++;
	}
	cout << ans << endl;
	return 0;
}