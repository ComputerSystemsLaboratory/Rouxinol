#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;

	while (1){
		cin >> n;
		if (!n) break;

		string f;

		int a = 0, b = 0, c = 1, d = 1;
		int ans = 0;
		for (int i = 1; i <= n; i++) {
			cin >> f;

			if (f == "lu") {
				a = 1, c = 0;
			}
			if (f == "ru") {
				b = 1, d = 0;
			}
			if (f == "ld") {
				a = 0, c = 1;
			}
			if (f == "rd") {
				b = 0, d = 1;
			}

			if (ans % 2 == 0 && a == 1 && b == 1) { //床から台
				ans += 1;
			}
			if (ans % 2 == 1 && c == 1 && d == 1) { //台から床
				ans += 1;
			}
		}
		cout << ans << endl;
	}
}
