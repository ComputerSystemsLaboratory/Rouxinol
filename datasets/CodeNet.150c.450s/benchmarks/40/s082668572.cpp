#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum Face
{
	TOP = 0,
	FRONT = 1,
	RIGHT = 2,
	LEFT = 3,
	BACK = 4,
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
			f[TOP] = f[LEFT];
			f[LEFT] = f[BOTTOM];
			f[BOTTOM] = f[RIGHT];
			f[RIGHT] = tmp;
			break;
		case 'N':
			tmp = f[TOP];
			f[TOP] = f[FRONT];
			f[FRONT] = f[BOTTOM];
			f[BOTTOM] = f[BACK];
			f[BACK] = tmp;
			break;
		case 'S':
			tmp = f[TOP];
			f[TOP] = f[BACK];
			f[BACK] = f[BOTTOM];
			f[BOTTOM] = f[FRONT];
			f[FRONT] = tmp;
			break;
		case 'W':
			tmp = f[TOP];
			f[TOP] = f[RIGHT];
			f[RIGHT] = f[BOTTOM];
			f[BOTTOM] = f[LEFT];
			f[LEFT] = tmp;
			break;
		default:
			break;
		}
	}
	cout << f[TOP] << endl;
}
