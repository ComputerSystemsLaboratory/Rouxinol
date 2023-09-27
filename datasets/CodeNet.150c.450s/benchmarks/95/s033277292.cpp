#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
	int n;
	int ans = 0;
	string c;
	int h[2][103] = { 0 };
	int ll = 0; int rr = 0;
	while (1) {
		cin >> n;
		if (n == 0)break;
		int kk=0;
		for (int i = 1; i <= n; i++) {
			cin >> c;
			if (c == "ru" ) {
				rr=1;
			}
			if (c == "rd") {
				rr = 0;
			}
			if (c == "lu") {
				ll = 1;
			}
			if (c == "ld") {
				ll = 0;
			}
			h[0][i] = ll;
			h[1][i] = rr;

		}
		for (int i = 2; i <= n; i++) {
			if (h[0][i - 2] == 0 && h[1][i - 2] == 0 && h[0][i] == 1 && h[1][i] == 1)ans++;

			if (h[0][i - 2] == 1 && h[1][i - 2] == 1 && h[0][i] == 0 && h[1][i] == 0)ans++;
		}

		cout << ans << endl;
		ans = 0; ll = 0; rr = 0;
	}
}
