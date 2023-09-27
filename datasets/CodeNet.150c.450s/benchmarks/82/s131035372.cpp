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

void roll(vector<int> &f, string cmd)
{
	int tmp;
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
}

int main()
{
	vector<int> f(6);
	int q;
	int top, front;
	for (int i = 0; i < 6; i++)
	{
		cin >> f[i];
	}
	cin >> q;
	vector<int> res(q);
	for (int i = 0; i < q; i++)
	{
		cin >> top >> front;
		if (top != f[TOP])
		{
			if (top == f[FRONT])
			{
				roll(f, "N");
			}
			else if (top == f[RIGHT])
			{
				roll(f, "W");
			}
			else if (top == f[LEFT])
			{
				roll(f, "E");
			}
			else if (top == f[BACK])
			{
				roll(f, "S");
			}
			else if (top == f[BOTTOM])
			{
				roll(f, "NN");
			}
		}
		if (front == f[FRONT])
		{
			res[i] = f[RIGHT];
		}
		else if (front == f[RIGHT])
		{
			roll(f, "WSE");
			res[i] = f[RIGHT];
		}
		else if (front == f[LEFT])
		{
			roll(f, "ESW");
			res[i] = f[RIGHT];
		}
		else if (front == f[BACK])
		{
			roll(f, "WSSE");
			res[i] = f[RIGHT];
		}
	}
	for (int i = 0; i < q; i++)
	{
		cout << res[i] << endl;
	}
}
