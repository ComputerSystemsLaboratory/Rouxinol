#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
 
int main(){
	int n, q;
	ll sum = 0;
	cin >> n;
	vector<int> a(100001);
	rep(i, n){
		int in;
		cin >> in;
		a[in]++;
		sum += in;
	}
	cin >> q;
	vector<ll> ans(q);
	rep(i, q){
		int b, c;
		cin >> b >> c;
		sum -= a[b]*(b-c);
		a[c] += a[b];
		a[b] = 0;
		ans[i] = sum;
//		cout << sum << endl;
	}
	rep(i, q){
		cout << ans[i] << endl;
	}
	return 0;
}