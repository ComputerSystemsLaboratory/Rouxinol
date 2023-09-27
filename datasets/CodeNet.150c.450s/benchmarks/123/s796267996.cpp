#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < int(n); i++)
typedef long long ll;
using namespace std;

bool prime(int n) {
	if (n < 4) {
		if (n == 2 || n == 3)return true;
		else return false;
	}
	for (int i = 2; i*i <= n; i++)
		if (n%i == 0)return false;
	return true;
}
int main() {
	int n;
	cin >> n;
	int ans = 0;
	while (n--) {
		int t;
		cin >> t;
		if (prime(t))ans++;
	}
	cout << ans << endl;
	return 0;
}