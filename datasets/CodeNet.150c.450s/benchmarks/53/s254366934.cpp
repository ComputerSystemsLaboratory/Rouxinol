#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using pii = pair<int, int>;


int main() {
	int n;
	cin >> n;
	cout << n << ":";
	for (int i = 2; i * i <= n; i++) {
		while (n % i == 0) {
			n /= i;
			cout << " " << i;
		}
	}
	if (n != 1) cout << " " << n;
	cout << endl;
	return 0;
}
