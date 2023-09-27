#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
#include<string>
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define nrep(i,a,b) for(int i=a;i<b;i++)
#define INF 1145141919810893931
using namespace std;

void func(vector<ll> &a,ll p,ll r) {
	vector<ll> temp_p(p-1);
	rep(i, p - 1) temp_p[i] = a[i];
	vector<ll> temp_r(r);
	rep(i, r) temp_r[i] = a[i + p - 1];
	rep(i, r) a[i] = temp_r[i];
	rep(i, p - 1) a[i + r] = temp_p[i];
}

int main() {
	ll n, r; cin >> n >> r;
	vector<ll> a;
	while (n && r) {
		a.resize(n);
		rep(i, n) a[i] = n - i;
		rep(i, r) {
			ll p, c; cin >> p >> c;
			func(a,p,c);
		}cout << a[0] << endl;
		cin >> n >> r;
	}
	return 0;
}