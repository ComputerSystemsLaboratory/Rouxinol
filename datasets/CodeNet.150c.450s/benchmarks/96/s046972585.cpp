#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
typedef long long ll;
typedef vector<string> vs;
typedef vector<int> vi;

vector< vector<char> > chars = {
	{ '.', ',', '!', '?', ' ' },
	{ 'a', 'b', 'c' },
	{ 'd', 'e', 'f' },
	{ 'g', 'h', 'i' },
	{ 'j', 'k', 'l' },
	{ 'm', 'n', 'o' },
	{ 'p', 'q', 'r', 's' },
	{ 't', 'u', 'v' },
	{ 'w', 'x', 'y', 'z' }
};

int main()
{
	int n; cin >> n;
	rep(i, 0, n)
	{
		string s; cin >> s;

		int back = -1;
		int click_num = 0;
		string ans = "";
		rep(j, 0, s.length())
		{
			int num = s[j] - '0';
			if (num == 0)
			{
				if (back < 0) continue;
				ans += chars[back][click_num % chars[back].size()];
				back = -1;
			}
			else
			{
				if (back < 0)
				{
					back = num - 1;
					click_num = -1;
				}

				click_num++;
			}
		}

		cout << ans << endl;
	}
}