#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const ll big = (ll)1e9 + 7;

ll po(ll b, ll e) {
	if (e == 1) {
		return b%big;
	}
	if (e%2){
		return b*po(b*b%big, e / 2)%big;
	}else {
		return po(b*b%big, e / 2)%big;
	}
}

int main() {
	ll m, n;
	cin >> m >> n;
	cout << po(m, n) << endl;
}