#include <iostream>
#include  <stdio.h>
#include  <algorithm>
#include  <math.h>
#include  <vector>
#include  <string>
#include  <sstream>
#include  <numeric>
#include  <set>
#include <map>

#define rep(i, j) for(int i = 0; i < j; i++)
#define all(i) i.begin(), i.end()
#define ll long long

using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int num = 0;
	while (cin >> num && num != 0)
	{
		vector<vector<int>> gem(22, vector<int>(22, 0));
		rep(i, num)
		{
			int tmp[2] = { 0 };
			cin >> tmp[0] >> tmp[1];
			gem[tmp[0]][tmp[1]] = 1;
		}
		int num2 = 0;  cin >> num2;
		int x = 10, y = 10, ans = 0;
		rep(i, num2)
		{
			char dir = 0; int m = 0;
			cin >> dir >> m;
			rep(j, m)
			{
				switch (dir)
				{
				case 'N': y++; break;
				case 'E': x++;  break;
				case 'S': y--;  break;
				case 'W': x--;  break;
				}
				num -= gem[x][y];
				gem[x][y] = 0;
			}
		}
		if (num == 0) { printf("Yes\n"); }
		else { printf("No\n"); }
	}
	return 0;
}