#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<long long> arr(n);
	unordered_map<long long, long long> cnt;
	for (int i=0; i<n; i++) {
		cin >> arr[i];
		cnt[arr[i]]++;
	}
	long long sm = accumulate(arr.begin(), arr.end(), 0LL);
	int q;
	cin >> q;
	while (q--) {
		long long b, c;
		cin >> b >> c;
		sm -= cnt[b] * b;
		sm += cnt[b] * c;
		cnt[c] += cnt[b];
		cnt[b] = 0;
		cout << sm << endl;
	}
}
