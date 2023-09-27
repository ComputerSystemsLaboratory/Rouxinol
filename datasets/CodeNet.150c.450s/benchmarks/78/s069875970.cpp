#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

typedef vector<int> vi;

#define PB push_back

const int inf = 1e9;

int dp[1000000], dp_odd[1000000];

int main()
{
	vi tet;

	for (int i = 1; ; ++i) {
		tet.PB(i * (i + 1) * (i + 2) / 6);
		if (tet.back() > 1000000) break;
	}

	for (int i = 1; i < 1000000; ++i) dp[i] = dp_odd[i] = inf;

	for (int i = 0; i < tet.size(); ++i) {
		for (int j = tet[i]; j < 1000000; ++j) {
			dp[j] = min(dp[j], dp[j - tet[i]] + 1);
			if (tet[i] & 1) {
				dp_odd[j] = min(dp_odd[j], dp_odd[j - tet[i]] + 1);
			}
			if (j < tet[i]) break;
		}
	}

	int N;
	while (scanf("%d", &N), N) printf("%d %d\n", dp[N], dp_odd[N]);
}