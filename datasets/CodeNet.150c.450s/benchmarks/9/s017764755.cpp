#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s, ans;
	int m;

	while (true)
	{
		cin >> s;
		if (s == "-")
			break;

		cin >> m;

		while (m--)
		{
			int h;
			cin >> h;

			string temp = s.substr(h);
			s.replace(s.size() - h, h, s.substr(0, h));
			s.replace(0, temp.size(), temp);
		}

		ans += s + "\n";
	}

	cout << ans;

	return 0;
}