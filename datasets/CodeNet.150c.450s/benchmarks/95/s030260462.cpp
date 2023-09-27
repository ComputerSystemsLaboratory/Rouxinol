#include <iostream>
#include <string>
using namespace std;

int n;
string f[100];

int main() {	
	while (cin >> n) {
		if (!n) break;
		int ans = 0;
		for (int i = 0; i < n; i++) cin >> f[i];
		for (int i = 0; i < n / 2; i++) {
			if (f[2 * i][0] != f[2 * i + 1][0]) { ans++; }
		}
		cout << ans << endl;
	}
	return 0;
}