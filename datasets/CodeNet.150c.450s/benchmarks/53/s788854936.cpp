#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

map<int, int>prime_factor(int n) {
	map<int, int>res;
	for (int i = 2; i*i <= n; i++) {
		while (n%i == 0) {
			++res[i];
			n /= i;
		}
	}
	if (n != 1)res[n] = 1;
	return res;
}
int main() {
	int n; cin >> n;
	auto res = prime_factor(n);
	cout << n << ":";
	for (auto p : res) {
		rep(i, p.second)cout << " " << p.first;
	}
	cout << endl;
}