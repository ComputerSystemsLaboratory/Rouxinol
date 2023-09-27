#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define INF INT_MAX
#define LINF 1LL<<60

struct BIT {
	int N;
	vector<ll> bit;
	BIT(int N):N(N) {
		/* BIT???[1..N]??§??±??? */
		bit.resize(N + 1, 0);
	}

	void add(int x, int val)
	{
		while (x <= N) {
			bit[x] += val;
			x += x & -x;
		}
	}

	int sum(int x)
	{
		int ret = 0;
		while (x) {
			ret += bit[x];
			x &= (x - 1);
		}

		return (ret);
	}
};

int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int n, q; cin >> n >> q;
	BIT bit(n);
	for (int i = 0; i < q; i++) {
		int com, x, y; cin >> com >> x >> y;
		if (com == 0) {
			bit.add(x, y);
		}
		else {
			cout << bit.sum(y) - bit.sum(x-1) << endl;
		}
	}
}