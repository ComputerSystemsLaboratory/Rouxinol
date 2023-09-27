#include <bits/stdc++.h>
using namespace std;
int n, a, b;
int main() {
	while(cin >> n, n) {
		int p = 0, q = 0;
		while(n--) {
			cin >> a >> b;
			if(a > b) p += a + b;
			else if(a < b) q += a + b;
			else p += a, q += b;
		}
		cout << p << ' ' << q << endl;
	}
	return 0;
}