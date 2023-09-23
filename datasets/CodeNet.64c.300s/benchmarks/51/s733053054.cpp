#include <iostream>
using namespace std;

int main() {
	long long int n,ans = 1;
	cin >> n;
	if (n <= 20 && n >= 1) {
		for (int a = 1; a <= n; a++) {
			ans = ans*a;
		}
		cout << ans << endl;
	}
}