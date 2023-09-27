#include <iostream>
#include <vector>
#include <cmath>
#define int long long
using namespace std;
signed main() {
	int n, m; vector<int>v;
	cin >> n; m = n;
	for (int i = 2; i <= sqrt(n); i++) {
		while (m % i == 0) {
			v.push_back(i);
			m /= i;
		}
	}
	if (m != 1)v.push_back(m);
	cout << n << ':'; for (int i : v)cout << ' ' << i; cout << endl;
}
