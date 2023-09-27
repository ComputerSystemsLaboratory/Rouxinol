#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin ,s);
	string ans(s);
    transform( s.begin(), s.end(), ans.begin(), ::toupper );

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ans[i])
		{
			ans[i] = tolower(ans[i]);
		}
	}
	cout << ans << endl;

	return 0;
}