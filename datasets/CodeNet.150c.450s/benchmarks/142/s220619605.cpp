#include <bits/stdc++.h>
#define FIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl "\n"

using namespace std;

const int N = int(10e5 + 5);

int main() {

	FIO
	int n, k; cin >> n >> k;
	int a[N];
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = k+1; i <= n; i++) {
		if (a[i-k] < a[i])
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}