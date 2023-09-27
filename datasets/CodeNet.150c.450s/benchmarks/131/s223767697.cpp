#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)

string calc(string a, string b, int n)
{
	string ret = "";

	int back = 0;
	rrep(i, n - 1, 0)
	{
		int aa = a[i] - '0';
		int bb = b[i] - '0';

		int cc = aa - bb - back;
		if (cc < 0)
		{
			back = 1;
			cc += 10;
		}
		else
			back = 0;

		string c = "0";
		c[0] += cc;

		ret = c + ret;
	}

	return ret;
}

int main()
{
	while (1)
	{
		string s; cin >> s;
		int n; cin >> n;
		if (n == 0) return 0;

		rep(i, 0, s.length() - n) s = "0" + s;

		map<string, int> m;
		int i = 0;
		while (m.find(s) == m.end())
		{
			m[s] = i; i++;

			string a = s; sort(a.begin(), a.end(), greater<char>());
			string b = s; sort(b.begin(), b.end());

			s = calc(a, b, n);
		}

		cout << m[s] << " ";
		int ans = 0;
		rep(i, 0, n) ans = ans * 10 + s[i] - '0';
		cout << ans << " ";
		cout << i - m[s] << endl;
	}
}