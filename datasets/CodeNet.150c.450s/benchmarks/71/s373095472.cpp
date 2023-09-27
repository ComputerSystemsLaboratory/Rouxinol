#include <iostream>
using namespace std;

int times = 0;
int deep(int c, int depth)
{
	if (depth < 3)
	{
		for (int i = 0; i < 10; i++)
		{
			if (c >= i)
			{
				deep(c - i, depth + 1);
			}
		}
	}
	else if (depth == 3 && c < 10) 
		times++;
	return 0;
}

int main()
{
	int n;
	while (cin >> n)
	{
		times = 0;
		int c = n;
		if (c <= 36)
			deep(c, 0);
		else
			times = 0;
		cout << times << endl;
	}

	return 0;
}