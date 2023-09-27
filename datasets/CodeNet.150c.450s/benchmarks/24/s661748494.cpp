#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct
{
	int D, P;
} Road;

class GreaterP
{
public:
	bool operator() (const Road& lhs, const Road& rhs)
	{
		return lhs.P > rhs.P;
	}
};

int main()
{
	int N, M;
	while (scanf("%d %d", &N, &M) != EOF) {
		if (N == 0 && M == 0)
			break;

		vector<Road> R(N);
		for (int i = 0; i < N; ++i)
			scanf("%d %d", &R[i].D, &R[i].P);

		sort(R.begin(), R.end(), GreaterP());

		int ans = 0;
		for (unsigned int i = 0; i < R.size(); ++i) {
			if (M < R[i].D) {
				int diff = R[i].D - M;
				ans += (diff * R[i].P);
				M = 0;
			} else {
				M -= R[i].D;
			}
		}

		printf("%d\n", ans);
	}
	return 0;
}