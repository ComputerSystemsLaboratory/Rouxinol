#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		if (n == 0) {
			break;
		}
		n = 1000 - n;
		int ans = 0;
		while (n >= 500) {
			n -= 500;
			ans++;
		}
		while (n >= 100) {
			n -= 100;
			ans++;
		}
		while (n >= 50) {
			n -= 50;
			ans++;
		}
		while (n >= 10) {
			n -= 10;
			ans++;
		}
		while (n >= 5) {
			n -= 5;
			ans++;
		}
		while (n >= 1) {
			n -= 1;
			ans++;
		}
		cout << ans << endl;
	}
}