#include<iostream>
using namespace std;
int main() {
	int n, m, p;
	while (cin >> n >> m >> p, n || m || p) {
		int sum = 0;
		int key;
		for (int i = 1; i <= n; i++) {
			int k; cin >> k;
			sum += k;
			if (i == m)key = k;
		}
		if (key == 0)cout << "0\n";
		else cout << sum  * (100 - p)  / key << endl;
	}
}