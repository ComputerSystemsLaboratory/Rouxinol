#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main()
{
	while (1)
	{
		int n; cin >> n;
		if (n == 0) return 0;

		int f = 1;
		int l = 0, r = 0;
		int ans = 0;

		rep(i, 0, n)
		{
			string s; cin >> s;

			if (s == "lu")
				l = 1;
			else if (s == "ru")
				r = 1;
			else if (s == "ld")
				l = 0;
			else if (s == "rd")
				r = 0;

			if (f == l && f == r)
			{
				ans++;
				f = (f + 1) % 2;
			}
		}

		cout << ans << endl;
	}
}