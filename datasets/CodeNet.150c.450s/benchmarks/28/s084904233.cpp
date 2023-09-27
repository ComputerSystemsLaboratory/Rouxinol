#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
#define ll long long
using namespace std;
const ll maxn = 1e5 + 10;
ll a[maxn];
ll n, k;
ll check(ll p) {
	ll i = 0;
	ll temp = 0, nk = k-1;
	for (i = 0; i < n; i++) {
		if (temp + a[i] <= p) {
			temp += a[i];
		}
		else if(nk>0&&a[i]<=p){
			temp = a[i];
			nk--;
		}
		else {
			return i;
		}
	}
	return i+1;
}
int main() {
//	freopen("input.txt", "r", stdin);
	scanf("%lld%lld", &n, &k);
	for (ll i = 0; i < n; i++) {
		scanf("%lld", &a[i]);
	}
	ll l = 0, r = 1e9;
	while (l < r -1) {
		ll m =(r+l)/2;
		if (check(m) >= n) {
			r = m;
		}
		else {
			l = m;
		}
	}
	printf("%lld\n", r);
	return 0;
}