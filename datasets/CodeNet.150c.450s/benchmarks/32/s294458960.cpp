#include<iostream>
#include<algorithm>
using namespace std;
#define REP(i, a, n) for(int i=a; i<n; i++)

int main()
{
	int m, nmin, nmax;
	while (cin >> m >> nmin >> nmax, m || nmin || nmax) {
		int P[201];
		REP(i, 0, m) cin >> P[i];

		int gap = 0, ans=0;
		REP(i, nmin, nmax + 1) {
			if (P[i - 1] - P[i] >= gap) {
				gap = P[i - 1] - P[i];
				ans = i;
			}
		}

		cout << ans << endl;
	}
	return 0;
}