#include<iostream>
#include<vector>

using namespace std;
using ll = long long;
ll pow(ll n, ll m);
int main() {
	ll n, m;
	cin >> n >> m;
	ll k;
	k=pow( n,  m);
	cout << k << endl;
	
	
}
ll pow(ll n, ll m) {
	ll res = 1;
	int z = 1000000007;
	while (m > 0) {
		if (m & 1) {
			res *= n;
			res = res%z;
		}
		n = n*n;
		n = n%z;
		m >>= 1;
	}
	return res;
}

