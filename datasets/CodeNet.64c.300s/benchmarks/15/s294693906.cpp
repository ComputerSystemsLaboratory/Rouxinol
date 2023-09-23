#include <bits/stdc++.h>
using namespace std;
int n, a[109], dp[109];
int main() {
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
	int z = 0;
	for(int i = 0; i < n; i++) {
		int ptr = min_element(a + i, a + n) - a;
		if(i != ptr) swap(a[i], a[ptr]), z++;
	}
	for(int i = 0; i < n; i++) {
		if(i) cout << ' ';
		cout << a[i];
	}
	cout << endl;
	cout << z << endl;
	return 0;
}