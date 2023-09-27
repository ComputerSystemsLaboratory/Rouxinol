#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define REP(i, a, n) for(int i=a; i<n; i++)
#define INF 100000000
#define ll long long

int dp1[1000001];
int dp2[1000001];
int main()
{
	vector<ll> poloc;
	
	int i = 1;
	while (i*(i + 1)*(i + 2) / 6 <= 1000000) {
		poloc.push_back(i*(i + 1)*(i + 2) / 6);
		i++;
	}

	REP(i, 1, 1000001) dp1[i] = dp2[i] = INF;
	dp1[0] = dp2[0] = 0;
	REP(i, 0, poloc.size()) {
		REP(j, 0, 1000001) {
			if (j + poloc[i] > 1000000) break;
			dp1[j + poloc[i]] = min(dp1[j + poloc[i]], dp1[j] + 1);
		}

		if (poloc[i] % 2 == 1) {
			REP(j, 0, 1000001) {
				if (j + poloc[i] > 1000000) break;
				dp2[j + poloc[i]] = min(dp2[j + poloc[i]], dp2[j] + 1);
			}
		}
	}

	int n;
	while (cin >> n, n) {
		cout << dp1[n] << " " << dp2[n] << endl;
	}
	return 0;
}