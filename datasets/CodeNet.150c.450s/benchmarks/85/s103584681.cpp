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

static const int N = 100;

signed main()
{
	int n, p[N + 1], m[N + 1][N + 1];
	cin >> n;
	for (int i=1; i<=n; i++)
	{
		cin >> p[i - 1] >> p[i];
	}

	for (int i=1; i<=n; i++) m[i][i] = 0;
	for (int l=2; l<=n; l++)
	{
		for (int i=1; i<=n-l+1; i++)
		{
			int j = i + l - 1;
			m[i][j] = (1 << 21);
			for (int k=i; k<=j-1; k++)
			{
				m[i][j] = min(m[i][j], m[i][k] + m[k+1][j] + p[i-1] * p[k]* p[j]);
			}
		}
	}

	cout << m[1][n] << endl;
}