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
		int n; cin >> n;
		if (n == 0) return 0;

		vi imos(n + 1, 0);
		rep(i, 0, n + 1) imos[i] = i;
		rep(i, 1, n + 1) imos[i] += imos[i - 1];

		int ans = 0;
		rep(i, 1, n) rep(j, i + 1, n + 1)
		{
			int sum = imos[j] - imos[i - 1];
			if (n == sum) ans++;
		}
		cout << ans << endl;
	}
}