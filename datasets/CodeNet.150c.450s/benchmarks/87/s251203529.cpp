#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int h;
	while (cin >> h && h != 0)
	{
		int map[10 + 1][5];
		for (int j = 0; j < 5; j++)
		{
			map[0][j] = -1;
		}
		for (int i = 1; i <= h; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				cin >> map[i][j];
			}
		}
		int ans = 0;

		while (true)
		{
			vector<int> heightIndex;
			for (int i = 1; i <= h; i++)
			{
				if (map[i][2] == -1)continue;
				int left = 2;
				int right = 2;
				int value = map[i][2];
				while (left - 1>= 0 && map[i][left - 1] == value)left--;
				while (right + 1 < 5 && map[i][right + 1] == value)right++;
				int count = (right - left) + 1;
				if (count >= 3)
				{
					for (int k = left; k < right + 1; k++)
					{
						map[i][k] = -1;
					}
					ans += value * ((right - left) + 1);
					heightIndex.push_back(i);
				}
			}

			if (heightIndex.size() == 0)break;

			for (int i = h; i >= 1; i--)
			{
				for (int j = 0; j < 5; j++)
				{
					int k = 0;
					while (k + i <= h && map[i + k][j] == -1)
					{
						map[i + k][j] = map[i + k - 1][j];
						map[i + k - 1][j] = -1;
						k++;
					}
				}
			}
		}
		cout << ans <<endl;
	}
	return 0;
}