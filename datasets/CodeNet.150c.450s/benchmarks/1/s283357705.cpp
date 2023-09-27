#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
#define roop(i, a, n) for(int i = (a); i < (n); i++)
using namespace std;
using ll = long long;

int main(){
	int n; cin >> n;
	ll a[n];
	rep(i, n) cin >> a[i];

	int l_last = 1;
	ll l[n];
	l[0] = a[0];
	roop(i, 1, n){
		if(l[l_last-1] < a[i]) l[l_last++] = a[i];
		else {
			auto lb = lower_bound(l, l+l_last, a[i]);
			l[lb - l] = a[i];
		}
	}

	cout << l_last << endl;
	return 0;
}

