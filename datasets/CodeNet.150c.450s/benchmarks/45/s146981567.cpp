#include <bits/stdc++.h>
using namespace std;

#define int long long

#define MOD 1000000007

int pow_mod(int n, int m){
	int ans = 1;
	while(m > 0){
		if(m & 1) ans = (ans * n) % MOD;
		n = (n * n) % MOD;
		m >>= 1;
	}
	return ans;
}

signed main(){
	int n, m;
	cin >> n >> m;
	cout << pow_mod(n, m) << endl;
	return 0;
}

