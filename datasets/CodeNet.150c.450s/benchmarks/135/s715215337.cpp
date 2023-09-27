#include "bits/stdc++.h"
using namespace std;
#define mod 1000000007
#define all(c) begin(c),end(c)
using ll = long long;
int dd[] = { 0, 1, 0, -1, 0 }; //→↓←↑

void solve()
{
	vector<int> H;
	vector<int> W;
	vector<int> J;
	while (true)
	{
		int N, M;
		cin >> N >> M;
		if (N == 0 && M == 0)break;
		H = vector<int>(N + 1);
		W = vector<int>(M + 1);
		J.clear();
		for (int i = 0; i < N; i++)
		{
			cin >> H[i + 1];
			H[i + 1] += H[i];
		}
		for (int i = 0; i < N; i++)
		{
			for (int j = i + 1; j < N + 1; j++)
			{
				J.emplace_back(H[j] - H[i]);
			}
		}
		sort(all(J));

		for (int i = 0; i < M; i++)
		{
			cin >> W[i + 1];
			W[i + 1] += W[i];
		}

		ll ans = 0;
		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < M + 1; j++)
			{
				ans += upper_bound(all(J), W[j] - W[i]) - lower_bound(all(J), W[j] - W[i]);
			}
		}
		cout << ans << endl;
	}

}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	solve();
	return 0;
}
