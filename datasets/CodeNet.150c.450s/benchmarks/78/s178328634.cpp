#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

typedef vector<int> vi;

#define PB push_back

const int inf = 1e9;

int dp[1000001], dp_odd[1000001];

int main()
{
	vi tet, tet_odd;

	for (int i = 1; ; ++i) {
		tet.PB(i * (i + 1) * (i + 2) / 6);
		if (tet.back() >= 1000000) break;
	}

	for (int i = 0; i < tet.size(); ++i) {
		if (tet[i] & 1) tet_odd.PB(tet[i]);
	}

	for (int i = 1; i <= 1000000; ++i) dp[i] = dp_odd[i] = inf;

	for (int i = 1; i <= 1000000; ++i) {
		for (int j = 0; j < tet.size(); ++j) {
			if (i >= tet[j]) {
				dp[i] = min(dp[i], dp[i - tet[j]] + 1);
			}
			if (i < tet[j]) break;
		}

		for (int j = 0; j < tet_odd.size(); ++j) {
			if (i >= tet_odd[j]) {
				dp_odd[i] = min(dp_odd[i], dp_odd[i - tet_odd[j]] + 1);
			}
			if (i < tet_odd[j]) break;
		}
	}

	int N;
	while (scanf("%d", &N), N) printf("%d %d\n", dp[N], dp_odd[N]);
}