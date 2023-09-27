#include <cstdio>
#include <iostream>
using namespace std;
typedef long long ll;
#define MOD 1000000007ll
ll modpow(ll a,ll x){
	ll ret = 1ll;
	while(x){
		if(x&1)ret=ret*a%MOD;
		a = a*a%MOD;
		x >>= 1;
	}
	return ret;
}
int main(){
	ll m,n;
	cin >> m >> n;
	cout << modpow(m,n) << endl;
	return 0;
}