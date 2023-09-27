#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s, p;
	cin >> s;
	string pcin;
	int ans = 0;
	size_t found = 0;
	while (cin >> pcin)
	{
		if (pcin == "END_OF_TEXT")
		{
			break;
		}
		//p += pcin + " ";
		transform(pcin.begin(), pcin.end(), pcin.begin(), ::tolower);
		if (pcin == s)
		{
			ans++;
		}
	}

	cout << ans << endl;

	return 0;
}