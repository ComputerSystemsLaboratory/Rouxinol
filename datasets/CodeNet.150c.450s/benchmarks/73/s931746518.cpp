#include<cstdio>
#include <iostream>
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

#define rep(i,n) for(int i=0; i<int(n); i++)

using namespace std;
typedef long long ll;
typedef pair<int, int>P;

const ll sqrtN = 512;

struct SqrtDecomposition {
	int N, K;
	vector<ll>data;
	vector<ll>bucketSum;
	SqrtDecomposition(ll n) :N(n) {
		K = (N + sqrtN - 1) / sqrtN;
		data.assign(K*sqrtN,0);
		bucketSum.assign(K,0);
	}
	void add(ll x, ll y) {
		ll k = x / sqrtN;
		data[x] += y;
		ll sum = 0;
		for (int i = k * sqrtN; i < (k + 1)*sqrtN; ++i)
			sum += data[i];
		bucketSum[k] = sum;
	}
	int getSum(ll x, ll y) {
		int sum = 0;
		for (int k = 0; k< K; ++k) {
			ll l = k * sqrtN, r = (k + 1) * sqrtN;
			if (r <= x || y <= l)continue;
			if (x <= l && r <= y)sum += bucketSum[k];
			else {
				for (int i = max(x, l); i < min(y, r); ++i)
					sum += data[i];
			}
		}
		return sum;
	}
};

int main()
{
	ll N, Q; cin >> N >> Q;
	SqrtDecomposition decomp(N);
	while (Q--) {
		int c, x, y;
		cin >> c >> x >> y;
		if (c == 0)decomp.add(x, y);
		else cout << decomp.getSum(x, y + 1) << endl;
	}
	return 0;
}