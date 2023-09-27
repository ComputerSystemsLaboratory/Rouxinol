#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<queue>
#include<ciso646>
#include<random>
#include<map>
#include<set>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
const ll INF = (ll)1000000007 * 1000000007;
const double EPS = 1e-9;
typedef pair<int, int> P;
typedef unsigned int ui;
#define stop char nyaa;cin>>nyaa;
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,sta,n) for(int i=sta;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define per1(i,n) for(int i=n;i>=1;i--)
int main() {
	int n; vector<int>v; vector<int>u;
	int i = 1; int t = 1;
	while (t < 1000000) {
		v.push_back(t);
		if (t % 2)u.push_back(t);
		t *= (i + 3);
		t /= i;
		i++;
	}
	int dp1[1000000],dp2[1000000];
	fill(dp1, dp1 + 1000000, (int)MOD);
	fill(dp2, dp2 + 1000000, (int)MOD);
	dp1[0] = dp2[0] = 0;
	int len = v.size();
	rep(i, len) {
		rep(j, 1000000) {
			if (dp1[j]!=(int)MOD&&j + v[i] < 1000000) {
				dp1[j + v[i]] = min(dp1[j + v[i]], dp1[j] + 1);
			}
		}
	}
	len = u.size();
	rep(i, len) {
		rep(j, 1000000) {
			if (dp2[j] != (int)MOD&&j + u[i] < 1000000) {
				dp2[j + u[i]] = min(dp2[j + u[i]], dp2[j] + 1);
			}
		}
	}
	while (cin >> n, n) {
		cout << dp1[n] << " " << dp2[n] << endl;
	}
	return 0;
}
