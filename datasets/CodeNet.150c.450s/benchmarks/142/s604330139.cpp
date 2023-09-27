#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	int n,k;
	cin >> n >> k;
	vector< int > a(n);
	for (auto& e:a)cin >> e;
	// bool y = 1;
	for (int i=0;i+k<n;i++) {
		cout << (a[i+k] > a[i] ? "Yes" : "No") << '\n';
	}
	return 0;
}
