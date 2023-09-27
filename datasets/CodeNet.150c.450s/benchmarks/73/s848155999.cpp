#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<functional>
#include<cmath>
#include<set>
#include<random>
#include<map>
using namespace std;
#define int long long
#define rep(i,n) for(int i=0;i<n;i++)
const long long mod = 1000000007;
const long long inf = 11451419198109130;
typedef pair<int, int> P;
typedef pair<int,P> PP;
struct edge { int to, cor; };
int c[4005], a[4005];
int dp[2005][2005];
int bit[5000];
vector<P>B, W;
int n;
int sum(int i) {
	int s = 0;
	while (i) {
		s +=bit[i];
		i -= i&-i;
	}
	return s;
}
void add(int i, int x) {
	while (i <= n) {
		bit[i] += x;
		i += i&-i;
	}
}

signed main() {
	cin >> n;
	int q; cin >> q;
	rep(i, q) {
		int a, b, c; cin >> a >> b >> c;
		if (a == 0) {
			add(b, c);
		}
		else {
			cout << sum(c) - sum(b - 1) << endl;
		}
	}
}
