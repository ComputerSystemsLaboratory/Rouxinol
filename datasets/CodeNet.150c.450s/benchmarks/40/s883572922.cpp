#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum Face
{
	TOP = 0,
	NORTH = 1,
	WEST = 2,
	EAST = 3,
	SOUTH = 4,
	BOTTOM = 5,
};
int main()
{
	string cmd;
	vector<int> f(6);
	int tmp;
	for (int i = 0; i < 6; i++)
	{
		cin >> f[i];
	}
	cin >> cmd;
	for (int i = 0; i < cmd.size(); i++)
	{
		switch (cmd[i])
		{
		case 'E':
			tmp = f[TOP];
			f[TOP] = f[EAST];
			f[EAST] = f[BOTTOM];
			f[BOTTOM] = f[WEST];
			f[WEST] = tmp;
			break;
		case 'N':
			tmp = f[TOP];
			f[TOP] = f[NORTH];
			f[NORTH] = f[BOTTOM];
			f[BOTTOM] = f[SOUTH];
			f[SOUTH] = tmp;
			break;
		case 'S':
			tmp = f[TOP];
			f[TOP] = f[SOUTH];
			f[SOUTH] = f[BOTTOM];
			f[BOTTOM] = f[NORTH];
			f[NORTH] = tmp;
			break;
		case 'W':
			tmp = f[TOP];
			f[TOP] = f[WEST];
			f[WEST] = f[BOTTOM];
			f[BOTTOM] = f[EAST];
			f[EAST] = tmp;
			break;
		default:
			break;
		}
	}
	cout << f[0] << endl;
}
