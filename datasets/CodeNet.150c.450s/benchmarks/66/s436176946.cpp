#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	bool IsOpen = false;
	int n, m;
	map<string, int> u;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		u[s] = -1;
	}

	cin >> m;
	for (int i = 0; i < m; i++)
	{
		string s;
		cin >> s;
		if (u.count(s))
		{
			if (!IsOpen)
			{
				cout << "Opened by " + s << endl;
				IsOpen = true;
			}
			else
			{
				cout << "Closed by " + s << endl;
				IsOpen = false;
			}
		}
		else
		{
			cout << "Unknown " + s << endl;
		}
	}

	return 0;
}