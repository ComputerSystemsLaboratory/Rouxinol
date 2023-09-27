
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
#include<queue>
#include<vector>
#include<functional>
#include<cmath>
#include<map>
#include<stack>
#include<set>
#include<numeric>
#include<limits>
#include<iterator>

#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define rep(i,n) for(int i=0; i<n; i++)
#define INF (1<<20)

using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ll, char> plc;

vector<int> w;
ll inf = (ll)(1e15);
int n, k;

bool ok(ll p) {
	int W = 0,pow = 1;
	for (int i = 0; i < n; i++) {
		if (w[i] > p) { pow = k + 1; break; }
		if (W + w[i] <= p) {
			W += w[i];
		}
		else {
			W = w[i];
			pow++;
		}
	}
	return pow <= k ? 1 : 0;
}

int main() {
	cin >> n >> k;
	w.resize(n);

	rep(i, n) cin >> w[i];

	ll l = 0, h = inf;
	while (l+1 < h) {
		int m = (l + h) / 2;
		if (ok(m))h = m;
		else l = m;
	}
	cout << h<< endl;
	return 0;
}