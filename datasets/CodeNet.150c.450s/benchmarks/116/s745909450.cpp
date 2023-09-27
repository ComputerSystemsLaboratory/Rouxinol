#include<iostream>
#include<algorithm>
using namespace std;
int n, m, s[10000000], k[10000000], MAX;
int main() {
	while (true) {
		MAX = -2000000000;
		cin >> n >> m;
		if (!n) { break; }
		for (int i = 1; i <= n; i++) {
			cin >> s[i];
			k[i] = k[i - 1] + s[i];
		}
		for (int i = 1; i <= n - m; i++) {
			MAX = max(MAX, k[i + m] - k[i]);
		}
		cout << MAX << endl;
	}
}