#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	string p;
	int i, j;
	int x, y = 0;
	string ans = "No";
	cin >> s;
	cin >> p;

	while (1)
	{
		for (i = y; i < s.length(); i++)
		{
			if (s[i] == p[0]) break;
		}
		if (i == s.length())
		{
			break;
		}
		else
		{
			x = i;
			for (j = 0; j < p.length(); j++)
			{
				if (x >= s.length())
				{
					x = 0;
				}
				if (s[x] == p[j])
				{
					ans = "Yes";
				}
				else
				{
					ans = "No";
					break;
				}
				x++;
			}
			if (ans == "Yes") break;
		}
		y++;
	}
	
	cout << ans << endl;
	return 0;
}