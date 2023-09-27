#include <iostream>
#include <string>

using namespace std;

void solve()
{
	int n;
	while (cin >> n, n)
	{
		int point = 0;
		int before = 2;
		int flag[2] = { 0 };
		for (int i = 0; i < n; ++i)
		{
			string s;
			cin >> s;
			if (s == "lu")
			{
				flag[0] = 1;
			}
			else if (s == "ld")
			{
				flag[0] = 2;
			}
			else if (s == "ru")
			{
				flag[1] = 1;
			}
			else if (s == "rd")
			{
				flag[1] = 2;
			}
			if ((flag[0] == 1 && flag[1] == 1 && before == 2) || (flag[0] == 2 && flag[1] == 2 && before == 1))
			{
				++point;
				flag[0] = 0;
				flag[1] = 0;
				if (before == 1)
				{
					before = 2;
				}
				else if (before == 2)
				{
					before = 1;
				}
			}
		}
		cout << point << endl;
	}
}

int main()
{
	solve();
	return(0);
}