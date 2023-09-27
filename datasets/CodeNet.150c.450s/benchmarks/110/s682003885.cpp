#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <stack>
using namespace std;

int h, w, n;
int map[1000][1000];
int map_t[1000][1000];
int step;
vector<pair<int, int> > point;


bool SearchAndCollect(int goal)
{
	vector<pair<int, int> > point_t;
	for (int i = 0; i < point.size(); i++)
	{
		if (point[i].first > 0)
		{
			if (map_t[point[i].first - 1][point[i].second] == goal)
			{
				return true;
			}
			else if (map_t[point[i].first - 1][point[i].second] != -1)
			{
				map_t[point[i].first - 1][point[i].second] = -1;
				pair<int, int> temp;
				temp.first = point[i].first - 1;
				temp.second = point[i].second;
				point_t.push_back(temp);
			}
		}

		if (point[i].first < h - 1)
		{
			if (map_t[point[i].first + 1][point[i].second] == goal)
			{
				return true;
			}
			else if (map_t[point[i].first + 1][point[i].second] != -1)
			{
				map_t[point[i].first + 1][point[i].second] = -1;
				pair<int, int> temp;
				temp.first = point[i].first + 1;
				temp.second = point[i].second;
				point_t.push_back(temp);
			}
		}

		if (point[i].second > 0)
		{
			if (map_t[point[i].first][point[i].second - 1] == goal)
			{
				return true;
			}
			else if (map_t[point[i].first][point[i].second - 1] != -1)
			{
				map_t[point[i].first][point[i].second - 1] = -1;
				pair<int, int> temp;
				temp.first = point[i].first;
				temp.second = point[i].second - 1;
				point_t.push_back(temp);
			}
		}

		if (point[i].second < w - 1)
		{
			if (map_t[point[i].first][point[i].second + 1] == goal)
			{
				return true;
			}
			else if (map_t[point[i].first][point[i].second + 1] != -1)
			{
				map_t[point[i].first][point[i].second + 1] = -1;
				pair<int, int> temp;
				temp.first = point[i].first;
				temp.second = point[i].second + 1;
				point_t.push_back(temp);
			}
		}
	}
	point.clear();
	for (int i = 0; i < point_t.size(); i++)
	{
		if (point.size() <= i)
		{
			point.resize(point.size() + 1);
		}
		point[i] = point_t[i];
	}
	step++;
	return false;
}

int TimeFrom(int start)
{
	step = 1;
	int goal = start + 1;
	if (start == 10)
	{
		goal = 1;
	}

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			map_t[i][j] = map[i][j];
		}
	}

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (map[i][j] == start)
			{
				pair<int, int> temp;
				temp.first = i;
				temp.second = j;
				point.clear();
				point.push_back(temp);
				while (SearchAndCollect(goal) == false)
				{
				}
				return step;
			}
		}
	}
}

int main()
{
	string line;
	while (cin >> h >> w >> n)
	{
		for (int i = 0; i < h; i++)
		{
			cin >> line;
			for (int j = 0; j < w; j++)
			{
				switch (line[j])
				{
				case 'S':
					map[i][j] = 10;
					break;

				case '.':
					map[i][j] = 0;
					break;

				case 'X':
					map[i][j] = -1;
					break;

				default:
					map[i][j] = line[j] - '0';
					break;
				}
			}
		}

		int cnt = 0;
		for (int i = 0; i < n; i++)
		{
			if (i == 0)
			{
				cnt = cnt + TimeFrom(10);
			}
			else
			{
				cnt = cnt + TimeFrom(i);
			}
		}

		cout << cnt << endl;
	}


	return 0;
}