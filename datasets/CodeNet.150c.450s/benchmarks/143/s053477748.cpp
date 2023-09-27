#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
	ll	n,q,b,c,w,ans=0;
	cin >> n;
	vector<int> a(500010);
	rep(i,n){
		cin >> w;
		a[w]++;
		ans+=w;
	}
	cin >> q;
	rep(i,q){
		cin >> b>>c;
		ans -= a[b] * (b-c);
		a[c] += a[b];
		a[b] = 0;
		cout << ans <<endl;
	}
}