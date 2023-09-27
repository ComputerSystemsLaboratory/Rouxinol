#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, N = 1e5+7, h, q, b, c, s = 0, a[N];
	memset(a, 0, sizeof(a));
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> h;
		s += h;
		a[h]++;
	}
	cin >> q;
	while(q--){
		cin >> b >> c;
		s += a[b] * (c - b);
		cout << s << '\n';
		a[c] += a[b];
		a[b] = 0;
	}
}