#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll N;
vector<ll> V(1000);

void print(ll x) {
	cout << "node " << x << ": key = " << V[x] << ", ";
	if (x > 1) {
		cout << "parent key = " << V[x / 2] << ", ";
	}
	if (x * 2 <= N) {
		cout << "left key = " << V[x * 2] << ", ";
	}
	if (x * 2 + 1 <= N) {
		cout << "right key = " << V[x * 2 + 1] << ", ";
	}
	cout << endl;
}

int main() {
	cin >> N;
	for (ll i = 1; i < N + 1; i++)
		cin >> V[i];
	for (ll i = 1; i < N + 1; i++) {
		print(i);
	}
}

