#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	string p;
	int i, j;
	int y = 0;
	string ans = "No";
	cin >> s;
	cin >> p;

	s = s + s;

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
			for (j = 0; j < p.length(); j++)
			{
				if (s[i+j] == p[j])
				{
					ans = "Yes";
				}
				else
				{
					ans = "No";
					break;
				}
			}
			if (ans == "Yes") break;
		}
		y++;
	}
	
	cout << ans << endl;
	return 0;
}