#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define REP(i,n) for(int i=1;i<=n;i++)
typedef long long ll;

int main(){
	ll n,k;
	cin >> n >> k;
	vector<ll> a(n);
	rep(i,n) cin >> a[i];
	for (int i = k; i < n; ++i) {
		if(a[i-k] < a[i]) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
    return 0;
}

