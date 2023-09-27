#include <iostream>
#include <bitset>
#include <algorithm>
using namespace std;

///////////////////////////SubMain//////////////////////////////////
int main(int argc, char *argv[])
{

	int n;
	cin >> n;
	while (n--)
	{
		int ball[10];

		for (int i = 0; i < 10; ++i)
		{
			cin >> ball[i];
		}

		bitset<10> direction;
		int all = 1024;
		while (all-- > 0)
		{
			direction = static_cast<bitset<10> >(all);
			bool perfect = true;
			int left = 0;
			int right = 0;
			for (int i = 0; i < 10; ++i)
			{
				if (direction[i])
				{
					if (ball[i] > left)
					{
						left = ball[i];
					}
					else
					{
						perfect = false;
						break;
					}
				}
				else
				{
					if (ball[i] > right)
					{
						right = ball[i];
					}
					else
					{
						perfect = false;
						break;
					}
				}
			}
			if (perfect)
			{
				break;
			}
		}

		if (all >= 0)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}

	return 0;
}