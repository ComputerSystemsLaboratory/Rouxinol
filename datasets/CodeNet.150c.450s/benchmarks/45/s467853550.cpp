#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define REP(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
const ll M=1000000007;

//べき乗高速化
ll mpow(ll x, ll n){
	ll ans = 1;
	while(n != 0){
		if (n&1) ans = ans * x % M;
		x = x*x % M;
		n  = n >> 1;
	}
	return ans;
}

int main(){
	ll m,n;
	cin >> m >> n;
	cout << mpow(m,n) << endl;
    return 0;
}



