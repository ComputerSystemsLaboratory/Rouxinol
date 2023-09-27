#include<iostream>
#include<map>
using namespace std;
int table[400 + 2][400 + 2] = {};
int main()
{
	int N;
	while (cin >> N && N != 0)
	{
		map<int,pair<int, int> > tableMap;
		int w = 1;
		int h = 1;
		int n = 0,d;
		int min_x = 200;
		int max_x = 200;

		int min_y = 200;
		int max_y = 200;
		table[200][200] = 0;
		tableMap[0]=  make_pair(200, 200);
		for (int i = 1; i < N;i++)
		{
			cin >> n >> d;
			int x = tableMap[n].second;
			int y = tableMap[n].first;
			int nx = x;
			int ny = y;

			if (d == 0)
			{
				nx = x - 1;
				if (nx < min_x)
				{
					min_x = nx;
					w++;
				}
			}
			else if (d == 1)
			{
				ny = y + 1;
				if (ny > max_y)
				{
					max_y = ny;
					h++;
				}
			}
			else if (d == 2)
			{
				nx = x + 1;
				if (nx > max_x)
				{
					max_x = nx;
					w++;
				}
			}
			else if (d == 3)
			{
				ny = y - 1;
				if (ny < min_y)
				{
					min_y = ny;
					h++;
				}
			}
			tableMap[i] = make_pair(ny, nx);
		}

		cout << w <<" "<<  h << endl;
	}
	return 0;
}