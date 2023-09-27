#include <iostream>
#include <cstdio>
#define _USE_MATH_DEFINES
#include <math.h>
#include <vector>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	bool exist[52] = {false};
	for (int i = 0; i < n; ++i)
	{
		char c;
		int num;
		cin >> c >> num;
		--num;
		if (c == 'S')
		{
			exist[num] = true;
		}
		else if (c == 'H')
		{
			exist[13 + num] = true;
		}
		else if (c == 'C')
		{
			exist[26 + num] = true;
		}
		else if (c == 'D')
		{
			exist[39 + num] = true;
		}
	}
	for (int i = 0; i < 52; ++i)
	{
		if (exist[i] == false)
		{
			if (i / 13 == 0)
			{
				cout << "S " << i + 1 << endl;
			}
			else if (i / 13 == 1)
			{
				cout << "H " << i % 13 + 1 << endl;
			}
			else if (i / 13 == 2)
			{
				cout << "C " << i % 13 + 1 << endl;
			}
			else if (i / 13 == 3)
			{
				cout << "D " << i % 13 + 1 << endl;
			}
		}
	}
}

int main()
{
	solve();
	return(0);
}