#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
typedef long long ll;

int main() {
	ll n,q;
	cin >> n;
	ll sum = 0;
	vector<ll> A(100000,0);
	vector<ll> S;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		A[k]++;
		sum += k;
	}

	cin >> q;
	for (int i = 0; i < q; i++) {
		ll b, c;
		cin >> b >> c;
		sum += A[b] * c - A[b] * b;
		S.emplace_back(sum);
		A[c] += A[b];
		A[b] = 0;
	}
	for (int i = 0; i < S.size(); i++) {
		cout << S[i] << endl;
	}
	return 0;
	
}
