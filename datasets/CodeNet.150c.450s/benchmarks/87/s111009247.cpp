#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int H;
	while (cin >> H, H)
	{
		vector< vector<int> > stone(H, vector<int>(5));
		for (int i = 0; i < H; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				cin >> stone[i][j];
			}
		}
		int preSum = -1;
		int sum = 0;
		while (preSum != sum)
		{
			preSum = sum;
			for (int i = 0; i < H; ++i)
			{
				if (stone[i][0] == stone[i][1] && stone[i][1] == stone[i][2] && stone[i][2] == stone[i][3] && stone[i][3] == stone[i][4])
				{
					sum += stone[i][0] * 5;
					stone[i][0] = stone[i][1] = stone[i][2] = stone[i][3] = stone[i][4] = 0;
				}
				else if (stone[i][0] == stone[i][1] && stone[i][1] == stone[i][2] && stone[i][2] == stone[i][3])
				{
					sum += stone[i][0] * 4;
					stone[i][0] = stone[i][1] = stone[i][2] = stone[i][3] = 0;
				}
				else if (stone[i][1] == stone[i][2] && stone[i][2] == stone[i][3] && stone[i][3] == stone[i][4])
				{
					sum += stone[i][1] * 4;
					stone[i][1] = stone[i][2] = stone[i][3] = stone[i][4] = 0;
				}
				else if (stone[i][0] == stone[i][1] && stone[i][1] == stone[i][2])
				{
					sum += stone[i][0] * 3;
					stone[i][0] = stone[i][1] = stone[i][2] = 0;
				}
				else if (stone[i][1] == stone[i][2] && stone[i][2] == stone[i][3])
				{
					sum += stone[i][1] * 3;
					stone[i][1] = stone[i][2] = stone[i][3] = 0;
				}
				else if (stone[i][2] == stone[i][3] && stone[i][3] == stone[i][4])
				{
					sum += stone[i][2] * 3;
					stone[i][2] = stone[i][3] = stone[i][4] = 0;
				}
			}
			for (int i = H - 1; i >= 0; --i)
			{
				for (int j = 0; j < 5; ++j)
				{
					if (stone[i][j] == 0)
					{
						int pos = i - 1;
						while (pos >= 0 && stone[pos][j] == 0)
						{
							--pos;
						}
						if (pos >= 0)
						{
							swap(stone[i][j], stone[pos][j]);
						}
					}
				}
			}
		}
		cout << sum << endl;
	}
}

int main()
{
	solve();
	return(0);
}