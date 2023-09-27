#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

typedef pair<int, int> pii;
typedef long long ll;

int main()
{
	while (1)
	{
		int N, M; cin >> N >> M;
		if (N == 0) return 0;
		vector<pii> PD;
		rep(i, 0, N)
		{
			int d, p; cin >> d >> p;
			PD.push_back(pii(p, d));
		}
		sort(PD.begin(), PD.end(), greater<pii>());

		ll ans = 0;
		rep(i, 0, N)
		{
			if (M == 0)
			{
				ans += PD[i].first * PD[i].second;
				continue;
			}

			if (PD[i].second <= M)
			{
				M -= PD[i].second;
				continue;
			}

			ans += (PD[i].second - M) * PD[i].first;
			M = 0;
		}

		cout << ans << endl;
	}
}