#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define REP(i, b, n) for (int i = b; i < (b)+(n); i++)
using namespace std;
using ll = long long;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n + 1);
	rep(i, n) cin >> a[i];
	rep(i, n - k) {
		if (a[i] < a[i + k]) cout << "Yes\n";
		else cout << "No\n";
	}
}