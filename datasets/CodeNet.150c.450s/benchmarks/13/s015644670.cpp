#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	string p;
	cin >> s >> p;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == p[0])
		{
			if (1 == p.size())
			{
				cout << "Yes" << endl;
				return 0;
			}
			int i_tmp = i + 1;
			for (int j = 1; j < p.size(); j++)
			{
				if (i_tmp > s.size() - 1)
				{
					i_tmp = 0;
				}

				if (s[i_tmp] == p[j])
				{
					if (j == p.size() - 1)
					{
						cout << "Yes" << endl;
						return 0;
					}
					i_tmp++;
				}
				else
				{
					break;
				}
			}
		}
	}
	cout << "No" << endl;
}
