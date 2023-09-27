#include <iostream>
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

void roll(vector<int> &f, char d, int n)
{
	int tmp;
	for (int i = 0; i < n; i++)
	{
		switch (d)
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
	int top_init, front_init;
	int top, front;
	for (int i = 0; i < 6; i++)
	{
		cin >> f[i];
		if (i == TOP)
		{
			top_init = f[i];
		}
		else if (i == FRONT)
		{
			front_init = f[i];
		}
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
				roll(f, 'N', 1);
			}
			else if (top == f[RIGHT])
			{
				roll(f, 'W', 1);
			}
			else if (top == f[LEFT])
			{
				roll(f, 'E', 1);
			}
			else if (top == f[BACK])
			{
				roll(f, 'S', 1);
			}
			else if (top == f[BOTTOM])
			{
				roll(f, 'N', 2);
			}
		}
		if (front == f[FRONT])
		{
			res[i] = f[RIGHT];
		}
		if (front == f[RIGHT])
		{
			roll(f, 'W', 1);
			roll(f, 'S', 1);
			roll(f, 'E', 1);
			res[i] = f[RIGHT];
		}
		else if (front == f[LEFT])
		{
			roll(f, 'E', 1);
			roll(f, 'S', 1);
			roll(f, 'W', 1);
			res[i] = f[RIGHT];
		}
		else if (front == f[BACK])
		{
			roll(f, 'W', 1);
			roll(f, 'S', 2);
			roll(f, 'E', 1);
			res[i] = f[RIGHT];
		}
	}
	for (int i = 0; i < q; i++)
	{
		cout << res[i] << endl;
	}
}
