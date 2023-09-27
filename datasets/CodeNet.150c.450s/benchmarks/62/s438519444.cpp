#include<iostream>
using namespace std;
int main() {
	int n, k, u;
	cin >> n >> k >> u;
	cout << min(n, min(k, u)) << ' ';
	if (min(n, min(k, u)) < n && max(n, max(k, u)) > n) {
		cout << n;
	}
	else if (min(n, min(k, u)) < k && max(n, max(k, u)) > k) {
		cout << k;
	}
	else {
		cout << u;
	}
	cout << ' ' << max(n, max(k, u)) << endl;
	int e; cin >> e;
}
