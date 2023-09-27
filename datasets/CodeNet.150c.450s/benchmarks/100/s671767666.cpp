#include <bits/stdc++.h>
using namespace std;

int main() {
	ios :: sync_with_stdio(false);
	int n; cin >> n;
	long long ans = 1;
	for(int i = 1; i <= n; i ++)
		ans *= i;
	cout << ans << '\n';
	return 0;
}