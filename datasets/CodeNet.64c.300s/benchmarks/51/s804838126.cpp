#include <bits/stdc++.h>

using namespace std;

int main() {
	int n; cin >> n;
	long long ans = 1;
	for (int i = 0; i < n; ++i) {
		ans *= i+1;
	}
	cout << ans << endl;
}