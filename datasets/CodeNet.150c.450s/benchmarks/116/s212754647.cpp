#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define SIZE(x) ((int)(x).size())
#define UQ(v) v.erase(unique(v,begin(),v,end()),v.end());
ll INF = 1LL <<30;
#define pb push_back 
int dxy4[5] = { 0,1,0,-1,0 };
int dxy8[9] = { 0,1,1,0,-1,1,-1,-1,0 };
int gcd(int a, int b) { return b ? gcd(b, a%b) : a; }
ll mod7 = 1000000007;
ll mod9 = 1000000009;
#define all(x) (x).begin(),(x).end()
#define rep(i, n) for(int i = 0; i < n; i++)
#define FOR(i,x,n) for(int i=x;i<n;++i)
//vector< vector<int> > v (max1, vector<in t>(max2) );

int a[100000];


int main() {
	int n,k;
	while (cin >> n >> k) {
		if (!n)break;
		rep(i, n)cin >> a[i];
		ll sum = 0 ,ans = 0;;
		rep(i, k)sum += a[i];
		FOR(i, k, n) {
			sum = sum + a[i] - a[i - k];
			ans = max(sum, ans);

		}
		cout << ans << endl;
	}
	cin >> n;
	
	return 0;
}
