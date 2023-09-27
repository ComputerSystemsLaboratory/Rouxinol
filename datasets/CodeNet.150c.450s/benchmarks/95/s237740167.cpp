#include <iostream>
#include <string>
#define rep(i, n) for(i = 0; i < n; i++)
using namespace std;

int n;
string f[100];

int main() {
	int i;
	
	while (cin >> n) {
		if (!n) break;
		rep(i, n) cin >> f[i];
		
		int ans = 0;
		for (i = 0; i + 1 < n; i += 2) {
			if (f[i][0] != f[i + 1][0]) {
				ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
