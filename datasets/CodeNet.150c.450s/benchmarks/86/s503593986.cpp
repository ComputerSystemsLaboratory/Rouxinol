#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
typedef long long ll;
typedef vector<string> vs;
typedef vector<int> vi;

int main()
{
	while (1)
	{
		int n, m, p;
		cin >> n >> m >> p;
		if (n == 0) return 0;

		vi x(n);
		rep(i, 0, n) cin >> x[i];

		int sum = 0;
		rep(i, 0, n) sum += x[i];

		int ans;
		if (n < m)
			ans = 0;
		else
		{
			if (x[m - 1] == 0)
				ans = 0;
			else
				ans = sum * 100 * (100 - p) / 100 / x[m - 1];
		}
		cout << ans << endl;
		
	}
}