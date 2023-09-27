#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
//#define int long long
using namespace std;

void print_vi(vector<int> vi)
{
	rep(i, vi.size())
	{
		printf("%d ", vi[i]);
	}
}

static const int MMAX = 20;
static const int NMAX = 50000;
static const int INFTY = (1 << 29);

signed main()
{
	int n, m;
	int C[21];
	int T[NMAX + 1];

	cin >> n >> m;

	for (int i = 1; i <= m; i++) {
		cin >> C[i];
	}

	for (int i = 0; i <= NMAX; i++) T[i] = INFTY;
	T[0] = 0;
	for (int i=1; i<=m; i++)
	{
		for (int j=0; j+C[i] <= n; j++)
		{
			T[j + C[i]] = min(T[j+C[i]], T[j] + 1);
		}
	}

	cout << T[n] << endl;
}