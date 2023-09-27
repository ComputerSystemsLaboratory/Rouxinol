#include <bits/stdc++.h>
#define INF 114514810
#define FOR(i, r, n) for(int i=(r); i<(n); i++) 
#define REP(i, n) FOR(i, (0), n)

using namespace std;

int m, n;
long long int cx = 1, cy = 1;

int main()
{
	cin >> m >> n;
	cy = m;
	for (int i = 0; i < 5000; i++)
	{
		if (!n) {
			cout << cx << endl;
			return 0;
		}
		if (n & 1) cx = cx*cy % 1000000007;
		cy = cy*cy % 1000000007;
		n >>= 1;
	}
}