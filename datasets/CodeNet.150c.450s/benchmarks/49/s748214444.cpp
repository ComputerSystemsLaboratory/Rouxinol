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

int main() {
	ll n; cin >> n;
	while (n) {
		vector<ll> a(n);
		vector<ll> b(n - 2);
		rep(i, n) cin >> a[i];
		sort(a.begin(), a.end());
		ll b_count = 0;
		nrep(i, 1, n - 1) b[b_count++] = a[i];
		ll sum = 0;
		rep(i, b.size()) sum += b[i];
		cout << sum / b.size() << endl;
		cin >> n;
	}
	return 0;
}