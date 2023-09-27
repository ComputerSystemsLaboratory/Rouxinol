#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
typedef long long ll;
using namespace std;
#define INF (1 << 30)
#define INFLL (1LL << 60)
#define rep(i, n) for(int i=0; i<(n); ++i)

namespace Sum
{
	int exec(int N, int K)
	{
		vector<int> sum(N + 1, 0);
		rep(i, N) {
			int s; cin >> s;
			sum[i + 1] = sum[i] + s;
		}
		int mx = 0 - INF;
		rep(i, N - K + 1) mx = max(mx, sum[i + K] - sum[i]);
		return mx;
	}
}

int main()
{
	vector<int> anss;
	for (;;) {
		int N, K; cin >> N >> K;
		if (N == 0 || K == 0) break;
		int rz = Sum::exec(N, K);
		anss.push_back(rz);
	}
	rep(i, anss.size()) {
		cout << anss[i] << endl;
	}
	return 0;
}

